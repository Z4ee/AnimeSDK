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

#define FOUNDATION_ULTIDRAW_BEGIN_OFFSET UNITYSDK_OFFSET(0x1C5D7FF0)
#define FOUNDATION_ULTIDRAW_CREATEBONEMESH_OFFSET UNITYSDK_OFFSET(0x1C5E8DA0)
#define FOUNDATION_ULTIDRAW_CREATEBONEWIRE_OFFSET UNITYSDK_OFFSET(0x1C5EC740)
#define FOUNDATION_ULTIDRAW_CREATECAPSULEWIRE_OFFSET UNITYSDK_OFFSET(0x1C5EB0C0)
#define FOUNDATION_ULTIDRAW_CREATECIRCLEMESH_OFFSET UNITYSDK_OFFSET(0x1C5E7A90)
#define FOUNDATION_ULTIDRAW_CREATECIRCLEWIRE_OFFSET UNITYSDK_OFFSET(0x1C5E9490)
#define FOUNDATION_ULTIDRAW_CREATECONEMESH_OFFSET UNITYSDK_OFFSET(0x1C5E8250)
#define FOUNDATION_ULTIDRAW_CREATECONEWIRE_OFFSET UNITYSDK_OFFSET(0x1C5EBEB0)
#define FOUNDATION_ULTIDRAW_CREATECUBEWIRE_OFFSET UNITYSDK_OFFSET(0x1C5E9B10)
#define FOUNDATION_ULTIDRAW_CREATECYLINDERWIRE_OFFSET UNITYSDK_OFFSET(0x1C5EA860)
#define FOUNDATION_ULTIDRAW_CREATEPYRAMIDMESH_OFFSET UNITYSDK_OFFSET(0x1C5E8810)
#define FOUNDATION_ULTIDRAW_CREATEPYRAMIDWIRE_OFFSET UNITYSDK_OFFSET(0x1C5EC430)
#define FOUNDATION_ULTIDRAW_CREATEQUADWIRE_OFFSET UNITYSDK_OFFSET(0x1C5E9900)
#define FOUNDATION_ULTIDRAW_CREATESPHEREWIRE_OFFSET UNITYSDK_OFFSET(0x1C5E9F40)
#define FOUNDATION_ULTIDRAW_DARKEN_OFFSET UNITYSDK_OFFSET(0x1C5E7450)
#define FOUNDATION_ULTIDRAW_DRAWARROW_1_OFFSET UNITYSDK_OFFSET(0x1C5DBCB0)
#define FOUNDATION_ULTIDRAW_DRAWARROW_OFFSET UNITYSDK_OFFSET(0x1C5DBA50)
#define FOUNDATION_ULTIDRAW_DRAWBONE_OFFSET UNITYSDK_OFFSET(0x1C5DEB40)
#define FOUNDATION_ULTIDRAW_DRAWCAPSULE_OFFSET UNITYSDK_OFFSET(0x1C5DDC50)
#define FOUNDATION_ULTIDRAW_DRAWCIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1C5DA490)
#define FOUNDATION_ULTIDRAW_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C5D9FE0)
#define FOUNDATION_ULTIDRAW_DRAWCONE_OFFSET UNITYSDK_OFFSET(0x1C5DE160)
#define FOUNDATION_ULTIDRAW_DRAWCUBE_OFFSET UNITYSDK_OFFSET(0x1C5DC950)
#define FOUNDATION_ULTIDRAW_DRAWCUBOID_OFFSET UNITYSDK_OFFSET(0x1C5DCDE0)
#define FOUNDATION_ULTIDRAW_DRAWCYLINDER_OFFSET UNITYSDK_OFFSET(0x1C5D6B90)
#define FOUNDATION_ULTIDRAW_DRAWELLIPSE_1_OFFSET UNITYSDK_OFFSET(0x1C5DB250)
#define FOUNDATION_ULTIDRAW_DRAWELLIPSE_OFFSET UNITYSDK_OFFSET(0x1C5DB100)
#define FOUNDATION_ULTIDRAW_DRAWELLIPSOID_OFFSET UNITYSDK_OFFSET(0x1C5DD760)
#define FOUNDATION_ULTIDRAW_DRAWGRID_OFFSET UNITYSDK_OFFSET(0x1C5DBF20)
#define FOUNDATION_ULTIDRAW_DRAWGUIBARS_1_OFFSET UNITYSDK_OFFSET(0x1C5E6360)
#define FOUNDATION_ULTIDRAW_DRAWGUIBARS_OFFSET UNITYSDK_OFFSET(0x1C5E6040)
#define FOUNDATION_ULTIDRAW_DRAWGUICIRCLE_OFFSET UNITYSDK_OFFSET(0x1C5E2B70)
#define FOUNDATION_ULTIDRAW_DRAWGUICIRCULARPIVOT_OFFSET UNITYSDK_OFFSET(0x1C5E6D90)
#define FOUNDATION_ULTIDRAW_DRAWGUICIRCULARPOINT_OFFSET UNITYSDK_OFFSET(0x1C5E7140)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_1_OFFSET UNITYSDK_OFFSET(0x1C5E4DD0)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_2_OFFSET UNITYSDK_OFFSET(0x1C5E53D0)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_3_OFFSET UNITYSDK_OFFSET(0x1C5E5A00)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTIONS_OFFSET UNITYSDK_OFFSET(0x1C5E47F0)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_1_OFFSET UNITYSDK_OFFSET(0x1C5E38D0)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_2_OFFSET UNITYSDK_OFFSET(0x1C5E3DC0)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_3_OFFSET UNITYSDK_OFFSET(0x1C5E42C0)
#define FOUNDATION_ULTIDRAW_DRAWGUIFUNCTION_OFFSET UNITYSDK_OFFSET(0x1C5E3330)
#define FOUNDATION_ULTIDRAW_DRAWGUIHORIZONTALBAR_OFFSET UNITYSDK_OFFSET(0x1C5E66A0)
#define FOUNDATION_ULTIDRAW_DRAWGUIHORIZONTALPIVOT_OFFSET UNITYSDK_OFFSET(0x1C5E68A0)
#define FOUNDATION_ULTIDRAW_DRAWGUILINE_1_OFFSET UNITYSDK_OFFSET(0x1C5E0C50)
#define FOUNDATION_ULTIDRAW_DRAWGUILINE_2_OFFSET UNITYSDK_OFFSET(0x1C5E12B0)
#define FOUNDATION_ULTIDRAW_DRAWGUILINE_OFFSET UNITYSDK_OFFSET(0x1C5E0990)
#define FOUNDATION_ULTIDRAW_DRAWGUIRECTANGLEFRAME_OFFSET UNITYSDK_OFFSET(0x1C5E24B0)
#define FOUNDATION_ULTIDRAW_DRAWGUIRECTANGLE_1_OFFSET UNITYSDK_OFFSET(0x1C5E1F70)
#define FOUNDATION_ULTIDRAW_DRAWGUIRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1C5E1B00)
#define FOUNDATION_ULTIDRAW_DRAWGUITEXTURE_OFFSET UNITYSDK_OFFSET(0x1C5E30E0)
#define FOUNDATION_ULTIDRAW_DRAWGUITRIANGLE_OFFSET UNITYSDK_OFFSET(0x1C5E27F0)
#define FOUNDATION_ULTIDRAW_DRAWGUIVERTICALPIVOT_OFFSET UNITYSDK_OFFSET(0x1C5E6B10)
#define FOUNDATION_ULTIDRAW_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1C5D96C0)
#define FOUNDATION_ULTIDRAW_DRAWLINE_2_OFFSET UNITYSDK_OFFSET(0x1C5D9840)
#define FOUNDATION_ULTIDRAW_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1C5D94A0)
#define FOUNDATION_ULTIDRAW_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x1C5DA120)
#define FOUNDATION_ULTIDRAW_DRAWPYRAMID_OFFSET UNITYSDK_OFFSET(0x1C5DE650)
#define FOUNDATION_ULTIDRAW_DRAWQUAD_OFFSET UNITYSDK_OFFSET(0x1C5DC460)
#define FOUNDATION_ULTIDRAW_DRAWROTATEGIZMO_OFFSET UNITYSDK_OFFSET(0x1C5DFC00)
#define FOUNDATION_ULTIDRAW_DRAWSCALEGIZMO_OFFSET UNITYSDK_OFFSET(0x1C5E0040)
#define FOUNDATION_ULTIDRAW_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1C5DD2D0)
#define FOUNDATION_ULTIDRAW_DRAWTRANSLATEGIZMO_OFFSET UNITYSDK_OFFSET(0x1C5DF030)
#define FOUNDATION_ULTIDRAW_DRAWTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1C5D9E60)
#define FOUNDATION_ULTIDRAW_DRAWWIREBONE_OFFSET UNITYSDK_OFFSET(0x1C5DECB0)
#define FOUNDATION_ULTIDRAW_DRAWWIRECAPSULE_OFFSET UNITYSDK_OFFSET(0x1C5DDDD0)
#define FOUNDATION_ULTIDRAW_DRAWWIRECIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1C5DAC60)
#define FOUNDATION_ULTIDRAW_DRAWWIRECIRCLE_OFFSET UNITYSDK_OFFSET(0x1C5DA5F0)
#define FOUNDATION_ULTIDRAW_DRAWWIRECONE_OFFSET UNITYSDK_OFFSET(0x1C5DE2D0)
#define FOUNDATION_ULTIDRAW_DRAWWIRECUBE_OFFSET UNITYSDK_OFFSET(0x1C5DCAB0)
#define FOUNDATION_ULTIDRAW_DRAWWIRECUBOID_OFFSET UNITYSDK_OFFSET(0x1C5DCF40)
#define FOUNDATION_ULTIDRAW_DRAWWIRECYLINDER_OFFSET UNITYSDK_OFFSET(0x1C5D6D10)
#define FOUNDATION_ULTIDRAW_DRAWWIREDBONE_OFFSET UNITYSDK_OFFSET(0x1C5DEE20)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCAPSULE_OFFSET UNITYSDK_OFFSET(0x1C5DDF50)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1C5DAF30)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C5DADC0)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCONE_OFFSET UNITYSDK_OFFSET(0x1C5DE440)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCUBE_OFFSET UNITYSDK_OFFSET(0x1C5DCC10)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCUBOID_OFFSET UNITYSDK_OFFSET(0x1C5DD0A0)
#define FOUNDATION_ULTIDRAW_DRAWWIREDCYLINDER_OFFSET UNITYSDK_OFFSET(0x1C5D6E90)
#define FOUNDATION_ULTIDRAW_DRAWWIREDELLIPSE_1_OFFSET UNITYSDK_OFFSET(0x1C5DB840)
#define FOUNDATION_ULTIDRAW_DRAWWIREDELLIPSE_OFFSET UNITYSDK_OFFSET(0x1C5DB680)
#define FOUNDATION_ULTIDRAW_DRAWWIREDELLIPSOID_OFFSET UNITYSDK_OFFSET(0x1C5DDA40)
#define FOUNDATION_ULTIDRAW_DRAWWIREDPYRAMID_OFFSET UNITYSDK_OFFSET(0x1C5DE930)
#define FOUNDATION_ULTIDRAW_DRAWWIREDQUAD_OFFSET UNITYSDK_OFFSET(0x1C5DC740)
#define FOUNDATION_ULTIDRAW_DRAWWIREDSPHERE_OFFSET UNITYSDK_OFFSET(0x1C5DD590)
#define FOUNDATION_ULTIDRAW_DRAWWIREELLIPSE_1_OFFSET UNITYSDK_OFFSET(0x1C5DB510)
#define FOUNDATION_ULTIDRAW_DRAWWIREELLIPSE_OFFSET UNITYSDK_OFFSET(0x1C5DB3C0)
#define FOUNDATION_ULTIDRAW_DRAWWIREELLIPSOID_OFFSET UNITYSDK_OFFSET(0x1C5DD8D0)
#define FOUNDATION_ULTIDRAW_DRAWWIREPYRAMID_OFFSET UNITYSDK_OFFSET(0x1C5DE7C0)
#define FOUNDATION_ULTIDRAW_DRAWWIREQUAD_OFFSET UNITYSDK_OFFSET(0x1C5DC5D0)
#define FOUNDATION_ULTIDRAW_DRAWWIRESPHERE_OFFSET UNITYSDK_OFFSET(0x1C5DD430)
#define FOUNDATION_ULTIDRAW_DRAWWIRE_OFFSET UNITYSDK_OFFSET(0x1C5DA730)
#define FOUNDATION_ULTIDRAW_END_OFFSET UNITYSDK_OFFSET(0x1C5D8B60)
#define FOUNDATION_ULTIDRAW_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x1C5D89F0)
#define FOUNDATION_ULTIDRAW_GETGUIRECT_OFFSET UNITYSDK_OFFSET(0x1C5E7990)
#define FOUNDATION_ULTIDRAW_GETPRIMITIVEMESH_OFFSET UNITYSDK_OFFSET(0x1C5E7FB0)
#define FOUNDATION_ULTIDRAW_GETRAINBOWCOLORS_OFFSET UNITYSDK_OFFSET(0x1C5E7500)
#define FOUNDATION_ULTIDRAW_GETRANDOMCOLOR_OFFSET UNITYSDK_OFFSET(0x1C5E78F0)
#define FOUNDATION_ULTIDRAW_INITIALISE_OFFSET UNITYSDK_OFFSET(0x1C5D8190)
#define FOUNDATION_ULTIDRAW_LIGHTEN_OFFSET UNITYSDK_OFFSET(0x1C5E73A0)
#define FOUNDATION_ULTIDRAW_NORMALISE_OFFSET UNITYSDK_OFFSET(0x1C5E3800)
#define FOUNDATION_ULTIDRAW_RETURN_OFFSET UNITYSDK_OFFSET(0x1C5D95E0)
#define FOUNDATION_ULTIDRAW_SETCURVATURE_OFFSET UNITYSDK_OFFSET(0x1C5D92C0)
#define FOUNDATION_ULTIDRAW_SETDEPTHRENDERING_OFFSET UNITYSDK_OFFSET(0x1C5D8E40)
#define FOUNDATION_ULTIDRAW_SETFILLING_OFFSET UNITYSDK_OFFSET(0x1C5D9390)
#define FOUNDATION_ULTIDRAW_SETPROGRAM_OFFSET UNITYSDK_OFFSET(0x1C5D8C90)
#define FOUNDATION_ULTIDRAW_TRANSPARENT_OFFSET UNITYSDK_OFFSET(0x1C5E72F0)
#define FOUNDATION_ULTIDRAW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5ECB80)

