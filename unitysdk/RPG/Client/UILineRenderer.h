#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UILineRenderer_Curve.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_UILINERENDERER_ADDHEADOUTLINE_OFFSET UNITYSDK_OFFSET(0xCB57130)
#define RPG_CLIENT_UILINERENDERER_ADDTAILOUTLINE_OFFSET UNITYSDK_OFFSET(0xCB58AD0)
#define RPG_CLIENT_UILINERENDERER_FORCEMESHUPDATE_OFFSET UNITYSDK_OFFSET(0xCB52790)
#define RPG_CLIENT_UILINERENDERER_GENERATEBEZIERCURVE_1_OFFSET UNITYSDK_OFFSET(0xCB51D20)
#define RPG_CLIENT_UILINERENDERER_GENERATEBEZIERCURVE_OFFSET UNITYSDK_OFFSET(0xCB51C90)
#define RPG_CLIENT_UILINERENDERER_GETPRESERVEZCOORDINATE_OFFSET UNITYSDK_OFFSET(0xCB5AC90)
#define RPG_CLIENT_UILINERENDERER_GETSOURCEMESH_OFFSET UNITYSDK_OFFSET(0xCB5AAA0)
#define RPG_CLIENT_UILINERENDERER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xCB513B0)
#define RPG_CLIENT_UILINERENDERER_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xCB5A3E0)
#define RPG_CLIENT_UILINERENDERER_INTERPOLATEPOINTS_OFFSET UNITYSDK_OFFSET(0xCB56A70)
#define RPG_CLIENT_UILINERENDERER_ISUSINGMESHDATA_OFFSET UNITYSDK_OFFSET(0xCB5AB90)
#define RPG_CLIENT_UILINERENDERER_LOADPOINTSFROMTEXTFILE_OFFSET UNITYSDK_OFFSET(0xCB5A5C0)
#define RPG_CLIENT_UILINERENDERER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xCB52BB0)
#define RPG_CLIENT_UILINERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCB5A570)
#define RPG_CLIENT_UILINERENDERER_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xCB52E90)
#define RPG_CLIENT_UILINERENDERER_POPULATEMESHFROMASSET_OFFSET UNITYSDK_OFFSET(0xCB55E00)
#define RPG_CLIENT_UILINERENDERER_REFRESHMESHDATA_OFFSET UNITYSDK_OFFSET(0xCB5ACE0)
#define RPG_CLIENT_UILINERENDERER_SETHANDLEPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB51660)
#define RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_1_OFFSET UNITYSDK_OFFSET(0xCB52350)
#define RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_2_OFFSET UNITYSDK_OFFSET(0xCB525C0)
#define RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_OFFSET UNITYSDK_OFFSET(0xCB52120)
#define RPG_CLIENT_UILINERENDERER_SETMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xCB52860)
#define RPG_CLIENT_UILINERENDERER_SETPOINTDATA_OFFSET UNITYSDK_OFFSET(0xCB56EA0)
#define RPG_CLIENT_UILINERENDERER_SETPRESERVEZCOORDINATE_OFFSET UNITYSDK_OFFSET(0xCB5ABE0)
#define RPG_CLIENT_UILINERENDERER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB51530)
#define RPG_CLIENT_UILINERENDERER_SETRECTTRANSFORMSIZEDELTA_OFFSET UNITYSDK_OFFSET(0xCB52930)
#define RPG_CLIENT_UILINERENDERER_SETSOURCEMESH_OFFSET UNITYSDK_OFFSET(0xCB5AA00)
#define RPG_CLIENT_UILINERENDERER_SETUSEMESHDATA_OFFSET UNITYSDK_OFFSET(0xCB5AAF0)
#define RPG_CLIENT_UILINERENDERER_UPDATEBEZIERCURVES_OFFSET UNITYSDK_OFFSET(0xCB51A60)
#define RPG_CLIENT_UILINERENDERER_UPDATERECT_1_OFFSET UNITYSDK_OFFSET(0xCB520A0)
#define RPG_CLIENT_UILINERENDERER_UPDATERECT_OFFSET UNITYSDK_OFFSET(0xCB52AA0)
#define RPG_CLIENT_UILINERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB5AFE0)
#define RPG_CLIENT_UILINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xCB5AD80)
#define RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xCB5B060)
#define RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xCB5B040)
#define RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCB5B090)
#define RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xCB5B050)

namespace RPG::Client
{
	inline static constexpr unsigned int UILineRenderer_TypeDefinitionIndex = 67917;

