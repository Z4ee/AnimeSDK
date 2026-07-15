#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6A7F399F177592DB_GET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1647D610)
#define CLASS_1_6A7F399F177592DB_GET_REWARDICONPATH_OFFSET UNITYSDK_OFFSET(0x1647D630)
#define CLASS_1_6A7F399F177592DB_METHOD_1_1D1D38593ABC4B53_OFFSET UNITYSDK_OFFSET(0x1647D570)
#define CLASS_1_6A7F399F177592DB_SET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1647D620)
#define CLASS_1_6A7F399F177592DB_SET_REWARDICONPATH_OFFSET UNITYSDK_OFFSET(0x1647D640)
#define CLASS_1_6A7F399F177592DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1647D600)

inline static constexpr unsigned int Class_1_6A7F399F177592DB_TypeDefinitionIndex = 75233;

class Class_1_6A7F399F177592DB : public ::System::Object
{
public:
	::System::String* _RewardIconPath_k__BackingField; // 0x10
	::System::UInt32 _RewardCount_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F399F177592DB__CTOR_OFFSET))(this);
	}

	static ::Class_1_6A7F399F177592DB* Method_1_1D1D38593ABC4B53(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_6A7F399F177592DB*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A7F399F177592DB_METHOD_1_1D1D38593ABC4B53_OFFSET))(a1, a2);
	}

	::System::UInt32 get_RewardCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F399F177592DB_GET_REWARDCOUNT_OFFSET))(this);
	}

	::System::Void set_RewardCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A7F399F177592DB_SET_REWARDCOUNT_OFFSET))(this, a1);
	}

	::System::String* get_RewardIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7F399F177592DB_GET_REWARDICONPATH_OFFSET))(this);
	}

	::System::Void set_RewardIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6A7F399F177592DB_SET_REWARDICONPATH_OFFSET))(this, a1);
	}
};
