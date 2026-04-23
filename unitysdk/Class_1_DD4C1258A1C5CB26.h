#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_A9BB9C9E4D3134C4;
class Class_3_98C806684F7CC372_11;
class Class_3_DA3467C8E23483C5;

#define CLASS_1_DD4C1258A1C5CB26_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x17C85AE0)
#define CLASS_1_DD4C1258A1C5CB26_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x17C85AC0)
#define CLASS_1_DD4C1258A1C5CB26_METHOD_1_7E981F6ECF5DF786_OFFSET UNITYSDK_OFFSET(0x17C85B10)
#define CLASS_1_DD4C1258A1C5CB26_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x17C85AF0)
#define CLASS_1_DD4C1258A1C5CB26_SET_HANDLER_OFFSET UNITYSDK_OFFSET(0x17C85AD0)
#define CLASS_1_DD4C1258A1C5CB26__CTOR_OFFSET UNITYSDK_OFFSET(0x17C85B00)

inline static constexpr unsigned int Class_1_DD4C1258A1C5CB26_TypeDefinitionIndex = 34684;

class Class_1_DD4C1258A1C5CB26 : public ::System::Object
{
public:
	::Class_3_98C806684F7CC372_11* _Handler_k__BackingField; // 0x10
	::Class_3_DA3467C8E23483C5* _Filter_k__BackingField; // 0x18

	::System::Void _ctor(::Class_3_98C806684F7CC372_11* a1, ::Class_3_DA3467C8E23483C5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_98C806684F7CC372_11*, ::Class_3_DA3467C8E23483C5*))((::PBYTE)hIl2Cpp + CLASS_1_DD4C1258A1C5CB26__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_3_98C806684F7CC372_11* get_Handler()
	{
		return ((::Class_3_98C806684F7CC372_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4C1258A1C5CB26_GET_HANDLER_OFFSET))(this);
	}

	::System::Void set_Handler(::Class_3_98C806684F7CC372_11* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_98C806684F7CC372_11*))((::PBYTE)hIl2Cpp + CLASS_1_DD4C1258A1C5CB26_SET_HANDLER_OFFSET))(this, value);
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
