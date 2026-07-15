#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_METHOD_2_2DC90EE759C8637B_OFFSET UNITYSDK_OFFSET(0x180151C0)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_METHOD_2_AC59C7CF75B4785D_OFFSET UNITYSDK_OFFSET(0x3978D80)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_METHOD_2_CF5357012C5DE97D_OFFSET UNITYSDK_OFFSET(0x18015170)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_ComponentLoadAssetInfo_TypeDefinitionIndex = 65345;

	struct alignas(8) ComponentAssetLoader_ComponentLoadAssetInfo
	{
		::Il2CppArray<::System::String*>* ParamArray; // 0x10

		::RPG::Client::ComponentAssetLoader_ComponentLoadAssetInfo Method_2_AC59C7CF75B4785D()
		{
			return ((::RPG::Client::ComponentAssetLoader_ComponentLoadAssetInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_METHOD_2_AC59C7CF75B4785D_OFFSET))(this);
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
