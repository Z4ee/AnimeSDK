#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"

class Class_0_16E4307DCC419505_460;
class Class_1_E6C4BA4C142021B7;
class Class_2_21055A9FA74B791E;
namespace RPG::GameCore { class AdvSetAIFollow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_5217B9A9302BE624_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A811BF0)
#define CLASS_3_5217B9A9302BE624_METHOD_3_13004921ED9C7319_OFFSET UNITYSDK_OFFSET(0x1A8127B0)
#define CLASS_3_5217B9A9302BE624_METHOD_3_1FBCE138CAD6848A_OFFSET UNITYSDK_OFFSET(0x1A812960)
#define CLASS_3_5217B9A9302BE624_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1A812E20)
#define CLASS_3_5217B9A9302BE624_METHOD_3_B6F0C2C831C5F31A_OFFSET UNITYSDK_OFFSET(0x1A812F40)
#define CLASS_3_5217B9A9302BE624_METHOD_3_E495EFFB22D4AFAB_OFFSET UNITYSDK_OFFSET(0x1A813010)
#define CLASS_3_5217B9A9302BE624_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A811D70)
#define CLASS_3_5217B9A9302BE624_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A812D50)
#define CLASS_3_5217B9A9302BE624_TICK_OFFSET UNITYSDK_OFFSET(0x1A812C00)
#define CLASS_3_5217B9A9302BE624__CTOR_OFFSET UNITYSDK_OFFSET(0x1A811BD0)

inline static constexpr unsigned int Class_3_5217B9A9302BE624_TypeDefinitionIndex = 52761;

class Class_3_5217B9A9302BE624 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	// static const ::System::Single DPDJOFGFNKJ; // 0x0
	// static const ::System::Single KLFMIFKODBA; // 0x0
	// static const ::System::Single CNLICOPBIEH; // 0x0
	::System::String* JIJMEHFEANC; // 0x30
	::System::String* KFOFDNOJILO; // 0x38
	::Class_1_E6C4BA4C142021B7* FLANFCPMIPC; // 0x40
	::RPG::GameCore::AdvSetAIFollow* OFKGLJOAMLD; // 0x48
	::Class_2_21055A9FA74B791E* IPFNHFDJKKL; // 0x50
	::System::UInt32 ANEENHPKAIM; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAIFollow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAIFollow*))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_1FBCE138CAD6848A()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_1FBCE138CAD6848A_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_3_13004921ED9C7319(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_13004921ED9C7319_OFFSET))(this, a1);
	}

	::System::Void Method_3_B6F0C2C831C5F31A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_B6F0C2C831C5F31A_OFFSET))(this, a1);
	}

	::System::Void Method_3_E495EFFB22D4AFAB(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_5217B9A9302BE624_METHOD_3_E495EFFB22D4AFAB_OFFSET))(this, a1);
	}
};
