#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5452947417BCF16A_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x134BF240)
#define CLASS_1_5452947417BCF16A_GET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x134BF200)
#define CLASS_1_5452947417BCF16A_GET_DAY_OFFSET UNITYSDK_OFFSET(0x134BF220)
#define CLASS_1_5452947417BCF16A_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x134BF260)
#define CLASS_1_5452947417BCF16A_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x134BF250)
#define CLASS_1_5452947417BCF16A_SET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x134BF210)
#define CLASS_1_5452947417BCF16A_SET_DAY_OFFSET UNITYSDK_OFFSET(0x134BF230)
#define CLASS_1_5452947417BCF16A_SET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x134BF270)
#define CLASS_1_5452947417BCF16A__CTOR_OFFSET UNITYSDK_OFFSET(0x134BF280)

inline static constexpr unsigned int Class_1_5452947417BCF16A_TypeDefinitionIndex = 80333;

class Class_1_5452947417BCF16A : public ::System::Object
{
public:
	::System::UInt32 _CycleID_k__BackingField; // 0x10
	::RPG::GameCore::B51RacingContentType _ContentType_k__BackingField; // 0x14
	::System::Boolean _IsCompleted_k__BackingField; // 0x18
	::System::UInt32 _Day_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5452947417BCF16A__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_CycleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5452947417BCF16A_GET_CYCLEID_OFFSET))(this);
	}

	::System::Void set_CycleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5452947417BCF16A_SET_CYCLEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Day()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5452947417BCF16A_GET_DAY_OFFSET))(this);
	}

	::System::Void set_Day(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5452947417BCF16A_SET_DAY_OFFSET))(this, a1);
	}

	::RPG::GameCore::B51RacingContentType get_ContentType()
	{
		return ((::RPG::GameCore::B51RacingContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5452947417BCF16A_GET_CONTENTTYPE_OFFSET))(this);
	}

	::System::Void set_ContentType(::RPG::GameCore::B51RacingContentType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingContentType))((::PBYTE)hIl2Cpp + CLASS_1_5452947417BCF16A_SET_CONTENTTYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsCompleted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5452947417BCF16A_GET_ISCOMPLETED_OFFSET))(this);
	}

	::System::Void set_IsCompleted(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5452947417BCF16A_SET_ISCOMPLETED_OFFSET))(this, a1);
	}
};
