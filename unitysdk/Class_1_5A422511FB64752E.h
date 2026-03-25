#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChronicleCustomUnlockConditionConfig; }
namespace RPG::GameCore { class MiddleSinglePackMissionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5A422511FB64752E_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x979DF60)
#define CLASS_1_5A422511FB64752E_GET_PACKMISSIONID_OFFSET UNITYSDK_OFFSET(0x979DF40)
#define CLASS_1_5A422511FB64752E_METHOD_1_48C16EB17896B2AC_OFFSET UNITYSDK_OFFSET(0x979DE00)
#define CLASS_1_5A422511FB64752E_METHOD_1_765BF41B8C66CCE4_OFFSET UNITYSDK_OFFSET(0x979DDA0)
#define CLASS_1_5A422511FB64752E_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x979DD30)
#define CLASS_1_5A422511FB64752E_SET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x979DF70)
#define CLASS_1_5A422511FB64752E_SET_PACKMISSIONID_OFFSET UNITYSDK_OFFSET(0x979DF50)
#define CLASS_1_5A422511FB64752E__CTOR_OFFSET UNITYSDK_OFFSET(0x979DD20)

inline static constexpr unsigned int Class_1_5A422511FB64752E_TypeDefinitionIndex = 53708;

class Class_1_5A422511FB64752E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* _CustomUnlockConditionConfigList_k__BackingField; // 0x10
	::System::UInt32 _PackMissionID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A422511FB64752E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A422511FB64752E_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_765BF41B8C66CCE4(::RPG::GameCore::MiddleSinglePackMissionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MiddleSinglePackMissionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5A422511FB64752E_METHOD_1_765BF41B8C66CCE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_48C16EB17896B2AC(::Il2CppArray<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_5A422511FB64752E_METHOD_1_48C16EB17896B2AC_OFFSET))(this, a1);
	}

	::System::UInt32 get_PackMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A422511FB64752E_GET_PACKMISSIONID_OFFSET))(this);
	}

	::System::Void set_PackMissionID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5A422511FB64752E_SET_PACKMISSIONID_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* get_CustomUnlockConditionConfigList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A422511FB64752E_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET))(this);
	}

	::System::Void set_CustomUnlockConditionConfigList(::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_5A422511FB64752E_SET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET))(this, value);
	}
};
