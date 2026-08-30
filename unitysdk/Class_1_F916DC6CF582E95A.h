#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_A9BB9C9E4D3134C4;
class Class_3_98C806684F7CC372_11;
class Class_3_DA3467C8E23483C5;

#define CLASS_1_F916DC6CF582E95A_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x1970E4A0)
#define CLASS_1_F916DC6CF582E95A_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x1970E480)
#define CLASS_1_F916DC6CF582E95A_METHOD_1_47FB2F9821EEF960_OFFSET UNITYSDK_OFFSET(0x1970E4D0)
#define CLASS_1_F916DC6CF582E95A_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x1970E4B0)
#define CLASS_1_F916DC6CF582E95A_SET_HANDLER_OFFSET UNITYSDK_OFFSET(0x1970E490)
#define CLASS_1_F916DC6CF582E95A__CTOR_OFFSET UNITYSDK_OFFSET(0x1970E4C0)

inline static constexpr unsigned int Class_1_F916DC6CF582E95A_TypeDefinitionIndex = 36610;

class Class_1_F916DC6CF582E95A : public ::System::Object
{
public:
	::Class_3_DA3467C8E23483C5* _Filter_k__BackingField; // 0x10
	::Class_3_98C806684F7CC372_11* _Handler_k__BackingField; // 0x18

	::System::Void _ctor(::Class_3_98C806684F7CC372_11* a1, ::Class_3_DA3467C8E23483C5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_98C806684F7CC372_11*, ::Class_3_DA3467C8E23483C5*))((::PBYTE)hIl2Cpp + CLASS_1_F916DC6CF582E95A__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_3_98C806684F7CC372_11* get_Handler()
	{
		return ((::Class_3_98C806684F7CC372_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F916DC6CF582E95A_GET_HANDLER_OFFSET))(this);
	}

	::System::Void set_Handler(::Class_3_98C806684F7CC372_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_98C806684F7CC372_11*))((::PBYTE)hIl2Cpp + CLASS_1_F916DC6CF582E95A_SET_HANDLER_OFFSET))(this, a1);
	}

	::Class_3_DA3467C8E23483C5* get_Filter()
	{
		return ((::Class_3_DA3467C8E23483C5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F916DC6CF582E95A_GET_FILTER_OFFSET))(this);
	}

	::System::Void set_Filter(::Class_3_DA3467C8E23483C5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DA3467C8E23483C5*))((::PBYTE)hIl2Cpp + CLASS_1_F916DC6CF582E95A_SET_FILTER_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_47FB2F9821EEF960(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_1_A9BB9C9E4D3134C4* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_1_A9BB9C9E4D3134C4*))((::PBYTE)hIl2Cpp + CLASS_1_F916DC6CF582E95A_METHOD_1_47FB2F9821EEF960_OFFSET))(this, a1, a2);
	}
};
