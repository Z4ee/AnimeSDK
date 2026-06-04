#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIWAREDECRYPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x146DB3D0)

namespace CriWare
{
	inline static constexpr unsigned int CriWareDecrypterConfig_TypeDefinitionIndex = 37211;

	class CriWareDecrypterConfig : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::String* authenticationFile; // 0x18
		::System::Boolean enableAtomDecryption; // 0x20
		::System::Boolean enableManaDecryption; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
