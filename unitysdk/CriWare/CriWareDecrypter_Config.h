#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIWAREDECRYPTER_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC5C20)

namespace CriWare
{
	inline static constexpr unsigned int CriWareDecrypter_Config_TypeDefinitionIndex = 34990;

	class CriWareDecrypter_Config : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Boolean enableAtomDecryption; // 0x18
		::System::Boolean enableManaDecryption; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_CONFIG__CTOR_OFFSET))(this);
		}
	};
}
