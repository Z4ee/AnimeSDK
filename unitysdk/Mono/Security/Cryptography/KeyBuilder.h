#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1C1FE620)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_IV_OFFSET UNITYSDK_OFFSET(0x1C1FE740)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_KEY_OFFSET UNITYSDK_OFFSET(0x1C1FE690)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1FE610)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int KeyBuilder_TypeDefinitionIndex = 2450;

	class KeyBuilder : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(KeyBuilder_TypeDefinitionIndex)->GetStaticField(0x2470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_GET_RNG_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* Key(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_KEY_OFFSET))(size);
		}

		static ::Il2CppArray<::System::Byte>* IV(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYBUILDER_IV_OFFSET))(size);
		}
	};
}