namespace Foundation
{
	inline static constexpr unsigned int UltiDraw_TypeDefinitionIndex = 8291;

	class UltiDraw : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CircleWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6710);
		}
		static ::UnityEngine::Mesh** StaticGet_CapsuleMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6718);
		}
		static ::UnityEngine::Mesh** StaticGet_CubeMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6720);
		}
		static ::UnityEngine::Material** StaticGet_GLMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6728);
		}
		static ::UnityEngine::Mesh** StaticGet_SphereMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6730);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_QuadWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6738);
		}
		static ::UnityEngine::Mesh** StaticGet_PyramidMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6740);
		}
		static ::UnityEngine::Camera** StaticGet_Camera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6748);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_PyramidWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6750);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_ConeWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6758);
		}
		static ::UnityEngine::Mesh** StaticGet_Initialised()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6760);
		}
		static ::UnityEngine::Mesh** StaticGet_CylinderMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6768);
		}
		static ::UnityEngine::Mesh** StaticGet_ConeMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6770);
		}
		static ::UnityEngine::Mesh** StaticGet_QuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6778);
		}
		static ::UnityEngine::Mesh** StaticGet_CircleMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6780);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CubeWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6788);
		}
		static ::UnityEngine::Mesh** StaticGet_BoneMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6790);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_SphereWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x6798);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_BoneWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x67A0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CapsuleWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x67A8);
		}
		static ::UnityEngine::Material** StaticGet_MeshMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x67B0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CylinderWire()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x67B8);
		}
		static ::UnityEngine::Color* StaticGet_DarkRed()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33B0);
		}
		static ::UnityEngine::Color* StaticGet_Cyan()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33C0);
		}
		static ::UnityEngine::Color* StaticGet_Blue()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33D0);
		}
		static ::UnityEngine::Color* StaticGet_Green()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33E0);
		}
		static ::Foundation::UltiDraw_PROGRAM* StaticGet_Program()
		{
			return (::Foundation::UltiDraw_PROGRAM*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33F0);
		}
		static ::UnityEngine::Color* StaticGet_Black()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x33F4);
		}
		static ::System::Boolean* StaticGet_Active()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3404);
		}
		static ::UnityEngine::Color* StaticGet_Grey()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3408);
		}
		static ::UnityEngine::Quaternion* StaticGet_ViewRotation()
		{
			return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3418);
		}
		static ::UnityEngine::Color* StaticGet_Magenta()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3428);
		}
		static ::System::Single* StaticGet_GUIOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3438);
		}
		static ::UnityEngine::Color* StaticGet_Mustard()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x343C);
		}
		static ::UnityEngine::Color* StaticGet_Brown()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x344C);
		}
		static ::UnityEngine::Vector3* StaticGet_ViewPosition()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x345C);
		}
		static ::UnityEngine::Color* StaticGet_DarkGreen()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3468);
		}
		static ::UnityEngine::Color* StaticGet_DarkBlue()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3478);
		}
		static ::UnityEngine::Color* StaticGet_Orange()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3488);
		}
		static ::UnityEngine::Color* StaticGet_Teal()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3498);
		}
		static ::UnityEngine::Color* StaticGet_Red()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34A8);
		}
		static ::UnityEngine::Color* StaticGet_DarkGrey()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34B8);
		}
		static ::UnityEngine::Color* StaticGet_Yellow()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34C8);
		}
		static ::UnityEngine::Color* StaticGet_Purple()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34D8);
		}
		static ::UnityEngine::Color* StaticGet_IndianRed()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34E8);
		}
		static ::UnityEngine::Color* StaticGet_LightGrey()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x34F8);
		}
		static ::UnityEngine::Color* StaticGet_BlackGrey()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3508);
		}
		static ::UnityEngine::Color* StaticGet_Gold()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3518);
		}
		static ::System::Int32* StaticGet_Resolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x3528);
		}
		static ::UnityEngine::Color* StaticGet_White()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UltiDraw_TypeDefinitionIndex)->GetStaticField(0x352C);
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
