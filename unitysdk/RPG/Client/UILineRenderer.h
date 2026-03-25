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

#define RPG_CLIENT_UILINERENDERER_ADDHEADOUTLINE_OFFSET UNITYSDK_OFFSET(0xA69C300)
#define RPG_CLIENT_UILINERENDERER_ADDTAILOUTLINE_OFFSET UNITYSDK_OFFSET(0xA69DEB0)
#define RPG_CLIENT_UILINERENDERER_FORCEMESHUPDATE_OFFSET UNITYSDK_OFFSET(0xA697A10)
#define RPG_CLIENT_UILINERENDERER_GENERATEBEZIERCURVE_1_OFFSET UNITYSDK_OFFSET(0xA696FA0)
#define RPG_CLIENT_UILINERENDERER_GENERATEBEZIERCURVE_OFFSET UNITYSDK_OFFSET(0xA696F10)
#define RPG_CLIENT_UILINERENDERER_GETPRESERVEZCOORDINATE_OFFSET UNITYSDK_OFFSET(0xA6A02C0)
#define RPG_CLIENT_UILINERENDERER_GETSOURCEMESH_OFFSET UNITYSDK_OFFSET(0xA6A00F0)
#define RPG_CLIENT_UILINERENDERER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA6966F0)
#define RPG_CLIENT_UILINERENDERER_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xA69F9C0)
#define RPG_CLIENT_UILINERENDERER_INTERPOLATEPOINTS_OFFSET UNITYSDK_OFFSET(0xA69BCD0)
#define RPG_CLIENT_UILINERENDERER_ISUSINGMESHDATA_OFFSET UNITYSDK_OFFSET(0xA6A01D0)
#define RPG_CLIENT_UILINERENDERER_LOADPOINTSFROMTEXTFILE_OFFSET UNITYSDK_OFFSET(0xA69FBA0)
#define RPG_CLIENT_UILINERENDERER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA697E30)
#define RPG_CLIENT_UILINERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA69FB50)
#define RPG_CLIENT_UILINERENDERER_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xA698110)
#define RPG_CLIENT_UILINERENDERER_POPULATEMESHFROMASSET_OFFSET UNITYSDK_OFFSET(0xA69B0A0)
#define RPG_CLIENT_UILINERENDERER_REFRESHMESHDATA_OFFSET UNITYSDK_OFFSET(0xA6A0310)
#define RPG_CLIENT_UILINERENDERER_SETHANDLEPROGRESS_OFFSET UNITYSDK_OFFSET(0xA696960)
#define RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_1_OFFSET UNITYSDK_OFFSET(0xA6975C0)
#define RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_2_OFFSET UNITYSDK_OFFSET(0xA697830)
#define RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_OFFSET UNITYSDK_OFFSET(0xA6973B0)
#define RPG_CLIENT_UILINERENDERER_SETMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xA697AD0)
#define RPG_CLIENT_UILINERENDERER_SETPOINTDATA_OFFSET UNITYSDK_OFFSET(0xA69C070)
#define RPG_CLIENT_UILINERENDERER_SETPRESERVEZCOORDINATE_OFFSET UNITYSDK_OFFSET(0xA6A0220)
#define RPG_CLIENT_UILINERENDERER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0xA696830)
#define RPG_CLIENT_UILINERENDERER_SETRECTTRANSFORMSIZEDELTA_OFFSET UNITYSDK_OFFSET(0xA697BA0)
#define RPG_CLIENT_UILINERENDERER_SETSOURCEMESH_OFFSET UNITYSDK_OFFSET(0xA6A0060)
#define RPG_CLIENT_UILINERENDERER_SETUSEMESHDATA_OFFSET UNITYSDK_OFFSET(0xA6A0140)
#define RPG_CLIENT_UILINERENDERER_UPDATEBEZIERCURVES_OFFSET UNITYSDK_OFFSET(0xA696D20)
#define RPG_CLIENT_UILINERENDERER_UPDATERECT_1_OFFSET UNITYSDK_OFFSET(0xA697330)
#define RPG_CLIENT_UILINERENDERER_UPDATERECT_OFFSET UNITYSDK_OFFSET(0xA697D10)
#define RPG_CLIENT_UILINERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6A0620)
#define RPG_CLIENT_UILINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A03A0)
#define RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xA6A06A0)
#define RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA6A0680)
#define RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA6A06D0)
#define RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xA6A0690)

namespace RPG::Client
{
	inline static constexpr unsigned int UILineRenderer_TypeDefinitionIndex = 59579;

