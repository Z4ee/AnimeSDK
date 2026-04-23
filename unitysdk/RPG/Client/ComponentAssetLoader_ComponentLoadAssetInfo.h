#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_METHOD_2_2DC90EE759C8637B_OFFSET UNITYSDK_OFFSET(0xA0C0F60)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_METHOD_2_31738636975C45CC_OFFSET UNITYSDK_OFFSET(0xD5C10)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_METHOD_2_CF5357012C5DE97D_OFFSET UNITYSDK_OFFSET(0xA0C0F10)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_ComponentLoadAssetInfo_TypeDefinitionIndex = 63059;

	struct alignas(8) ComponentAssetLoader_ComponentLoadAssetInfo
	{
		::Il2CppArray<::System::String*>* ParamArray; // 0x10

		::RPG::Client::ComponentAssetLoader_ComponentLoadAssetInfo Method_2_31738636975C45CC()
		{
			return ((::RPG::Client::ComponentAssetLoader_ComponentLoadAssetInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_METHOD_2_31738636975C45CC_OFFSET))(this);
		}

		static ::System::String* Method_2_CF5357012C5DE97D(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_METHOD_2_CF5357012C5DE97D_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_2DC90EE759C8637B(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_METHOD_2_2DC90EE759C8637B_OFFSET))(a1);
		}
	};
}
