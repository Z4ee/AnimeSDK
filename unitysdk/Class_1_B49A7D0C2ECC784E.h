#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B49A7D0C2ECC784E_GET_PERFORMANCEENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x92341B0)
#define CLASS_1_B49A7D0C2ECC784E_GET_PERFORMANCEIDLIST_OFFSET UNITYSDK_OFFSET(0x9234170)
#define CLASS_1_B49A7D0C2ECC784E_GET_SKIPTELEPORT_OFFSET UNITYSDK_OFFSET(0x92341D0)
#define CLASS_1_B49A7D0C2ECC784E_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9234190)
#define CLASS_1_B49A7D0C2ECC784E_SET_PERFORMANCEENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x92341C0)
#define CLASS_1_B49A7D0C2ECC784E_SET_PERFORMANCEIDLIST_OFFSET UNITYSDK_OFFSET(0x9234180)
#define CLASS_1_B49A7D0C2ECC784E_SET_SKIPTELEPORT_OFFSET UNITYSDK_OFFSET(0x92341E0)
#define CLASS_1_B49A7D0C2ECC784E_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x92341A0)
#define CLASS_1_B49A7D0C2ECC784E__CTOR_OFFSET UNITYSDK_OFFSET(0x92341F0)

inline static constexpr unsigned int Class_1_B49A7D0C2ECC784E_TypeDefinitionIndex = 57181;

class Class_1_B49A7D0C2ECC784E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _PerformanceIDList_k__BackingField; // 0x10
	::System::Action* _PerformanceEndCallback_k__BackingField; // 0x18
	::System::Boolean _SkipTeleport_k__BackingField; // 0x20
	::RPG::Client::SwordTrainingPerformanceType _Type_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B49A7D0C2ECC784E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_PerformanceIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B49A7D0C2ECC784E_GET_PERFORMANCEIDLIST_OFFSET))(this);
	}

	::System::Void set_PerformanceIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B49A7D0C2ECC784E_SET_PERFORMANCEIDLIST_OFFSET))(this, value);
	}

	::RPG::Client::SwordTrainingPerformanceType get_Type()
	{
		return ((::RPG::Client::SwordTrainingPerformanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B49A7D0C2ECC784E_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::Client::SwordTrainingPerformanceType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_B49A7D0C2ECC784E_SET_TYPE_OFFSET))(this, value);
	}

	::System::Action* get_PerformanceEndCallback()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B49A7D0C2ECC784E_GET_PERFORMANCEENDCALLBACK_OFFSET))(this);
	}

	::System::Void set_PerformanceEndCallback(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B49A7D0C2ECC784E_SET_PERFORMANCEENDCALLBACK_OFFSET))(this, value);
	}

	::System::Boolean get_SkipTeleport()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B49A7D0C2ECC784E_GET_SKIPTELEPORT_OFFSET))(this);
	}

	::System::Void set_SkipTeleport(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B49A7D0C2ECC784E_SET_SKIPTELEPORT_OFFSET))(this, value);
	}
};
