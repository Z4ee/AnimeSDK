#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_929FF6D90C127280_CLEAR_OFFSET UNITYSDK_OFFSET(0x1917B700)
#define CLASS_1_929FF6D90C127280_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1917B6E0)
#define CLASS_1_929FF6D90C127280_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x1917B750)
#define CLASS_1_929FF6D90C127280_METHOD_1_AC2B072F6EDFA2FE_OFFSET UNITYSDK_OFFSET(0x1917B7D0)
#define CLASS_1_929FF6D90C127280_METHOD_1_C2E908C94CD73B00_OFFSET UNITYSDK_OFFSET(0x1917B890)
#define CLASS_1_929FF6D90C127280_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1917B6F0)
#define CLASS_1_929FF6D90C127280__CTOR_OFFSET UNITYSDK_OFFSET(0x1917B9C0)

inline static constexpr unsigned int Class_1_929FF6D90C127280_TypeDefinitionIndex = 55275;

class Class_1_929FF6D90C127280 : public ::System::Object
{
public:
	// static const ::System::String* CNGIBBBEADC; // 0x0
	::RPG::GameCore::TargetEvaluator* GDNEBEPBHOP; // 0x10
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x18
	::System::String* _Key_k__BackingField; // 0x20
	::RPG::GameCore::ActionDelayChangeTypeMask IICLNAGKNPP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_929FF6D90C127280__CTOR_OFFSET))(this);
	}

	::System::String* get_Key()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_929FF6D90C127280_GET_KEY_OFFSET))(this);
	}

	::System::Void set_Key(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_929FF6D90C127280_SET_KEY_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_929FF6D90C127280_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_929FF6D90C127280_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AC2B072F6EDFA2FE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_929FF6D90C127280_METHOD_1_AC2B072F6EDFA2FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C2E908C94CD73B00(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ActionDelayChangeTypeMask a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ActionDelayChangeTypeMask))((::PBYTE)hIl2Cpp + CLASS_1_929FF6D90C127280_METHOD_1_C2E908C94CD73B00_OFFSET))(this, a1, a2);
	}
};
