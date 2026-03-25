#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_A9BB9C9E4D3134C4;
class Class_3_98C806684F7CC372_6;
class Class_3_DA3467C8E23483C5;

#define CLASS_1_DD4C1258A1C5CB26_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x166C7A60)
#define CLASS_1_DD4C1258A1C5CB26_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x166C7A40)
#define CLASS_1_DD4C1258A1C5CB26_METHOD_1_7E981F6ECF5DF786_OFFSET UNITYSDK_OFFSET(0x166C7A90)
#define CLASS_1_DD4C1258A1C5CB26_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x166C7A70)
#define CLASS_1_DD4C1258A1C5CB26_SET_HANDLER_OFFSET UNITYSDK_OFFSET(0x166C7A50)
#define CLASS_1_DD4C1258A1C5CB26__CTOR_OFFSET UNITYSDK_OFFSET(0x166C7A80)

inline static constexpr unsigned int Class_1_DD4C1258A1C5CB26_TypeDefinitionIndex = 28950;

class Class_1_DD4C1258A1C5CB26 : public ::System::Object
{
public:
	::Class_3_DA3467C8E23483C5* _Filter_k__BackingField; // 0x10
	::Class_3_98C806684F7CC372_6* _Handler_k__BackingField; // 0x18

	::System::Void _ctor(::Class_3_98C806684F7CC372_6* a1, ::Class_3_DA3467C8E23483C5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_98C806684F7CC372_6*, ::Class_3_DA3467C8E23483C5*))((::PBYTE)hIl2Cpp + CLASS_1_DD4C1258A1C5CB26__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_3_98C806684F7CC372_6* get_Handler()
	{
		return ((::Class_3_98C806684F7CC372_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4C1258A1C5CB26_GET_HANDLER_OFFSET))(this);
	}

	::System::Void set_Handler(::Class_3_98C806684F7CC372_6* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_98C806684F7CC372_6*))((::PBYTE)hIl2Cpp + CLASS_1_DD4C1258A1C5CB26_SET_HANDLER_OFFSET))(this, value);
	}

	::Class_3_DA3467C8E23483C5* get_Filter()
	{
		return ((::Class_3_DA3467C8E23483C5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4C1258A1C5CB26_GET_FILTER_OFFSET))(this);
	}

	::System::Void set_Filter(::Class_3_DA3467C8E23483C5* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DA3467C8E23483C5*))((::PBYTE)hIl2Cpp + CLASS_1_DD4C1258A1C5CB26_SET_FILTER_OFFSET))(this, value);
	}

	::System::Boolean Method_1_7E981F6ECF5DF786(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_1_A9BB9C9E4D3134C4* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_1_A9BB9C9E4D3134C4*))((::PBYTE)hIl2Cpp + CLASS_1_DD4C1258A1C5CB26_METHOD_1_7E981F6ECF5DF786_OFFSET))(this, a1, a2);
	}
};
