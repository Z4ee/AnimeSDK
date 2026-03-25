#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficulty; }

#define CLASS_1_2F7F4C6AFA7F3684_COMPARE_OFFSET UNITYSDK_OFFSET(0x114C8750)
#define CLASS_1_2F7F4C6AFA7F3684_METHOD_1_3049FAD1455AF13C_OFFSET UNITYSDK_OFFSET(0x114C8840)
#define CLASS_1_2F7F4C6AFA7F3684_METHOD_1_34F79247D1729B1F_OFFSET UNITYSDK_OFFSET(0x114C8920)
#define CLASS_1_2F7F4C6AFA7F3684__CCTOR_OFFSET UNITYSDK_OFFSET(0x114C8AC0)
#define CLASS_1_2F7F4C6AFA7F3684__CTOR_OFFSET UNITYSDK_OFFSET(0x114C8AB0)

inline static constexpr unsigned int Class_1_2F7F4C6AFA7F3684_TypeDefinitionIndex = 55101;

class Class_1_2F7F4C6AFA7F3684 : public ::System::Object
{
public:
	static ::Class_1_2F7F4C6AFA7F3684** StaticGet_Field_1_0()
	{
		return (::Class_1_2F7F4C6AFA7F3684**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F7F4C6AFA7F3684_TypeDefinitionIndex)->GetStaticField(0x1D970);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F7F4C6AFA7F3684__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F7F4C6AFA7F3684__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::RPG::Client::IRogueTournDifficulty* a1, ::RPG::Client::IRogueTournDifficulty* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + CLASS_1_2F7F4C6AFA7F3684_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_3049FAD1455AF13C(::RPG::Client::IRogueTournDifficulty* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + CLASS_1_2F7F4C6AFA7F3684_METHOD_1_3049FAD1455AF13C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_34F79247D1729B1F(::RPG::Client::IRogueTournDifficulty* a1, ::RPG::Client::IRogueTournDifficulty* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + CLASS_1_2F7F4C6AFA7F3684_METHOD_1_34F79247D1729B1F_OFFSET))(this, a1, a2);
	}
};
