#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B652C17EE52BC224_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8736DC0)
#define CLASS_1_B652C17EE52BC224_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x8736B80)
#define CLASS_1_B652C17EE52BC224_METHOD_1_A08BACD566216B07_OFFSET UNITYSDK_OFFSET(0x8736D10)
#define CLASS_1_B652C17EE52BC224_METHOD_1_EEC88AC923245BDC_OFFSET UNITYSDK_OFFSET(0x8736C80)
#define CLASS_1_B652C17EE52BC224_METHOD_1_F6AA8A7D9DBC6A00_OFFSET UNITYSDK_OFFSET(0x8736BF0)
#define CLASS_1_B652C17EE52BC224__CTOR_OFFSET UNITYSDK_OFFSET(0x8736E30)

inline static constexpr unsigned int Class_1_B652C17EE52BC224_TypeDefinitionIndex = 57044;

class Class_1_B652C17EE52BC224 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::CharacterEffect*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B652C17EE52BC224__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B652C17EE52BC224_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_F6AA8A7D9DBC6A00(::RPG::Client::CharacterEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + CLASS_1_B652C17EE52BC224_METHOD_1_F6AA8A7D9DBC6A00_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEC88AC923245BDC(::RPG::Client::CharacterEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + CLASS_1_B652C17EE52BC224_METHOD_1_EEC88AC923245BDC_OFFSET))(this, a1);
	}

	::System::Void Method_1_A08BACD566216B07(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B652C17EE52BC224_METHOD_1_A08BACD566216B07_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B652C17EE52BC224_DISPOSE_OFFSET))(this);
	}
};
