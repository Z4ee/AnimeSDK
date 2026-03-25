#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define MIHOYO_SDK_ASSETUTIL_ASBUNLOAD_OFFSET UNITYSDK_OFFSET(0x84BB0A0)
#define MIHOYO_SDK_ASSETUTIL_CALLMETHODWITHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x84BB480)
#define MIHOYO_SDK_ASSETUTIL_CREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x84BAC90)
#define MIHOYO_SDK_ASSETUTIL_DESTROYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x84BADF0)
#define MIHOYO_SDK_ASSETUTIL_GETASSETASBFULLPATH_OFFSET UNITYSDK_OFFSET(0x84BB060)
#define MIHOYO_SDK_ASSETUTIL_HASMETHODWITHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x84BB1A0)
#define MIHOYO_SDK_ASSETUTIL_LOADFROMASB_OFFSET UNITYSDK_OFFSET(0x84BAE10)
#define MIHOYO_SDK_ASSETUTIL_LOADJSONFILE_OFFSET UNITYSDK_OFFSET(0x84BB100)
#define MIHOYO_SDK_ASSETUTIL_LOADRESOURCE_OFFSET UNITYSDK_OFFSET(0x84BAD50)
#define MIHOYO_SDK_ASSETUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x84BB780)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AssetUtil_TypeDefinitionIndex = 37232;

	class AssetUtil : public ::System::Object
	{
	public:
		static ::UnityEngine::AssetBundle** StaticGet__assetBundle()
		{
			return (::UnityEngine::AssetBundle**)Il2CppClass::FromTypeDefinitionIndex(AssetUtil_TypeDefinitionIndex)->GetStaticField(0xC7E0);
		}
		static ::System::String** StaticGet_MiHoYoSDKAsbPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AssetUtil_TypeDefinitionIndex)->GetStaticField(0xC7E8);
		}
		// static const ::System::String* ASB_ROOT_PATH; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::GameObject* CreateGameObject(::System::String* path, ::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_CREATEGAMEOBJECT_OFFSET))(path, name);
		}

		static ::System::Void DestroyGameObject(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_DESTROYGAMEOBJECT_OFFSET))(go);
		}

		static ::UnityEngine::Object* LoadResource(::System::String* path, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_LOADRESOURCE_OFFSET))(path, type);
		}

		static ::System::String* GetAssetAsbFullPath(::System::String* path, ::System::Type* type)
		{
			return ((::System::String*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_GETASSETASBFULLPATH_OFFSET))(path, type);
		}

		static ::UnityEngine::Object* LoadFromAsb(::System::String* path, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_LOADFROMASB_OFFSET))(path, type);
		}

		static ::System::Void AsbUnload()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_ASBUNLOAD_OFFSET))();
		}

		static ::System::String* LoadJsonFile(::System::String* fileName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_LOADJSONFILE_OFFSET))(fileName);
		}

		static ::System::Boolean HasMethodWithParameters(::System::Type* type, ::System::String* methodName, ::System::Int32 parameterCount)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_HASMETHODWITHPARAMETERS_OFFSET))(type, methodName, parameterCount);
		}

		static ::System::Object* CallMethodWithParameters(::System::Type* type, ::System::String* methodName, ::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASSETUTIL_CALLMETHODWITHPARAMETERS_OFFSET))(type, methodName, parameters);
		}
	};
}
