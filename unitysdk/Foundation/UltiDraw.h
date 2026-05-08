#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/UltiDraw_PROGRAM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/PrimitiveType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }

#define FOUNDATION_ULTIDRAW_BEGIN_OFFSET UNITYSDK_OFFSET(0x1A011820)
#define FOUNDATION_ULTIDRAW_CREATEBONEMESH_OFFSET UNITYSDK_OFFSET(0x1A0225D0)
#define FOUNDATION_ULTIDRAW_CREATEBONEWIRE_OFFSET UNITYSDK_OFFSET(0x1A025F70)
#define FOUNDATION_ULTIDRAW_CREATECAPSULEWIRE_OFFSET UNITYSDK_OFFSET(0x1A0248F0)
#define FOUNDATION_ULTIDRAW_CREATECIRCLEMESH_OFFSET UNITYSDK_OFFSET(0x1A0212C0)
#define FOUNDATION_ULTIDRAW_CREATECIRCLEWIRE_OFFSET UNITYSDK_OFFSET(0x1A022CC0)
#define FOUNDATION_ULTIDRAW_CREATECONEMESH_OFFSET UNITYSDK_OFFSET(0x1A021A80)
#define FOUNDATION_ULTIDRAW_CREATECONEWIRE_OFFSET UNITYSDK_OFFSET(0x1A0256E0)
#define FOUNDATION_ULTIDRAW_CREATECUBEWIRE_OFFSET UNITYSDK_OFFSET(0x1A023340)
#define FOUNDATION_ULTIDRAW_CREATECYLINDERWIRE_OFFSET UNITYSDK_OFFSET(0x1A024090)
#define FOUNDATION_ULTIDRAW_CREATEPYRAMIDMESH_OFFSET UNITYSDK_OFFSET(0x1A022040)
#define FOUNDATION_ULTIDRAW_CREATEPYRAMIDWIRE_OFFSET UNITYSDK_OFFSET(0x1A025C60)
#define FOUNDATION_ULTIDRAW_CREATEQUADWIRE_OFFSET UNITYSDK_OFFSET(0x1A023130)
#define FOUNDATION_ULTIDRAW_CREATESPHEREWIRE_OFFSET UNITYSDK_OFFSET(0x1A023770)
#define FOUNDATION_ULTIDRAW_DARKEN_OFFSET UNITYSDK_OFFSET(0x1A020C80)
#define FOUNDATION_ULTIDRAW_DRAWARROW_1_OFFSET UNITYSDK_OFFSET(0x1A0154E0)
#define FOUNDATION_ULTIDRAW_DRAWARROW_OFFSET UNITYSDK_OFFSET(0x1A015280)
#define FOUNDATION_ULTIDRAW_DRAWBONE_OFFSET UNITYSDK_OFFSET(0x1A018370)
#define FOUNDATION_ULTIDRAW_DRAWCAPSULE_OFFSET UNITYSDK_OFFSET(0x1A017480)
#define FOUNDATION_ULTIDRAW_DRAWCIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1A013CC0)
#define FOUNDATION_ULTIDRAW_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0x1A013810)
#define FOUNDATION_ULTIDRAW_DRAWCONE_OFFSET UNITYSDK_OFFSET(0x1A017990)
#define FOUNDATION_ULTIDRAW_DRAWCUBE_OFFSET UNITYSDK_OFFSET(0x1A016180)
#define FOUNDATION_ULTIDRAW_DRAWCUBOID_OFFSET UNITYSDK_OFFSET(0x1A016610)
#define FOUNDATION_ULTIDRAW_DRAWCYLINDER_OFFSET UNITYSDK_OFFSET(0x1A0103C0)
#define FOUNDATION_ULTIDRAW_DRAWELLIPSE_1_OFFSET UNITYSDK_OFFSET(0x1A014A80)
#define FOUNDATION_ULTIDRAW_DRAWELLIPSE_OFFSET UNITYSDK_OFFSET(0x1A014930)
#define FOUNDATION_ULTIDRAW_DRAWELLIPSOID_OFFSET UNITYSDK_OFFSET(0x1A016F90)
#define FOUNDATION_ULTIDRAW_DRAWGRID_OFFSET UNITYSDK_OFFSET(0x1A015750)
#define FOUNDATION_ULTIDRAW_DRAWGUIBARS_1_OFFSET UNITYSDK_OFFSET(0x1A01FB90)
#define FOUNDATION_ULTIDRAW_DRAWGUIBARS_OFFSET UNITYSDK_OFFSET(0x1A01F870)
#define FOUNDATION_ULTIDRAW_DRAWGUICIRCLE_OFFSET UNITYSDK_OFFSET(0x1A01C3A0)
#define FOUNDATION_ULTIDRAW_DRAWGUICIRCULARPIVOT_OFFSET UNITYSDK_OFFSET(0x1A0205C0)
#define FOUNDATION_ULTIDRAW_DRAWGUICIRCULARPOINT_OFFSET UNITYSDK_OFFSET(0x1A020970)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_1_OFFSET UNITYSDK_OFFSET(0x1A01E600)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_2_OFFSET UNITYSDK_OFFSET(0x1A01EC00)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_3_OFFSET UNITYSDK_OFFSET(0x1A01F230)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_OFFSET UNITYSDK_OFFSET(0x1A01E020)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_1_OFFSET UNITYSDK_OFFSET(0x1A01D100)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_2_OFFSET UNITYSDK_OFFSET(0x1A01D5F0)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_3_OFFSET UNITYSDK_OFFSET(0x1A01DAF0)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_OFFSET UNITYSDK_OFFSET(0x1A01CB60)
#define FOUNDATION_ULTIDRAW_DRAWGUIHORIZONTALBAR_OFFSET UNITYSDK_OFFSET(0x1A01FED0)
#define FOUNDATION_ULTIDRAW_DRAWGUIHORIZONTALPIVOT_OFFSET UNITYSDK_OFFSET(0x1A0200D0)
#define FOUNDATION_ULTIDRAW_DRAWGUILINE_1_OFFSET UNITYSDK_OFFSET(0x1A01A480)
#define FOUNDATION_ULTIDRAW_DRAWGUILINE_2_OFFSET UNITYSDK_OFFSET(0x1A01AAE0)
#define FOUNDATION_ULTIDRAW_DRAWGUILINE_OFFSET UNITYSDK_OFFSET(0x1A01A1C0)
#define FOUNDATION_ULTIDRAW_DRAWGUIRECTANGLEFRAME_OFFSET UNITYSDK_OFFSET(0x1A01BCE0)
#define FOUNDATION_ULTIDRAW_DRAWGUIRECTANGLE_1_OFFSET UNITYSDK_OFFSET(0x1A01B7A0)
#define FOUNDATION_ULTIDRAW_DRAWGUIRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1A01B330)
#define FOUNDATION_ULTIDRAW_DRAWGUITEXTURE_OFFSET UNITYSDK_OFFSET(0x1A01C910)
#define FOUNDATION_ULTIDRAW_DRAWGUITRIANGLE_OFFSET UNITYSDK_OFFSET(0x1A01C020)
#define FOUNDATION_ULTIDRAW_DRAWGUIVERTICALPIVOT_OFFSET UNITYSDK_OFFSET(0x1A020340)
#define FOUNDATION_ULTIDRAW_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1A012EF0)
#define FOUNDATION_ULTIDRAW_DRAWLINE_2_OFFSET UNITYSDK_OFFSET(0x1A013070)
#define FOUNDATION_ULTIDRAW_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1A012CD0)
#define FOUNDATION_ULTIDRAW_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1A013950)
#define FOUNDATION_ULTIDRAW_DRAWPYRAMID_OFFSET UNITYSDK_OFFSET(0x1A017E80)
#define FOUNDATION_ULTIDRAW_DRAWQUAD_OFFSET UNITYSDK_OFFSET(0x1A015C90)
#define FOUNDATION_ULTIDRAW_DRAWROTATEGIZMO_OFFSET UNITYSDK_OFFSET(0x1A019430)
#define FOUNDATION_ULTIDRAW_DRAWSCALEGIZMO_OFFSET UNITYSDK_OFFSET(0x1A019870)
#define FOUNDATION_ULTIDRAW_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1A016B00)
#define FOUNDATION_ULTIDRAW_DRAWTRANSLATEGIZMO_OFFSET UNITYSDK_OFFSET(0x1A018860)
#define FOUNDATION_ULTIDRAW_DRAWTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1A013690)
#define FOUNDATION_ULTIDRAW_DRAWWIREBONE_OFFSET UNITYSDK_OFFSET(0x1A0184E0)
#define FOUNDATION_ULTIDRAW_DRAWWIRECAPSULE_OFFSET UNITYSDK_OFFSET(0x1A017600)
#define FOUNDATION_ULTIDRAW_DRAWWIRECIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1A014490)
#define FOUNDATION_ULTIDRAW_DRAWWIRECIRCLE_OFFSET UNITYSDK_OFFSET(0x1A013E20)
#define FOUNDATION_ULTIDRAW_DRAWWIRECONE_OFFSET UNITYSDK_OFFSET(0x1A017B00)
#define FOUNDATION_ULTIDRAW_DRAWWIRECUBE_OFFSET UNITYSDK_OFFSET(0x1A0162E0)
#define FOUNDATION_ULTIDRAW_DRAWWIRECUBOID_OFFSET UNITYSDK_OFFSET(0x1A016770)
#define FOUNDATION_ULTIDRAW_DRAWWIRECYLINDER_OFFSET UNITYSDK_OFFSET(0x1A010540)
#define FOUNDATION_ULTIDRAW_DRAWWIREDBONE_OFFSET UNITYSDK_OFFSET(0x1A018650)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCAPSULE_OFFSET UNITYSDK_OFFSET(0x1A017780)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1A014760)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCIRCLE_OFFSET UNITYSDK_OFFSET(0x1A0145F0)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCONE_OFFSET UNITYSDK_OFFSET(0x1A017C70)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCUBE_OFFSET UNITYSDK_OFFSET(0x1A016440)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCUBOID_OFFSET UNITYSDK_OFFSET(0x1A0168D0)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCYLINDER_OFFSET UNITYSDK_OFFSET(0x1A0106C0)
#define FOUNDATION_ULTIDRAW_DRAWWIREDELLIPSE_1_OFFSET UNITYSDK_OFFSET(0x1A015070)
#define FOUNDATION_ULTIDRAW_DRAWWIREDELLIPSE_OFFSET UNITYSDK_OFFSET(0x1A014EB0)
#define FOUNDATION_ULTIDRAW_DRAWWIREDELLIPSOID_OFFSET UNITYSDK_OFFSET(0x1A017270)
#define FOUNDATION_ULTIDRAW_DRAWWIREDPYRAMID_OFFSET UNITYSDK_OFFSET(0x1A018160)
#define FOUNDATION_ULTIDRAW_DRAWWIREDQUAD_OFFSET UNITYSDK_OFFSET(0x1A015F70)
#define FOUNDATION_ULTIDRAW_DRAWWIREDSPHERE_OFFSET UNITYSDK_OFFSET(0x1A016DC0)
#define FOUNDATION_ULTIDRAW_DRAWWIREELLIPSE_1_OFFSET UNITYSDK_OFFSET(0x1A014D40)
#define FOUNDATION_ULTIDRAW_DRAWWIREELLIPSE_OFFSET UNITYSDK_OFFSET(0x1A014BF0)
#define FOUNDATION_ULTIDRAW_DRAWWIREELLIPSOID_OFFSET UNITYSDK_OFFSET(0x1A017100)
#define FOUNDATION_ULTIDRAW_DRAWWIREPYRAMID_OFFSET UNITYSDK_OFFSET(0x1A017FF0)
#define FOUNDATION_ULTIDRAW_DRAWWIREQUAD_OFFSET UNITYSDK_OFFSET(0x1A015E00)
#define FOUNDATION_ULTIDRAW_DRAWWIRESPHERE_OFFSET UNITYSDK_OFFSET(0x1A016C60)
#define FOUNDATION_ULTIDRAW_DRAWWIRE_OFFSET UNITYSDK_OFFSET(0x1A013F60)
#define FOUNDATION_ULTIDRAW_END_OFFSET UNITYSDK_OFFSET(0x1A012390)
#define FOUNDATION_ULTIDRAW_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x1A012220)
#define FOUNDATION_ULTIDRAW_GETGUIRECT_OFFSET UNITYSDK_OFFSET(0x1A0211C0)
#define FOUNDATION_ULTIDRAW_GETPRIMITIVEMESH_OFFSET UNITYSDK_OFFSET(0x1A0217E0)
#define FOUNDATION_ULTIDRAW_GETRAINBOWCOLORS_OFFSET UNITYSDK_OFFSET(0x1A020D30)
#define FOUNDATION_ULTIDRAW_GETRANDOMCOLOR_OFFSET UNITYSDK_OFFSET(0x1A021120)
#define FOUNDATION_ULTIDRAW_INITIALISE_OFFSET UNITYSDK_OFFSET(0x1A0119C0)
#define FOUNDATION_ULTIDRAW_LIGHTEN_OFFSET UNITYSDK_OFFSET(0x1A020BD0)
#define FOUNDATION_ULTIDRAW_NORMALISE_OFFSET UNITYSDK_OFFSET(0x1A01D030)
#define FOUNDATION_ULTIDRAW_RETURN_OFFSET UNITYSDK_OFFSET(0x1A012E10)
#define FOUNDATION_ULTIDRAW_SETCURVATURE_OFFSET UNITYSDK_OFFSET(0x1A012AF0)
#define FOUNDATION_ULTIDRAW_SETDEPTHRENDERING_OFFSET UNITYSDK_OFFSET(0x1A012670)
#define FOUNDATION_ULTIDRAW_SETFILLING_OFFSET UNITYSDK_OFFSET(0x1A012BC0)
#define FOUNDATION_ULTIDRAW_SETPROGRAM_OFFSET UNITYSDK_OFFSET(0x1A0124C0)
#define FOUNDATION_ULTIDRAW_TRANSPARENT_OFFSET UNITYSDK_OFFSET(0x1A020B20)
#define FOUNDATION_ULTIDRAW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0263B0)

