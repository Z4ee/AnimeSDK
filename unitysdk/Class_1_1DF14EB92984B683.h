#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class ChenLingBattleEffect_AddBuff; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1DF14EB92984B683_METHOD_1_2E911C137B825AA7_1_OFFSET UNITYSDK_OFFSET(0x108EC9F0)
#define CLASS_1_1DF14EB92984B683_METHOD_1_2E911C137B825AA7_OFFSET UNITYSDK_OFFSET(0x108EC900)
#define CLASS_1_1DF14EB92984B683_METHOD_1_7E56025C052E5F3A_OFFSET UNITYSDK_OFFSET(0x108ECD50)
#define CLASS_1_1DF14EB92984B683_METHOD_1_89B1282F9FFF2934_OFFSET UNITYSDK_OFFSET(0x108ECAE0)
#define CLASS_1_1DF14EB92984B683_METHOD_1_8C5ADAEE469D5C19_OFFSET UNITYSDK_OFFSET(0x108ECC20)
#define CLASS_1_1DF14EB92984B683_METHOD_1_91386924D4CBDB1F_OFFSET UNITYSDK_OFFSET(0x108EBB30)
#define CLASS_1_1DF14EB92984B683_METHOD_1_B165A0DA3CBB389E_OFFSET UNITYSDK_OFFSET(0x108EC790)
#define CLASS_1_1DF14EB92984B683__CTOR_OFFSET UNITYSDK_OFFSET(0x108ECE10)

inline static constexpr unsigned int Class_1_1DF14EB92984B683_TypeDefinitionIndex = 63337;

class Class_1_1DF14EB92984B683 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DF14EB92984B683__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_91386924D4CBDB1F(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::Class_1_36006FC25F5DDC69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_1DF14EB92984B683_METHOD_1_91386924D4CBDB1F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B165A0DA3CBB389E(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::Class_1_36006FC25F5DDC69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_1DF14EB92984B683_METHOD_1_B165A0DA3CBB389E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2E911C137B825AA7(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::Class_1_36006FC25F5DDC69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_1DF14EB92984B683_METHOD_1_2E911C137B825AA7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2E911C137B825AA7_1(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::Class_1_36006FC25F5DDC69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_1DF14EB92984B683_METHOD_1_2E911C137B825AA7_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_89B1282F9FFF2934(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::Class_1_36006FC25F5DDC69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_1DF14EB92984B683_METHOD_1_89B1282F9FFF2934_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8C5ADAEE469D5C19(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::Class_1_36006FC25F5DDC69* a3, ::RPG::GameCore::ChenLingBattleBuffType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_36006FC25F5DDC69*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + CLASS_1_1DF14EB92984B683_METHOD_1_8C5ADAEE469D5C19_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_7E56025C052E5F3A(::RPG::GameCore::ChenLingBattleEffect_AddBuff* a1, ::Class_1_36006FC25F5DDC69* a2, ::System::Int32 a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_36006FC25F5DDC69*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DF14EB92984B683_METHOD_1_7E56025C052E5F3A_OFFSET))(this, a1, a2, a3);
	}
};
