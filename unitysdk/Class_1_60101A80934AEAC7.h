#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define CLASS_1_60101A80934AEAC7_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1A7BE930)
#define CLASS_1_60101A80934AEAC7_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A7BE910)
#define CLASS_1_60101A80934AEAC7_METHOD_1_85D8F3A3565F607B_OFFSET UNITYSDK_OFFSET(0x1A7BE660)
#define CLASS_1_60101A80934AEAC7_METHOD_1_DFB3E3DF5DAF95EF_OFFSET UNITYSDK_OFFSET(0x1A7BE8B0)
#define CLASS_1_60101A80934AEAC7_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1A7BE940)
#define CLASS_1_60101A80934AEAC7_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A7BE920)
#define CLASS_1_60101A80934AEAC7_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1A7BE6D0)
#define CLASS_1_60101A80934AEAC7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BE490)

inline static constexpr unsigned int Class_1_60101A80934AEAC7_TypeDefinitionIndex = 66263;

class Class_1_60101A80934AEAC7 : public ::System::Object
{
public:
	::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x10
	::System::UInt32 _ContentID_k__BackingField; // 0x14
	::System::UInt32 COEMCOBPMKD; // 0x18
	::System::UInt32 _Value_k__BackingField; // 0x1C

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_60101A80934AEAC7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_85D8F3A3565F607B(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_60101A80934AEAC7_METHOD_1_85D8F3A3565F607B_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60101A80934AEAC7_TRIGGER_OFFSET))(this);
	}

	::System::Void Method_1_DFB3E3DF5DAF95EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60101A80934AEAC7_METHOD_1_DFB3E3DF5DAF95EF_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_Value()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60101A80934AEAC7_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60101A80934AEAC7_SET_VALUE_OFFSET))(this, a1);
	}

	::System::UInt32 get_ContentID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60101A80934AEAC7_GET_CONTENTID_OFFSET))(this);
	}

	::System::Void set_ContentID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_60101A80934AEAC7_SET_CONTENTID_OFFSET))(this, a1);
	}
};
