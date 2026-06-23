#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_CRYPTOGRAPHY_SHACONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E7120)
#define MONO_SECURITY_CRYPTOGRAPHY_SHACONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E7110)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int SHAConstants_TypeDefinitionIndex = 2469;

	class SHAConstants : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_K1()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SHAConstants_TypeDefinitionIndex)->GetStaticField(0x2460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHACONSTANTS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_SHACONSTANTS__CCTOR_OFFSET))();
		}
	};
}
