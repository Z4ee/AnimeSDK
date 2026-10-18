#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MonoAttackHitBox; }

#define CLASS_2_68DCC88E286E4092_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BA5D90)
#define CLASS_2_68DCC88E286E4092_METHOD_2_32F36053086DDDC7_1_OFFSET UNITYSDK_OFFSET(0x15BA5E60)
#define CLASS_2_68DCC88E286E4092_METHOD_2_32F36053086DDDC7_OFFSET UNITYSDK_OFFSET(0x15BA5E10)
#define CLASS_2_68DCC88E286E4092_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15BA5DD0)
#define CLASS_2_68DCC88E286E4092_METHOD_2_EF245D21A9516D2F_1_OFFSET UNITYSDK_OFFSET(0x15BA5EF0)
#define CLASS_2_68DCC88E286E4092_METHOD_2_EF245D21A9516D2F_OFFSET UNITYSDK_OFFSET(0x15BA5EB0)
#define CLASS_2_68DCC88E286E4092__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA5F30)

inline static constexpr unsigned int Class_2_68DCC88E286E4092_TypeDefinitionIndex = 57083;

class Class_2_68DCC88E286E4092 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::MonoAttackHitBox* LANPAGMEFJH; // 0x18
	::RPG::Client::MonoAttackHitBox* MHMAEHOHLNN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68DCC88E286E4092__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68DCC88E286E4092_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68DCC88E286E4092_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_32F36053086DDDC7(::RPG::Client::MonoAttackHitBox* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAttackHitBox*))((::PBYTE)hIl2Cpp + CLASS_2_68DCC88E286E4092_METHOD_2_32F36053086DDDC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_32F36053086DDDC7_1(::RPG::Client::MonoAttackHitBox* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAttackHitBox*))((::PBYTE)hIl2Cpp + CLASS_2_68DCC88E286E4092_METHOD_2_32F36053086DDDC7_1_OFFSET))(this, a1);
	}

	::RPG::Client::MonoAttackHitBox* Method_2_EF245D21A9516D2F()
	{
		return ((::RPG::Client::MonoAttackHitBox*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68DCC88E286E4092_METHOD_2_EF245D21A9516D2F_OFFSET))(this);
	}

	::RPG::Client::MonoAttackHitBox* Method_2_EF245D21A9516D2F_1()
	{
		return ((::RPG::Client::MonoAttackHitBox*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68DCC88E286E4092_METHOD_2_EF245D21A9516D2F_1_OFFSET))(this);
	}
};
