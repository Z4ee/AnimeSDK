#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define MIHOYO_SDK_ASSETUTIL_ASBUNLOAD_OFFSET UNITYSDK_OFFSET(0x16A81560)
#define MIHOYO_SDK_ASSETUTIL_CALLMETHODWITHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16A81990)
#define MIHOYO_SDK_ASSETUTIL_CREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x16A81150)
#define MIHOYO_SDK_ASSETUTIL_DESTROYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x16A812B0)
#define MIHOYO_SDK_ASSETUTIL_GETASSETASBFULLPATH_OFFSET UNITYSDK_OFFSET(0x16A81520)
#define MIHOYO_SDK_ASSETUTIL_HASMETHODWITHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16A81660)
#define MIHOYO_SDK_ASSETUTIL_LOADFROMASB_OFFSET UNITYSDK_OFFSET(0x16A812D0)
#define MIHOYO_SDK_ASSETUTIL_LOADJSONFILE_OFFSET UNITYSDK_OFFSET(0x16A815C0)
#define MIHOYO_SDK_ASSETUTIL_LOADRESOURCE_OFFSET UNITYSDK_OFFSET(0x16A81210)
#define MIHOYO_SDK_ASSETUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A81CD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AssetUtil_TypeDefinitionIndex = 46928;

	class AssetUtil : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_MiHoYoSDKAsbPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AssetUtil_TypeDefinitionIndex)->GetStaticField(0x43270);
		}
		static ::UnityEngine::AssetBundle** StaticGet__assetBundle()
		{
			return (::UnityEngine::AssetBundle**)Il2CppClass::FromTypeDefinitionIndex(AssetUtil_TypeDefinitionIndex)->GetStaticField(0x43278);
		}
		// static const ::System::String* ASB_ROOT_PATH; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::GameObject* CreateGameObject(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_CREATEGAMEOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Void DestroyGameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_DESTROYGAMEOBJECT_OFFSET))(a1);
		}

		static ::UnityEngine::Object* LoadResource(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_LOADRESOURCE_OFFSET))(a1, a2);
		}

		static ::System::String* GetAssetAsbFullPath(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_GETASSETASBFULLPATH_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Object* LoadFromAsb(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_LOADFROMASB_OFFSET))(a1, a2);
		}

		static ::System::Void AsbUnload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_ASBUNLOAD_OFFSET))();
		}

		static ::System::String* LoadJsonFile(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_LOADJSONFILE_OFFSET))(a1);
		}

		static ::System::Boolean HasMethodWithParameters(::System::Type* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_HASMETHODWITHPARAMETERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* CallMethodWithParameters(::System::Type* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_CALLMETHODWITHPARAMETERS_OFFSET))(a1, a2, a3);
		}
	};
}