namespace Foundation
{
	inline static constexpr unsigned int UltiDraw_TypeDefinitionIndex = 7696;

	class UltiDraw : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CubeWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x66E0);
		}
		static ::UnityEngine::Material** StaticGet_MeshMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x66E8);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CircleWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x66F0);
		}
		static ::UnityEngine::Material** StaticGet_GLMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x66F8);
		}
		static ::UnityEngine::Camera** StaticGet_Camera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6700);
		}
		static ::UnityEngine::Mesh** StaticGet_ConeMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6708);
		}
		static ::UnityEngine::Mesh** StaticGet_CylinderMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6710);
		}
		static ::UnityEngine::Mesh** StaticGet_CapsuleMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6718);
		}
		static ::UnityEngine::Mesh** StaticGet_PyramidMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6720);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_SphereWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6728);
		}
		static ::UnityEngine::Mesh** StaticGet_QuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6730);
		}
		static ::UnityEngine::Mesh** StaticGet_Initialised()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6738);
		}
		static ::UnityEngine::Mesh** StaticGet_SphereMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6740);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CylinderWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6748);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_QuadWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6750);
		}
		static ::UnityEngine::Mesh** StaticGet_CubeMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6758);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_ConeWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6760);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_BoneWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6768);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CapsuleWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6770);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_PyramidWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6778);
		}
		static ::UnityEngine::Mesh** StaticGet_BoneMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6780);
		}
		static ::UnityEngine::Mesh** StaticGet_CircleMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6788);
		}
		static ::UnityEngine::Color* StaticGet_Orange()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3390);
		}
		static ::System::Boolean* StaticGet_Active()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33A0);
		}
		static ::UnityEngine::Color* StaticGet_White()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33A4);
		}
		static ::System::Single* StaticGet_GUIOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33B4);
		}
		static ::UnityEngine::Color* StaticGet_DarkGrey()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33B8);
		}
		static ::UnityEngine::Color* StaticGet_DarkGreen()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33C8);
		}
		static ::UnityEngine::Color* StaticGet_Magenta()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33D8);
		}
		static ::UnityEngine::Color* StaticGet_Red()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33E8);
		}
		static ::UnityEngine::Color* StaticGet_DarkRed()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33F8);
		}
		static ::UnityEngine::Color* StaticGet_IndianRed()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3408);
		}
		static ::Foundation::UltiDraw_PROGRAM* StaticGet_Program()
		{
			return (::Foundation::UltiDraw_PROGRAM*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3418);
		}
		static ::UnityEngine::Vector3* StaticGet_ViewPosition()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x341C);
		}
		static ::System::Int32* StaticGet_Resolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3428);
		}
		static ::UnityEngine::Color* StaticGet_Grey()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x342C);
		}
		static ::UnityEngine::Color* StaticGet_DarkBlue()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x343C);
		}
		static ::UnityEngine::Color* StaticGet_Yellow()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x344C);
		}
		static ::UnityEngine::Color* StaticGet_Green()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x345C);
		}
		static ::UnityEngine::Color* StaticGet_Brown()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x346C);
		}
		static ::UnityEngine::Color* StaticGet_Blue()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x347C);
		}
		static ::UnityEngine::Color* StaticGet_BlackGrey()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x348C);
		}
		static ::UnityEngine::Color* StaticGet_Mustard()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x349C);
		}
		static ::UnityEngine::Color* StaticGet_LightGrey()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34AC);
		}
		static ::UnityEngine::Color* StaticGet_Teal()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34BC);
		}
		static ::UnityEngine::Color* StaticGet_Gold()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34CC);
		}
		static ::UnityEngine::Quaternion* StaticGet_ViewRotation()
		{
			return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34DC);
		}
		static ::UnityEngine::Color* StaticGet_Black()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34EC);
		}
		static ::UnityEngine::Color* StaticGet_Purple()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34FC);
		}
		static ::UnityEngine::Color* StaticGet_Cyan()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x350C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW__CCTOR_OFFSET))();
		}

		static ::System::Void Begin()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_BEGIN_OFFSET))();
		}

		static ::System::Void End()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_END_OFFSET))();
		}

		static ::System::Void SetDepthRendering(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_SETDEPTHRENDERING_OFFSET))(enabled);
		}

		static ::System::Void SetCurvature(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_SETCURVATURE_OFFSET))(value);
		}

		static ::System::Void SetFilling(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_SETFILLING_OFFSET))(value);
		}

		static ::System::Void DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWLINE_OFFSET))(start, end, color);
		}

		static ::System::Void DrawLine_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Single thickness, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWLINE_1_OFFSET))(start, end, thickness, color);
		}

		static ::System::Void DrawLine_2(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Single startThickness, ::System::Single endThickness, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWLINE_2_OFFSET))(start, end, startThickness, endThickness, color);
		}

		static ::System::Void DrawTriangle(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWTRIANGLE_OFFSET))(a, b, c, color);
		}

		static ::System::Void DrawCircle(::UnityEngine::Vector3 position, ::System::Single size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWCIRCLE_OFFSET))(position, size, color);
		}

		static ::System::Void DrawCircle_1(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWCIRCLE_1_OFFSET))(position, rotation, size, color);
		}

		static ::System::Void DrawWireCircle(::UnityEngine::Vector3 position, ::System::Single size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIRECIRCLE_OFFSET))(position, size, color);
		}

		static ::System::Void DrawWireCircle_1(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIRECIRCLE_1_OFFSET))(position, rotation, size, color);
		}

		static ::System::Void DrawWiredCircle(::UnityEngine::Vector3 position, ::System::Single size, ::UnityEngine::Color circleColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDCIRCLE_OFFSET))(position, size, circleColor, wireColor);
		}

		static ::System::Void DrawWiredCircle_1(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size, ::UnityEngine::Color circleColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDCIRCLE_1_OFFSET))(position, rotation, size, circleColor, wireColor);
		}

		static ::System::Void DrawEllipse(::UnityEngine::Vector3 position, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWELLIPSE_OFFSET))(position, width, height, color);
		}

		static ::System::Void DrawEllipse_1(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWELLIPSE_1_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWireEllipse(::UnityEngine::Vector3 position, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREELLIPSE_OFFSET))(position, width, height, color);
		}

		static ::System::Void DrawWireEllipse_1(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREELLIPSE_1_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWiredEllipse(::UnityEngine::Vector3 position, ::System::Single width, ::System::Single height, ::UnityEngine::Color ellipseColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDELLIPSE_OFFSET))(position, width, height, ellipseColor, wireColor);
		}

		static ::System::Void DrawWiredEllipse_1(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color ellipseColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDELLIPSE_1_OFFSET))(position, rotation, width, height, ellipseColor, wireColor);
		}

		static ::System::Void DrawArrow(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Single tipPivot, ::System::Single shaftWidth, ::System::Single tipWidth, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWARROW_OFFSET))(start, end, tipPivot, shaftWidth, tipWidth, color);
		}

		static ::System::Void DrawArrow_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Single tipPivot, ::System::Single shaftWidth, ::System::Single tipWidth, ::UnityEngine::Color shaftColor, ::UnityEngine::Color tipColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWARROW_1_OFFSET))(start, end, tipPivot, shaftWidth, tipWidth, shaftColor, tipColor);
		}

		static ::System::Void DrawGrid(::UnityEngine::Vector3 center, ::UnityEngine::Quaternion rotation, ::System::Int32 cellsX, ::System::Int32 cellsY, ::System::Single sizeX, ::System::Single sizeY, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGRID_OFFSET))(center, rotation, cellsX, cellsY, sizeX, sizeY, color);
		}

		static ::System::Void DrawQuad(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWQUAD_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWireQuad(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREQUAD_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWiredQuad(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color quadColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDQUAD_OFFSET))(position, rotation, width, height, quadColor, wireColor);
		}

		static ::System::Void DrawCube(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWCUBE_OFFSET))(position, rotation, size, color);
		}

		static ::System::Void DrawWireCube(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIRECUBE_OFFSET))(position, rotation, size, color);
		}

		static ::System::Void DrawWiredCube(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size, ::UnityEngine::Color cubeColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDCUBE_OFFSET))(position, rotation, size, cubeColor, wireColor);
		}

		static ::System::Void DrawCuboid(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWCUBOID_OFFSET))(position, rotation, size, color);
		}

		static ::System::Void DrawWireCuboid(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIRECUBOID_OFFSET))(position, rotation, size, color);
		}

		static ::System::Void DrawWiredCuboid(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 size, ::UnityEngine::Color cuboidColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDCUBOID_OFFSET))(position, rotation, size, cuboidColor, wireColor);
		}

		static ::System::Void DrawSphere(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWSPHERE_OFFSET))(position, rotation, size, color);
		}

		static ::System::Void DrawWireSphere(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIRESPHERE_OFFSET))(position, rotation, size, color);
		}

		static ::System::Void DrawWiredSphere(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size, ::UnityEngine::Color sphereColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDSPHERE_OFFSET))(position, rotation, size, sphereColor, wireColor);
		}

		static ::System::Void DrawEllipsoid(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWELLIPSOID_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWireEllipsoid(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREELLIPSOID_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWiredEllipsoid(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color ellipsoidColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDELLIPSOID_OFFSET))(position, rotation, width, height, ellipsoidColor, wireColor);
		}

		static ::System::Void DrawCylinder(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWCYLINDER_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWireCylinder(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIRECYLINDER_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWiredCylinder(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color cylinderColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDCYLINDER_OFFSET))(position, rotation, width, height, cylinderColor, wireColor);
		}

		static ::System::Void DrawCapsule(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWCAPSULE_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWireCapsule(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIRECAPSULE_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWiredCapsule(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color capsuleColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDCAPSULE_OFFSET))(position, rotation, width, height, capsuleColor, wireColor);
		}

		static ::System::Void DrawCone(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWCONE_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWireCone(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIRECONE_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWiredCone(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color coneColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDCONE_OFFSET))(position, rotation, width, height, coneColor, wireColor);
		}

		static ::System::Void DrawPyramid(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWPYRAMID_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWirePyramid(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREPYRAMID_OFFSET))(position, rotation, width, height, color);
		}

		static ::System::Void DrawWiredPyramid(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color pyramidColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDPYRAMID_OFFSET))(position, rotation, width, height, pyramidColor, wireColor);
		}

		static ::System::Void DrawBone(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single length, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWBONE_OFFSET))(position, rotation, width, length, color);
		}

		static ::System::Void DrawWireBone(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single length, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREBONE_OFFSET))(position, rotation, width, length, color);
		}

		static ::System::Void DrawWiredBone(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single length, ::UnityEngine::Color boneColor, ::UnityEngine::Color wireColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIREDBONE_OFFSET))(position, rotation, width, length, boneColor, wireColor);
		}

		static ::System::Void DrawTranslateGizmo(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWTRANSLATEGIZMO_OFFSET))(position, rotation, size);
		}

		static ::System::Void DrawRotateGizmo(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWROTATEGIZMO_OFFSET))(position, rotation, size);
		}

		static ::System::Void DrawScaleGizmo(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWSCALEGIZMO_OFFSET))(position, rotation, size);
		}

		static ::System::Void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWMESH_OFFSET))(mesh, position, rotation, scale, color);
		}

		static ::System::Void DrawGUILine(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUILINE_OFFSET))(start, end, color);
		}

		static ::System::Void DrawGUILine_1(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end, ::System::Single thickness, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUILINE_1_OFFSET))(start, end, thickness, color);
		}

		static ::System::Void DrawGUILine_2(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end, ::System::Single startThickness, ::System::Single endThickness, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUILINE_2_OFFSET))(start, end, startThickness, endThickness, color);
		}

		static ::System::Void DrawGUIRectangle(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIRECTANGLE_OFFSET))(center, size, color);
		}

		static ::System::Void DrawGUIRectangle_1(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::UnityEngine::Color color, ::System::Single borderWidth, ::UnityEngine::Color borderColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIRECTANGLE_1_OFFSET))(center, size, color, borderWidth, borderColor);
		}

		static ::System::Void DrawGUITriangle(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 c, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUITRIANGLE_OFFSET))(a, b, c, color);
		}

		static ::System::Void DrawGUICircle(::UnityEngine::Vector2 center, ::System::Single size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUICIRCLE_OFFSET))(center, size, color);
		}

		static ::System::Void DrawGUITexture(::UnityEngine::Vector2 center, ::System::Single size, ::UnityEngine::Texture* texture, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Texture*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUITEXTURE_OFFSET))(center, size, texture, color);
		}

		static ::System::Void DrawGUIRectangleFrame(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::System::Single thickness, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIRECTANGLEFRAME_OFFSET))(center, size, thickness, color);
		}

		static ::System::Void DrawGUIFunction(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::Il2CppArray<::System::Single>* values, ::System::Single yMin, ::System::Single yMax, ::UnityEngine::Color background, ::UnityEngine::Color line)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_OFFSET))(center, size, values, yMin, yMax, background, line);
		}

		static ::System::Void DrawGUIFunction_1(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::Il2CppArray<::System::Single>* values, ::System::Single yMin, ::System::Single yMax, ::System::Single thickness, ::UnityEngine::Color background, ::UnityEngine::Color line)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_1_OFFSET))(center, size, values, yMin, yMax, thickness, background, line);
		}

		static ::System::Void DrawGUIFunction_2(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::Il2CppArray<::System::Single>* values, ::System::Single yMin, ::System::Single yMax, ::UnityEngine::Color background, ::UnityEngine::Color line, ::System::Single borderWidth, ::UnityEngine::Color borderColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_2_OFFSET))(center, size, values, yMin, yMax, background, line, borderWidth, borderColor);
		}

		static ::System::Void DrawGUIFunction_3(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::Il2CppArray<::System::Single>* values, ::System::Single yMin, ::System::Single yMax, ::System::Single thickness, ::UnityEngine::Color background, ::UnityEngine::Color line, ::System::Single borderWidth, ::UnityEngine::Color borderColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_3_OFFSET))(center, size, values, yMin, yMax, thickness, background, line, borderWidth, borderColor);
		}

		static ::System::Void DrawGUIFunctions(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>* values, ::System::Single yMin, ::System::Single yMax, ::UnityEngine::Color background, ::Il2CppArray<::UnityEngine::Color>* lines)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>*, ::System::Single, ::System::Single, ::UnityEngine::Color, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_OFFSET))(center, size, values, yMin, yMax, background, lines);
		}

		static ::System::Void DrawGUIFunctions_1(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>* values, ::System::Single yMin, ::System::Single yMax, ::System::Single thickness, ::UnityEngine::Color background, ::Il2CppArray<::UnityEngine::Color>* lines)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_1_OFFSET))(center, size, values, yMin, yMax, thickness, background, lines);
		}

		static ::System::Void DrawGUIFunctions_2(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>* values, ::System::Single yMin, ::System::Single yMax, ::UnityEngine::Color background, ::Il2CppArray<::UnityEngine::Color>* lines, ::System::Single borderWidth, ::UnityEngine::Color borderColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>*, ::System::Single, ::System::Single, ::UnityEngine::Color, ::Il2CppArray<::UnityEngine::Color>*, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_2_OFFSET))(center, size, values, yMin, yMax, background, lines, borderWidth, borderColor);
		}

		static ::System::Void DrawGUIFunctions_3(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>* values, ::System::Single yMin, ::System::Single yMax, ::System::Single thickness, ::UnityEngine::Color background, ::Il2CppArray<::UnityEngine::Color>* lines, ::System::Single borderWidth, ::UnityEngine::Color borderColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Single>*>*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color, ::Il2CppArray<::UnityEngine::Color>*, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_3_OFFSET))(center, size, values, yMin, yMax, thickness, background, lines, borderWidth, borderColor);
		}

		static ::System::Void DrawGUIBars(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::Il2CppArray<::System::Single>* values, ::System::Single yMin, ::System::Single yMax, ::UnityEngine::Color background, ::UnityEngine::Color line)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIBARS_OFFSET))(center, size, values, yMin, yMax, background, line);
		}

		static ::System::Void DrawGUIBars_1(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::Il2CppArray<::System::Single>* values, ::System::Single yMin, ::System::Single yMax, ::System::Single thickness, ::UnityEngine::Color background, ::UnityEngine::Color line)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIBARS_1_OFFSET))(center, size, values, yMin, yMax, thickness, background, line);
		}

		static ::System::Void DrawGUIHorizontalBar(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::UnityEngine::Color backgroundColor, ::System::Single borderWidth, ::UnityEngine::Color borderColor, ::System::Single fillAmount, ::UnityEngine::Color fillColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIHORIZONTALBAR_OFFSET))(center, size, backgroundColor, borderWidth, borderColor, fillAmount, fillColor);
		}

		static ::System::Void DrawGUIHorizontalPivot(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::UnityEngine::Color backgroundColor, ::System::Single borderWidth, ::UnityEngine::Color borderColor, ::System::Single pivot, ::System::Single pivotWidth, ::UnityEngine::Color pivotColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIHORIZONTALPIVOT_OFFSET))(center, size, backgroundColor, borderWidth, borderColor, pivot, pivotWidth, pivotColor);
		}

		static ::System::Void DrawGUIVerticalPivot(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::UnityEngine::Color backgroundColor, ::System::Single borderWidth, ::UnityEngine::Color borderColor, ::System::Single pivot, ::System::Single pivotHeight, ::UnityEngine::Color pivotColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUIVERTICALPIVOT_OFFSET))(center, size, backgroundColor, borderWidth, borderColor, pivot, pivotHeight, pivotColor);
		}

		static ::System::Void DrawGUICircularPivot(::UnityEngine::Vector2 center, ::System::Single size, ::UnityEngine::Color backgroundColor, ::System::Single degrees, ::System::Single length, ::UnityEngine::Color pivotColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUICIRCULARPIVOT_OFFSET))(center, size, backgroundColor, degrees, length, pivotColor);
		}

		static ::System::Void DrawGUICircularPoint(::UnityEngine::Vector2 center, ::System::Single size, ::UnityEngine::Vector2 position, ::UnityEngine::Color backgroundColor, ::UnityEngine::Color pointColor)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWGUICIRCULARPOINT_OFFSET))(center, size, position, backgroundColor, pointColor);
		}

		static ::UnityEngine::Color Transparent(::UnityEngine::Color color, ::System::Single opacity)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_TRANSPARENT_OFFSET))(color, opacity);
		}

		static ::UnityEngine::Color Lighten(::UnityEngine::Color color, ::System::Single amount)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_LIGHTEN_OFFSET))(color, amount);
		}

		static ::UnityEngine::Color Darken(::UnityEngine::Color color, ::System::Single amount)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DARKEN_OFFSET))(color, amount);
		}

		static ::Il2CppArray<::UnityEngine::Color>* GetRainbowColors(::System::Int32 number)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_GETRAINBOWCOLORS_OFFSET))(number);
		}

		static ::UnityEngine::Color GetRandomColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_GETRANDOMCOLOR_OFFSET))();
		}

		static ::UnityEngine::Rect GetGUIRect(::System::Single x, ::System::Single y, ::System::Single w, ::System::Single h)
		{
			return ((::UnityEngine::Rect(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_GETGUIRECT_OFFSET))(x, y, w, h);
		}

		static ::System::Single Normalise(::System::Single value, ::System::Single valueMin, ::System::Single valueMax, ::System::Single resultMin, ::System::Single resultMax)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_NORMALISE_OFFSET))(value, valueMin, valueMax, resultMin, resultMax);
		}

		static ::System::Boolean Return()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_RETURN_OFFSET))();
		}

		static ::System::Void Initialise()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_INITIALISE_OFFSET))();
		}

		static ::System::Void SetProgram(::Foundation::UltiDraw_PROGRAM program)
		{
			return ((::System::Void(*)(::Foundation::UltiDraw_PROGRAM))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_SETPROGRAM_OFFSET))(program);
		}

		static ::System::Void DrawWire(::Il2CppArray<::UnityEngine::Vector3>* points, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_DRAWWIRE_OFFSET))(points, position, rotation, scale, color);
		}

		static ::UnityEngine::Camera* GetCamera()
		{
			return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_GETCAMERA_OFFSET))();
		}

		static ::UnityEngine::Mesh* GetPrimitiveMesh(::UnityEngine::PrimitiveType type)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::PrimitiveType))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_GETPRIMITIVEMESH_OFFSET))(type);
		}

		static ::UnityEngine::Mesh* CreateCircleMesh(::System::Int32 resolution)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATECIRCLEMESH_OFFSET))(resolution);
		}

		static ::UnityEngine::Mesh* CreateConeMesh(::System::Int32 resolution)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATECONEMESH_OFFSET))(resolution);
		}

		static ::UnityEngine::Mesh* CreatePyramidMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATEPYRAMIDMESH_OFFSET))();
		}

		static ::UnityEngine::Mesh* CreateBoneMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATEBONEMESH_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* CreateCircleWire(::System::Int32 resolution)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATECIRCLEWIRE_OFFSET))(resolution);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* CreateQuadWire()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATEQUADWIRE_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* CreateCubeWire()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATECUBEWIRE_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* CreateSphereWire(::System::Int32 resolution)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATESPHEREWIRE_OFFSET))(resolution);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* CreateCylinderWire(::System::Int32 resolution)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATECYLINDERWIRE_OFFSET))(resolution);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* CreateCapsuleWire(::System::Int32 resolution)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATECAPSULEWIRE_OFFSET))(resolution);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* CreateConeWire(::System::Int32 resolution)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATECONEWIRE_OFFSET))(resolution);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* CreatePyramidWire()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATEPYRAMIDWIRE_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* CreateBoneWire()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ULTIDRAW_CREATEBONEWIRE_OFFSET))();
		}
	};
}
