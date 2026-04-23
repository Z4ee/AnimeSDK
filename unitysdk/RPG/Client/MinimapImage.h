#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MinimapImage_FadeInfo.h"
#include "unitysdk/RPG/Client/MinimapImage___c__DisplayClass8_0.h"
#include "unitysdk/UnityEngine/UI/Image.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_MINIMAPIMAGE_GET__SECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA8AC190)
#define RPG_CLIENT_MINIMAPIMAGE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xA8AAC30)
#define RPG_CLIENT_MINIMAPIMAGE_SETFADEINFOS_OFFSET UNITYSDK_OFFSET(0xA8AA1B0)
#define RPG_CLIENT_MINIMAPIMAGE_SETROTATIONANGLES_OFFSET UNITYSDK_OFFSET(0xA8AA120)
#define RPG_CLIENT_MINIMAPIMAGE_SETSPRITEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA8A9FA0)
#define RPG_CLIENT_MINIMAPIMAGE_SETTARGETRECT_OFFSET UNITYSDK_OFFSET(0xA8AA050)
#define RPG_CLIENT_MINIMAPIMAGE_SETVISIBILITY_OFFSET UNITYSDK_OFFSET(0xA8AA0A0)
#define RPG_CLIENT_MINIMAPIMAGE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA8AA660)
#define RPG_CLIENT_MINIMAPIMAGE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA8AA200)
#define RPG_CLIENT_MINIMAPIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8AC2E0)
#define RPG_CLIENT_MINIMAPIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA8AC1E0)
#define RPG_CLIENT_MINIMAPIMAGE__GETTARGETCIRCLE_OFFSET UNITYSDK_OFFSET(0xA8AB9F0)
#define RPG_CLIENT_MINIMAPIMAGE__INITMESH_OFFSET UNITYSDK_OFFSET(0xA8AB490)
#define RPG_CLIENT_MINIMAPIMAGE__ONPOPULATEMESH_G____DISTPOINTTOLINE_8_1_OFFSET UNITYSDK_OFFSET(0xA8AC350)
#define RPG_CLIENT_MINIMAPIMAGE__ONPOPULATEMESH_G____OVERLAPS_8_0_OFFSET UNITYSDK_OFFSET(0xA8ABD90)
#define RPG_CLIENT_MINIMAPIMAGE__UPDATEFADING_OFFSET UNITYSDK_OFFSET(0xA8AA260)
#define RPG_CLIENT_MINIMAPIMAGE___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xA8AC460)
#define RPG_CLIENT_MINIMAPIMAGE___IFIXBASEPROXY_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA8AC450)
#define RPG_CLIENT_MINIMAPIMAGE___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA8AC440)

namespace RPG::Client
{
	inline static constexpr unsigned int MinimapImage_TypeDefinitionIndex = 66866;

	class MinimapImage : public ::UnityEngine::UI::Image
	{
	public:
		static ::UnityEngine::UI::VertexHelper** StaticGet_s_VertexHelper()
		{
			return (::UnityEngine::UI::VertexHelper**)Il2CppClass::FromTypeDefinitionIndex(MinimapImage_TypeDefinitionIndex)->GetStaticField(0x31520);
		}
		static ::System::Int32* StaticGet__FadeParams2ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MinimapImage_TypeDefinitionIndex)->GetStaticField(0xC590);
		}
		static ::System::Int32* StaticGet__FadeParams1ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MinimapImage_TypeDefinitionIndex)->GetStaticField(0xC594);
		}
		// static const ::System::Int32 _MAX_FADE_COUNT = 0xA; // 0x0
		::Il2CppArray<::UnityEngine::Vector4>* _FadeParams1; // 0x1E8
		::Il2CppArray<::UnityEngine::Vector4>* _FadeParams2; // 0x1F0
		::Il2CppArray<::Il2CppArray<::UnityEngine::Vector2>*>* _SpriteUvs; // 0x1F8
		::Il2CppArray<::UnityEngine::Vector2>* _RotationPivots; // 0x200
		::UnityEngine::RectTransform* _TargetRect; // 0x208
		::Il2CppArray<::System::Boolean>* _VisibleList; // 0x210
		::Il2CppArray<::System::Single>* _RotationAngles; // 0x218
		::Il2CppArray<::Il2CppArray<::RPG::Client::MinimapImage_FadeInfo>*>* _FadeList; // 0x220
		::Il2CppArray<::UnityEngine::Vector3>* _Verts; // 0x228
		::Il2CppArray<::UnityEngine::Vector3>* _Corners; // 0x230

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE__CCTOR_OFFSET))();
		}

		::System::Void SetSpriteVertexData(::Il2CppArray<::Il2CppArray<::UnityEngine::Vector2>*>* uvs, ::Il2CppArray<::UnityEngine::Vector2>* rotationPivots)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector2>*>*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE_SETSPRITEVERTEXDATA_OFFSET))(this, uvs, rotationPivots);
		}

		::System::Void SetTargetRect(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE_SETTARGETRECT_OFFSET))(this, rect);
		}

		::System::Void SetVisibility(::System::Int32 index, ::System::Boolean visibility)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE_SETVISIBILITY_OFFSET))(this, index, visibility);
		}

		::System::Void SetRotationAngles(::System::Int32 index, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE_SETROTATIONANGLES_OFFSET))(this, index, angle);
		}

		::System::Void SetFadeInfos(::Il2CppArray<::Il2CppArray<::RPG::Client::MinimapImage_FadeInfo>*>* fadeList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::RPG::Client::MinimapImage_FadeInfo>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE_SETFADEINFOS_OFFSET))(this, fadeList);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE_ONPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::Void _InitMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE__INITMESH_OFFSET))(this);
		}

		::System::Void _UpdateFading(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE__UPDATEFADING_OFFSET))(this, mat);
		}

		::System::Void _GetTargetCircle(::UnityEngine::Vector3& center, ::System::Single& radius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE__GETTARGETCIRCLE_OFFSET))(this, center, radius);
		}

		::System::Int32 get__SectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE_GET__SECTIONCOUNT_OFFSET))(this);
		}

		::System::Boolean _OnPopulateMesh_g____Overlaps_8_0(::Il2CppArray<::UnityEngine::Vector3>* verts, ::RPG::Client::MinimapImage___c__DisplayClass8_0& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::RPG::Client::MinimapImage___c__DisplayClass8_0&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE__ONPOPULATEMESH_G____OVERLAPS_8_0_OFFSET))(this, verts, a2);
		}

		static ::System::Single _OnPopulateMesh_g____DistPointToLine_8_1(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 e1, ::UnityEngine::Vector3 e2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE__ONPOPULATEMESH_G____DISTPOINTTOLINE_8_1_OFFSET))(point, e1, e2);
		}

		::System::Void __iFixBaseProxy_UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE___IFIXBASEPROXY_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPIMAGE___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET))(this, P0);
		}
	};
}
