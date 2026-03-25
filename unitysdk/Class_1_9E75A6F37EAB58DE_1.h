#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_24.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }

#define CLASS_1_9E75A6F37EAB58DE_1_GET_ID_OFFSET UNITYSDK_OFFSET(0xF3690F0)
#define CLASS_1_9E75A6F37EAB58DE_1_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xF369110)
#define CLASS_1_9E75A6F37EAB58DE_1_GET_SORTVALUE_OFFSET UNITYSDK_OFFSET(0xF369130)
#define CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0xF369250)
#define CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_3566FBB68B30671F_OFFSET UNITYSDK_OFFSET(0xF369150)
#define CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_BDBA00FB43D83ECB_OFFSET UNITYSDK_OFFSET(0xF3691F0)
#define CLASS_1_9E75A6F37EAB58DE_1_SET_ID_OFFSET UNITYSDK_OFFSET(0xF369100)
#define CLASS_1_9E75A6F37EAB58DE_1_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0xF369120)
#define CLASS_1_9E75A6F37EAB58DE_1_SET_SORTVALUE_OFFSET UNITYSDK_OFFSET(0xF369140)
#define CLASS_1_9E75A6F37EAB58DE_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF3690E0)

inline static constexpr unsigned int Class_1_9E75A6F37EAB58DE_1_TypeDefinitionIndex = 54491;

class Class_1_9E75A6F37EAB58DE_1 : public ::System::Object
{
public:
	::System::UInt32 _ID_k__BackingField; // 0x10
	::System::UInt32 _SortValue_k__BackingField; // 0x14
	::System::UInt32 _QuestID_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_SET_ID_OFFSET))(this, value);
	}

	::System::UInt32 get_QuestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_GET_QUESTID_OFFSET))(this);
	}

	::System::Void set_QuestID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_SET_QUESTID_OFFSET))(this, value);
	}

	::System::UInt32 get_SortValue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_GET_SORTVALUE_OFFSET))(this);
	}

	::System::Void set_SortValue(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_SET_SORTVALUE_OFFSET))(this, value);
	}

	::RPG::Client::QuestData* Method_1_3566FBB68B30671F()
	{
		return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_3566FBB68B30671F_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_24 Method_1_BDBA00FB43D83ECB()
	{
		return ((::Enum_3_4608E37A1B3D374A_24(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_BDBA00FB43D83ECB_OFFSET))(this);
	}

	::System::UInt32 Method_1_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_259B533085E399D3_OFFSET))(this);
	}
};
