#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_1.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/System/Object.h"

class Class_3_61A5922E5046F385_4;
namespace Nap::NapECS { class EcsEntity; }

#define CLASS_3_CCA35504A242D6C0_CLASS_1_17585B8309EF055E_METHOD_1_04F4B2F95607A97A_OFFSET UNITYSDK_OFFSET(0x140090E0)
#define CLASS_3_CCA35504A242D6C0_CLASS_1_17585B8309EF055E_METHOD_1_2919B6AD6AF4F7BF_OFFSET UNITYSDK_OFFSET(0x14009270)
#define CLASS_3_CCA35504A242D6C0_CLASS_1_17585B8309EF055E__CTOR_OFFSET UNITYSDK_OFFSET(0x140090D0)

inline static constexpr unsigned int Class_3_CCA35504A242D6C0_Class_1_17585B8309EF055E_TypeDefinitionIndex = 79808;

class Class_3_CCA35504A242D6C0_Class_1_17585B8309EF055E : public ::System::Object
{
public:
	::Class_3_61A5922E5046F385_4* Field_1_1; // 0x10
	::Nap::NapECS::EcsEntity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_CLASS_1_17585B8309EF055E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_04F4B2F95607A97A(::Enum_3_DB663931210BBC27_1 a1, ::MoleMole::Config::BuddyBehaviourType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_1, ::MoleMole::Config::BuddyBehaviourType))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_CLASS_1_17585B8309EF055E_METHOD_1_04F4B2F95607A97A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2919B6AD6AF4F7BF(::Enum_3_DB663931210BBC27_1 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_1, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CCA35504A242D6C0_CLASS_1_17585B8309EF055E_METHOD_1_2919B6AD6AF4F7BF_OFFSET))(this, a1, a2);
	}
};
