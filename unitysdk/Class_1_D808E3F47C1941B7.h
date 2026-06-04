#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D808E3F47C1941B7_COMPARETO_OFFSET UNITYSDK_OFFSET(0x137FA2D0)
#define CLASS_1_D808E3F47C1941B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x137FA350)
#define CLASS_1_D808E3F47C1941B7__CTOR_OFFSET UNITYSDK_OFFSET(0x137FA340)

inline static constexpr unsigned int Class_1_D808E3F47C1941B7_TypeDefinitionIndex = 51967;

class Class_1_D808E3F47C1941B7 : public ::System::Object
{
public:
	static ::Class_1_D808E3F47C1941B7** StaticGet_Field_1_0()
	{
		return (::Class_1_D808E3F47C1941B7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D808E3F47C1941B7_TypeDefinitionIndex)->GetStaticField(0x5C080);
	}
	::Il2CppArray<::RPG::GameCore::SkillLayoutKey>* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::Boolean Field_1_4; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D808E3F47C1941B7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D808E3F47C1941B7__CCTOR_OFFSET))();
	}

	::System::Int32 CompareTo(::Class_1_D808E3F47C1941B7* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D808E3F47C1941B7*))((::PBYTE)hIl2Cpp + CLASS_1_D808E3F47C1941B7_COMPARETO_OFFSET))(this, a1);
	}
};
