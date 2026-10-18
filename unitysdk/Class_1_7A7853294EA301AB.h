#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E71924F20B00CC55;

#define CLASS_1_7A7853294EA301AB_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xC38C5E0)
#define CLASS_1_7A7853294EA301AB_GET_EXAMID_OFFSET UNITYSDK_OFFSET(0xC38C610)
#define CLASS_1_7A7853294EA301AB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC38C5F0)
#define CLASS_1_7A7853294EA301AB_GET_MININCOME_OFFSET UNITYSDK_OFFSET(0xC38C600)
#define CLASS_1_7A7853294EA301AB__CTOR_OFFSET UNITYSDK_OFFSET(0xC38C620)

inline static constexpr unsigned int Class_1_7A7853294EA301AB_TypeDefinitionIndex = 80159;

class Class_1_7A7853294EA301AB : public ::System::Object
{
public:
	::System::Int32 _CacheKey_k__BackingField; // 0x10
	::System::UInt32 _Level_k__BackingField; // 0x14
	::System::UInt32 _MinIncome_k__BackingField; // 0x18
	::System::UInt32 _ExamID_k__BackingField; // 0x1C

	::System::Void _ctor(::Class_1_E71924F20B00CC55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E71924F20B00CC55*))((::PBYTE)hIl2Cpp + CLASS_1_7A7853294EA301AB__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7853294EA301AB_GET_CACHEKEY_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7853294EA301AB_GET_LEVEL_OFFSET))(this);
	}

	::System::UInt32 get_MinIncome()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7853294EA301AB_GET_MININCOME_OFFSET))(this);
	}

	::System::UInt32 get_ExamID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A7853294EA301AB_GET_EXAMID_OFFSET))(this);
	}
};
