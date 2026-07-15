#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_APPUTILS_CNAMEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B2B380)

namespace RPG::Client
{
	inline static constexpr unsigned int AppUtils_CNameData_TypeDefinitionIndex = 56638;

	struct alignas(8) AppUtils_CNameData
	{
		static ::RPG::Client::AppUtils_CNameData* StaticGet_Emtpy()
		{
			return (::RPG::Client::AppUtils_CNameData*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_CNameData_TypeDefinitionIndex)->GetStaticField(0x54A80);
		}
		::System::String* IP; // 0x10
		::System::String* CName; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_CNAMEDATA__CCTOR_OFFSET))();
		}
	};
}
