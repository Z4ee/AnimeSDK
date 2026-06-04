#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class AssemblyName; }

#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x18193490)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181934E0)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18193590)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x18193480)

namespace MessagePack
{
	inline static constexpr unsigned int SkipClrVisibilityChecks_AssemblyNameEqualityComparer_TypeDefinitionIndex = 7191;

	class SkipClrVisibilityChecks_AssemblyNameEqualityComparer : public ::System::Object
	{
	public:
		static ::MessagePack::SkipClrVisibilityChecks_AssemblyNameEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::SkipClrVisibilityChecks_AssemblyNameEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(SkipClrVisibilityChecks_AssemblyNameEqualityComparer_TypeDefinitionIndex)->GetStaticField(0xA4B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Reflection::AssemblyName* a1, ::System::Reflection::AssemblyName* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::AssemblyName*, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::Reflection::AssemblyName* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