	class UILineRenderer : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::UnityEngine::Vector4* StaticGet_UITangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UILineRenderer_TypeDefinitionIndex)->GetStaticField(0x12300);
		}
		static ::System::Int32* StaticGet__PercentShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILineRenderer_TypeDefinitionIndex)->GetStaticField(0x12310);
		}
		static ::UnityEngine::Vector3* StaticGet_UINormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UILineRenderer_TypeDefinitionIndex)->GetStaticField(0x12314);
		}
		::UnityEngine::Sprite* sprite; // 0xF0
		::UnityEngine::Color fillColor; // 0xF8
		::Il2CppArray<::UnityEngine::Vector2>* inPositionArray; // 0x108
		::UnityEngine::TextAsset* pointsTextFile; // 0x110
		::UnityEngine::Mesh* sourceMesh; // 0x118
		::System::Boolean useMeshData; // 0x120
		::System::Boolean preserveZCoordinate; // 0x121
		::System::Collections::Generic::List_1<::RPG::Client::UILineRenderer_Curve>* curves; // 0x128
		::System::Int32 roundMaxDistance; // 0x130
		::System::Single roundDistance; // 0x134
		::System::Boolean roundCap; // 0x138
		::System::Boolean showHandles; // 0x139
		::System::Boolean isClosed; // 0x13A
		::System::Int32 lineWidth; // 0x13C
		::System::Single antiAliasing; // 0x140
		::System::Boolean onlyAliasing; // 0x144
		::System::Single headAliasingOffset; // 0x148
		::System::Single tailAliasingOffset; // 0x14C
		::System::Single percent; // 0x150
		::System::Boolean autoHandleRotation; // 0x154
		::UnityEngine::GameObject* handleObj; // 0x158
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* outPositionList; // 0x160
		::Il2CppArray<::UnityEngine::Vector2>* posNormals; // 0x168
		::Il2CppArray<::UnityEngine::Vector2>* posTangents; // 0x170
		::Il2CppArray<::System::Single>* posDistances; // 0x178
		::Il2CppArray<::System::Single>* normalizePosDistances; // 0x180
		::UnityEngine::Rect rect; // 0x188
		::System::Single length; // 0x198
		::System::Single _lastPercent; // 0x19C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER__CCTOR_OFFSET))();
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_GET_LENGTH_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETPROGRESS_OFFSET))(this, a1);
		}

		::System::Void SetHandleProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETHANDLEPROGRESS_OFFSET))(this, a1);
		}

		::System::Void UpdateBezierCurves()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_UPDATEBEZIERCURVES_OFFSET))(this);
		}

		::System::Void GenerateBezierCurve(::RPG::Client::UILineRenderer_Curve a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILineRenderer_Curve))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_GENERATEBEZIERCURVE_OFFSET))(this, a1);
		}

		::System::Void GenerateBezierCurve_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_GENERATEBEZIERCURVE_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetLinePoints(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_OFFSET))(this, a1);
		}

		::System::Void SetLinePoints_1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetLinePoints_2(::UnityEngine::Vector2 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_2_OFFSET))(this, a1, a2);
		}

		::System::Void ForceMeshUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_FORCEMESHUPDATE_OFFSET))(this);
		}

		::System::Void SetMaterialInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETMATERIALINSTANCE_OFFSET))(this);
		}

		::System::Void SetRectTransformSizeDelta(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETRECTTRANSFORMSIZEDELTA_OFFSET))(this, a1);
		}

		::System::Void UpdateRect(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_UPDATERECT_OFFSET))(this, a1);
		}

		::System::Void UpdateRect_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_UPDATERECT_1_OFFSET))(this, a1);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void AddHeadOutline(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_ADDHEADOUTLINE_OFFSET))(this, a1);
		}

		::System::Void AddTailOutline(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_ADDTAILOUTLINE_OFFSET))(this, a1);
		}

		::System::Void InterpolatePoints(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_INTERPOLATEPOINTS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetPointData(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2& a3, ::UnityEngine::Vector2& a4, ::UnityEngine::Vector2& a5, ::UnityEngine::Vector2& a6, ::System::Single& a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETPOINTDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void LoadPointsFromTextFile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_LOADPOINTSFROMTEXTFILE_OFFSET))(this);
		}

		::System::Void PopulateMeshFromAsset(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_POPULATEMESHFROMASSET_OFFSET))(this, a1);
		}

		::System::Void SetSourceMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETSOURCEMESH_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* GetSourceMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_GETSOURCEMESH_OFFSET))(this);
		}

		::System::Void SetUseMeshData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETUSEMESHDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsUsingMeshData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_ISUSINGMESHDATA_OFFSET))(this);
		}

		::System::Void SetPreserveZCoordinate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETPRESERVEZCOORDINATE_OFFSET))(this, a1);
		}

		::System::Boolean GetPreserveZCoordinate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_GETPRESERVEZCOORDINATE_OFFSET))(this);
		}

		::System::Void RefreshMeshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_REFRESHMESHDATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* __iFixBaseProxy_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
		}
	};
}
