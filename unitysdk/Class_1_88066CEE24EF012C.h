#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_27BAF1B247FD0048;
class Class_1_F169E4A4621E6465;
class Class_4_2E0A1A668714B3CC;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class TeamTowersPassiveSkillConfig; }
namespace RPG::GameCore { class TeamTowersSkillConfig; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_88066CEE24EF012C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5862A0)
#define CLASS_1_88066CEE24EF012C_METHOD_1_340651642003E962_OFFSET UNITYSDK_OFFSET(0x1A586BC0)
#define CLASS_1_88066CEE24EF012C_METHOD_1_36588ACC3F7AF424_OFFSET UNITYSDK_OFFSET(0x1A586CF0)
#define CLASS_1_88066CEE24EF012C_METHOD_1_36E65EA781A6F301_OFFSET UNITYSDK_OFFSET(0x1A586400)
#define CLASS_1_88066CEE24EF012C_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x1A587030)
#define CLASS_1_88066CEE24EF012C_METHOD_1_4FBD85E2CB4E1C9D_OFFSET UNITYSDK_OFFSET(0x1A586AB0)
#define CLASS_1_88066CEE24EF012C_METHOD_1_72EE0536B7197A31_OFFSET UNITYSDK_OFFSET(0x1A586060)
#define CLASS_1_88066CEE24EF012C_METHOD_1_74C0F9B722BDE4E2_OFFSET UNITYSDK_OFFSET(0x1A586480)
#define CLASS_1_88066CEE24EF012C_METHOD_1_7F94BB05F7C3FD85_OFFSET UNITYSDK_OFFSET(0x1A586640)
#define CLASS_1_88066CEE24EF012C_METHOD_1_84E0BA1A61F5EBA9_OFFSET UNITYSDK_OFFSET(0x1A586EB0)
#define CLASS_1_88066CEE24EF012C_METHOD_1_C1A8C7C052A9442E_OFFSET UNITYSDK_OFFSET(0x1A586010)
#define CLASS_1_88066CEE24EF012C_METHOD_1_C9DEF5DC60E72846_OFFSET UNITYSDK_OFFSET(0x1A5871B0)
#define CLASS_1_88066CEE24EF012C_METHOD_1_EA7C9571288E1295_OFFSET UNITYSDK_OFFSET(0x1A586FE0)
#define CLASS_1_88066CEE24EF012C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A587340)

inline static constexpr unsigned int Class_1_88066CEE24EF012C_TypeDefinitionIndex = 36435;

class Class_1_88066CEE24EF012C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_27BAF1B247FD0048*>* PJDDEFEKBHO; // 0x10
	::Class_4_2E0A1A668714B3CC* NMNILJHPGOK; // 0x18
	::System::Collections::Generic::List_1<::Class_1_F169E4A4621E6465*>* KEDLALCLDPJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C1A8C7C052A9442E(::Class_4_2E0A1A668714B3CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_2E0A1A668714B3CC*))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_C1A8C7C052A9442E_OFFSET))(this, a1);
	}

	::System::Void Method_1_72EE0536B7197A31(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_72EE0536B7197A31_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_36E65EA781A6F301(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::TeamTowersSkillConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TeamTowersSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_36E65EA781A6F301_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_7F94BB05F7C3FD85(::RPG::GameCore::TeamTowersSkillConfig* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamTowersSkillConfig*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_7F94BB05F7C3FD85_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_340651642003E962(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::RPG::GameCore::TeamTowersSkillConfig* a3, ::System::Action_1<::System::UInt32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::TeamTowersSkillConfig*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_340651642003E962_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_84E0BA1A61F5EBA9(::System::UInt32 a1, ::RPG::GameCore::TeamTowersPassiveSkillConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamTowersPassiveSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_84E0BA1A61F5EBA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EA7C9571288E1295()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_EA7C9571288E1295_OFFSET))(this);
	}

	static ::RPG::GameCore::FixPoint Method_1_4FBD85E2CB4E1C9D(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_4FBD85E2CB4E1C9D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_36588ACC3F7AF424(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::TeamTowersSkillConfig* a3, ::System::Action_1<::System::UInt32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TeamTowersSkillConfig*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_36588ACC3F7AF424_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_74C0F9B722BDE4E2(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::TeamTowersSkillConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TeamTowersSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_74C0F9B722BDE4E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C9DEF5DC60E72846(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_C9DEF5DC60E72846_OFFSET))(this, a1);
	}

	::System::Void Method_1_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88066CEE24EF012C_METHOD_1_47EDBC4CA1AB8BEE_OFFSET))(this);
	}
};
