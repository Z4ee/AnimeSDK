#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReasonMask.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DC0D8BD1F55299D5_GET_LOCKKEY_OFFSET UNITYSDK_OFFSET(0x1642DCA0)
#define CLASS_1_DC0D8BD1F55299D5_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x1642DCC0)
#define CLASS_1_DC0D8BD1F55299D5_METHOD_1_98FEA9699E9D8C88_OFFSET UNITYSDK_OFFSET(0x1642DE00)
#define CLASS_1_DC0D8BD1F55299D5_METHOD_1_AC2B072F6EDFA2FE_OFFSET UNITYSDK_OFFSET(0x1642DD40)
#define CLASS_1_DC0D8BD1F55299D5_SET_LOCKKEY_OFFSET UNITYSDK_OFFSET(0x1642DCB0)
#define CLASS_1_DC0D8BD1F55299D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1642E240)

inline static constexpr unsigned int Class_1_DC0D8BD1F55299D5_TypeDefinitionIndex = 55144;

class Class_1_DC0D8BD1F55299D5 : public ::System::Object
{
public:
	::System::String* _LockKey_k__BackingField; // 0x10
	::RPG::GameCore::TargetEvaluator* JGCIICKCGJA; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* NBOHOMJKOJH; // 0x20
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x28
	::RPG::GameCore::ActionDelayChangeReasonMask EHIGPNKFIGJ; // 0x30
	::RPG::GameCore::ActionDelayChangeTypeMask OLBPNAHNNKD; // 0x32
	::RPG::GameCore::ActionDelayChangeTypeMask AFAAIDLOEHE; // 0x34
	::System::Boolean JCBAHCGLNLP; // 0x36
	::System::Boolean LHECFFMIBNL; // 0x37

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC0D8BD1F55299D5__CTOR_OFFSET))(this);
	}

	::System::String* get_LockKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC0D8BD1F55299D5_GET_LOCKKEY_OFFSET))(this);
	}

	::System::Void set_LockKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC0D8BD1F55299D5_SET_LOCKKEY_OFFSET))(this, a1);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC0D8BD1F55299D5_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AC2B072F6EDFA2FE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC0D8BD1F55299D5_METHOD_1_AC2B072F6EDFA2FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_98FEA9699E9D8C88(::RPG::GameCore::ActionDelayChangeReason a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::ActionDelayChangeTypeMask a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ActionDelayChangeTypeMask, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC0D8BD1F55299D5_METHOD_1_98FEA9699E9D8C88_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
