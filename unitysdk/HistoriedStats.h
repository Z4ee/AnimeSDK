#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HISTORIEDSTATS_ADD_OFFSET UNITYSDK_OFFSET(0xF5C43B0)
#define HISTORIEDSTATS_GET_MAX_OFFSET UNITYSDK_OFFSET(0xF5C45D0)
#define HISTORIEDSTATS_GET_MEAN_OFFSET UNITYSDK_OFFSET(0xF5C45B0)
#define HISTORIEDSTATS_GET_MIN_OFFSET UNITYSDK_OFFSET(0xF5C45F0)
#define HISTORIEDSTATS_RECALCIFDIRTY_OFFSET UNITYSDK_OFFSET(0xF5C4450)
#define HISTORIEDSTATS_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF5C4610)
#define HISTORIEDSTATS__CTOR_OFFSET UNITYSDK_OFFSET(0xF5C4350)
#define HISTORIEDSTATS___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF5C4720)

inline static constexpr unsigned int HistoriedStats_TypeDefinitionIndex = 84814;

class HistoriedStats : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* m_History; // 0x10
	::System::Single m_Mean; // 0x18
	::System::Boolean m_Ready; // 0x1C
	::System::Single m_Max; // 0x20
	::System::Int32 m_LastIndex; // 0x24
	::System::Single m_InvLength; // 0x28
	::System::Single m_Min; // 0x2C

	::System::Void _ctor(::System::UInt32 historyLength)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HISTORIEDSTATS__CTOR_OFFSET))(this, historyLength);
	}

	::System::Void Add(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_ADD_OFFSET))(this, value);
	}

	::System::Void ReCalcIfDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_RECALCIFDIRTY_OFFSET))(this);
	}

	::System::Single get_Mean()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_GET_MEAN_OFFSET))(this);
	}

	::System::Single get_Max()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_GET_MAX_OFFSET))(this);
	}

	::System::Single get_Min()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_GET_MIN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS_TOSTRING_OFFSET))(this);
	}

	::System::String* __base_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORIEDSTATS___BASE_TOSTRING_OFFSET))(this);
	}
};
