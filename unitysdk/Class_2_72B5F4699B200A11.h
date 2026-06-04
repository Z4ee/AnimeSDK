#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterLeaveStage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_72B5F4699B200A11_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13D309C0)
#define CLASS_2_72B5F4699B200A11_METHOD_2_FF49029FCCE90CB8_OFFSET UNITYSDK_OFFSET(0x13D31140)
#define CLASS_2_72B5F4699B200A11_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13D30A00)
#define CLASS_2_72B5F4699B200A11_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13D311B0)
#define CLASS_2_72B5F4699B200A11_TICK_OFFSET UNITYSDK_OFFSET(0x13D31200)
#define CLASS_2_72B5F4699B200A11__CTOR_OFFSET UNITYSDK_OFFSET(0x13D309B0)

inline static constexpr unsigned int Class_2_72B5F4699B200A11_TypeDefinitionIndex = 51341;

class Class_2_72B5F4699B200A11 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterLeaveStage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterLeaveStage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterLeaveStage*))((::PBYTE)hIl2Cpp + CLASS_2_72B5F4699B200A11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B5F4699B200A11_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B5F4699B200A11_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Int32 Method_2_FF49029FCCE90CB8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_72B5F4699B200A11_METHOD_2_FF49029FCCE90CB8_OFFSET))(a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B5F4699B200A11_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_72B5F4699B200A11_TICK_OFFSET))(this, a1);
	}
};
