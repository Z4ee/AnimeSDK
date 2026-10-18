#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChronicleCustomUnlockConditionConfig; }
namespace RPG::GameCore { class MiddleSinglePackMissionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_09388B68BBD5FF59_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x155C1AD0)
#define CLASS_1_09388B68BBD5FF59_GET_PACKMISSIONID_OFFSET UNITYSDK_OFFSET(0x155C1AB0)
#define CLASS_1_09388B68BBD5FF59_METHOD_1_7CDCAC788ADBF836_OFFSET UNITYSDK_OFFSET(0x155C1920)
#define CLASS_1_09388B68BBD5FF59_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x155C1850)
#define CLASS_1_09388B68BBD5FF59_METHOD_1_C828165EFB1B5EB2_OFFSET UNITYSDK_OFFSET(0x155C18C0)
#define CLASS_1_09388B68BBD5FF59_SET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x155C1AE0)
#define CLASS_1_09388B68BBD5FF59_SET_PACKMISSIONID_OFFSET UNITYSDK_OFFSET(0x155C1AC0)
#define CLASS_1_09388B68BBD5FF59__CTOR_OFFSET UNITYSDK_OFFSET(0x155C1840)

inline static constexpr unsigned int Class_1_09388B68BBD5FF59_TypeDefinitionIndex = 66087;

class Class_1_09388B68BBD5FF59 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* _CustomUnlockConditionConfigList_k__BackingField; // 0x10
	::System::UInt32 _PackMissionID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09388B68BBD5FF59__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09388B68BBD5FF59_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_C828165EFB1B5EB2(::RPG::GameCore::MiddleSinglePackMissionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MiddleSinglePackMissionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_09388B68BBD5FF59_METHOD_1_C828165EFB1B5EB2_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CDCAC788ADBF836(::Il2CppArray<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_09388B68BBD5FF59_METHOD_1_7CDCAC788ADBF836_OFFSET))(this, a1);
	}

	::System::UInt32 get_PackMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09388B68BBD5FF59_GET_PACKMISSIONID_OFFSET))(this);
	}

	::System::Void set_PackMissionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_09388B68BBD5FF59_SET_PACKMISSIONID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* get_CustomUnlockConditionConfigList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09388B68BBD5FF59_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET))(this);
	}

	::System::Void set_CustomUnlockConditionConfigList(::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_09388B68BBD5FF59_SET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET))(this, a1);
	}
};
