#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6DE8726ADEF173A7_7;
class Class_1_945C969C6B974032;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LightningStrikeAreaConfig; }

#define CLASS_1_753802C34A8927F4_CLEAR_OFFSET UNITYSDK_OFFSET(0x17D51900)
#define CLASS_1_753802C34A8927F4__CTOR_OFFSET UNITYSDK_OFFSET(0x17D51B50)

inline static constexpr unsigned int Class_1_753802C34A8927F4_TypeDefinitionIndex = 51075;

class Class_1_753802C34A8927F4 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_945C969C6B974032*>* Field_1_0; // 0x10
	::RPG::GameCore::LightningStrikeAreaConfig* Field_1_1; // 0x18
	::RPG::PoolList_1<::Class_1_6DE8726ADEF173A7_7*>* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_5; // 0x30
	::System::Boolean Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_753802C34A8927F4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_753802C34A8927F4_CLEAR_OFFSET))(this);
	}
};
