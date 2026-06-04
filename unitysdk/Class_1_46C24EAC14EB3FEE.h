#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_46C24EAC14EB3FEE_GET_PERFORMANCEENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAEE86E0)
#define CLASS_1_46C24EAC14EB3FEE_GET_PERFORMANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xAEE86A0)
#define CLASS_1_46C24EAC14EB3FEE_GET_SKIPTELEPORT_OFFSET UNITYSDK_OFFSET(0xAEE8700)
#define CLASS_1_46C24EAC14EB3FEE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xAEE86C0)
#define CLASS_1_46C24EAC14EB3FEE_SET_PERFORMANCEENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAEE86F0)
#define CLASS_1_46C24EAC14EB3FEE_SET_PERFORMANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xAEE86B0)
#define CLASS_1_46C24EAC14EB3FEE_SET_SKIPTELEPORT_OFFSET UNITYSDK_OFFSET(0xAEE8710)
#define CLASS_1_46C24EAC14EB3FEE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xAEE86D0)
#define CLASS_1_46C24EAC14EB3FEE__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE8720)

inline static constexpr unsigned int Class_1_46C24EAC14EB3FEE_TypeDefinitionIndex = 57971;

class Class_1_46C24EAC14EB3FEE : public ::System::Object
{
public:
	::System::Action* _PerformanceEndCallback_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _PerformanceIDList_k__BackingField; // 0x18
	::RPG::Client::SwordTrainingPerformanceType _Type_k__BackingField; // 0x20
	::System::Boolean _SkipTeleport_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46C24EAC14EB3FEE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_PerformanceIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46C24EAC14EB3FEE_GET_PERFORMANCEIDLIST_OFFSET))(this);
	}

	::System::Void set_PerformanceIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_46C24EAC14EB3FEE_SET_PERFORMANCEIDLIST_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTrainingPerformanceType get_Type()
	{
		return ((::RPG::Client::SwordTrainingPerformanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46C24EAC14EB3FEE_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::Client::SwordTrainingPerformanceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_46C24EAC14EB3FEE_SET_TYPE_OFFSET))(this, a1);
	}

	::System::Action* get_PerformanceEndCallback()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46C24EAC14EB3FEE_GET_PERFORMANCEENDCALLBACK_OFFSET))(this);
	}

	::System::Void set_PerformanceEndCallback(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_46C24EAC14EB3FEE_SET_PERFORMANCEENDCALLBACK_OFFSET))(this, a1);
	}

	::System::Boolean get_SkipTeleport()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46C24EAC14EB3FEE_GET_SKIPTELEPORT_OFFSET))(this);
	}

	::System::Void set_SkipTeleport(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_46C24EAC14EB3FEE_SET_SKIPTELEPORT_OFFSET))(this, a1);
	}
};