	class UILineRenderer : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::UnityEngine::Vector4* StaticGet_UITangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(UILineRenderer_TypeDefinitionIndex)->GetStaticField(0x10B70);
		}
		static ::System::Int32* StaticGet__PercentShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILineRenderer_TypeDefinitionIndex)->GetStaticField(0x10B80);
		}
		static ::UnityEngine::Vector3* StaticGet_UINormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UILineRenderer_TypeDefinitionIndex)->GetStaticField(0x10B84);
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

		::System::Void SetProgress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETPROGRESS_OFFSET))(this, value);
		}

		::System::Void SetHandleProgress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETHANDLEPROGRESS_OFFSET))(this, value);
		}

		::System::Void UpdateBezierCurves()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_UPDATEBEZIERCURVES_OFFSET))(this);
		}

		::System::Void GenerateBezierCurve(::RPG::Client::UILineRenderer_Curve curve)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILineRenderer_Curve))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_GENERATEBEZIERCURVE_OFFSET))(this, curve);
		}

		::System::Void GenerateBezierCurve_1(::UnityEngine::Vector2 startPoint, ::UnityEngine::Vector2 endPoint, ::UnityEngine::Vector2 startTangentLength, ::UnityEngine::Vector2 endTangentLength, ::System::Int32 segments, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_GENERATEBEZIERCURVE_1_OFFSET))(this, startPoint, endPoint, startTangentLength, endTangentLength, segments, startIndex);
		}

		::System::Void SetLinePoints(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_OFFSET))(this, value);
		}

		::System::Void SetLinePoints_1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value, ::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_1_OFFSET))(this, value, position);
		}

		::System::Void SetLinePoints_2(::UnityEngine::Vector2 value, ::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETLINEPOINTS_2_OFFSET))(this, value, position);
		}

		::System::Void ForceMeshUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_FORCEMESHUPDATE_OFFSET))(this);
		}

		::System::Void SetMaterialInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETMATERIALINSTANCE_OFFSET))(this);
		}

		::System::Void SetRectTransformSizeDelta(::System::Boolean needRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETRECTTRANSFORMSIZEDELTA_OFFSET))(this, needRefresh);
		}

		::System::Void UpdateRect(::Il2CppArray<::UnityEngine::Vector2>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_UPDATERECT_OFFSET))(this, positions);
		}

		::System::Void UpdateRect_1(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_UPDATERECT_1_OFFSET))(this, position);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::System::Void AddHeadOutline(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_ADDHEADOUTLINE_OFFSET))(this, vh);
		}

		::System::Void AddTailOutline(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_ADDTAILOUTLINE_OFFSET))(this, vh);
		}

		::System::Void InterpolatePoints(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& posList, ::UnityEngine::Vector2 prevPos, ::UnityEngine::Vector2 pos, ::UnityEngine::Vector2 nextPos, ::System::Single roundingDistance, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_INTERPOLATEPOINTS_OFFSET))(this, posList, prevPos, pos, nextPos, roundingDistance, index);
		}

		::System::Void SetPointData(::UnityEngine::Vector2 currentPoint, ::UnityEngine::Vector2 nextPoint, ::UnityEngine::Vector2& currentUnitTangent, ::UnityEngine::Vector2& positionTangent, ::UnityEngine::Vector2& positionNormal, ::UnityEngine::Vector2& lastUnitTangent, ::System::Single& distance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETPOINTDATA_OFFSET))(this, currentPoint, nextPoint, currentUnitTangent, positionTangent, positionNormal, lastUnitTangent, distance);
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

		::System::Void PopulateMeshFromAsset(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_POPULATEMESHFROMASSET_OFFSET))(this, vh);
		}

		::System::Void SetSourceMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETSOURCEMESH_OFFSET))(this, mesh);
		}

		::UnityEngine::Mesh* GetSourceMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_GETSOURCEMESH_OFFSET))(this);
		}

		::System::Void SetUseMeshData(::System::Boolean use)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETUSEMESHDATA_OFFSET))(this, use);
		}

		::System::Boolean IsUsingMeshData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_ISUSINGMESHDATA_OFFSET))(this);
		}

		::System::Void SetPreserveZCoordinate(::System::Boolean preserve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER_SETPRESERVEZCOORDINATE_OFFSET))(this, preserve);
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

		::System::Void __iFixBaseProxy_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UILINERENDERER___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET))(this, P0);
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
