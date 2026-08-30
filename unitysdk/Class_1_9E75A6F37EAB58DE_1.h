#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_25.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }

#define CLASS_1_9E75A6F37EAB58DE_1_GET_ID_OFFSET UNITYSDK_OFFSET(0x15414370)
#define CLASS_1_9E75A6F37EAB58DE_1_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x15414390)
#define CLASS_1_9E75A6F37EAB58DE_1_GET_SORTVALUE_OFFSET UNITYSDK_OFFSET(0x154143B0)
#define CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x154144D0)
#define CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_6A818B4FAFE5C614_OFFSET UNITYSDK_OFFSET(0x154143D0)
#define CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_BDBA00FB43D83ECB_OFFSET UNITYSDK_OFFSET(0x15414470)
#define CLASS_1_9E75A6F37EAB58DE_1_SET_ID_OFFSET UNITYSDK_OFFSET(0x15414380)
#define CLASS_1_9E75A6F37EAB58DE_1_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0x154143A0)
#define CLASS_1_9E75A6F37EAB58DE_1_SET_SORTVALUE_OFFSET UNITYSDK_OFFSET(0x154143C0)
#define CLASS_1_9E75A6F37EAB58DE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15414360)

inline static constexpr unsigned int Class_1_9E75A6F37EAB58DE_1_TypeDefinitionIndex = 66970;

class Class_1_9E75A6F37EAB58DE_1 : public ::System::Object
{
public:
	::System::UInt32 _ID_k__BackingField; // 0x10
	::System::UInt32 _QuestID_k__BackingField; // 0x14
	::System::UInt32 _SortValue_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_SET_ID_OFFSET))(this, a1);
	}

	::System::UInt32 get_QuestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_GET_QUESTID_OFFSET))(this);
	}

	::System::Void set_QuestID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_SET_QUESTID_OFFSET))(this, a1);
	}

	::System::UInt32 get_SortValue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_GET_SORTVALUE_OFFSET))(this);
	}

	::System::Void set_SortValue(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_SET_SORTVALUE_OFFSET))(this, a1);
	}

	::RPG::Client::QuestData* Method_1_6A818B4FAFE5C614()
	{
		return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_6A818B4FAFE5C614_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_25 Method_1_BDBA00FB43D83ECB()
	{
		return ((::Enum_3_4608E37A1B3D374A_25(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_BDBA00FB43D83ECB_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE_1_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}
};
