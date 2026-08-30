#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F84162D45373F557_UIElementType.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/System/Object.h"

class Class_1_F84162D45373F557_Class_1_880304D4E9A590C8;
namespace RPG::Client { class CloudUIPosReporterMono; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B4398514116C8CF2_METHOD_1_2E2231DD285B3FBE_OFFSET UNITYSDK_OFFSET(0x177F9E10)
#define CLASS_1_B4398514116C8CF2__CTOR_OFFSET UNITYSDK_OFFSET(0x177FA040)

inline static constexpr unsigned int Class_1_B4398514116C8CF2_TypeDefinitionIndex = 59995;

class Class_1_B4398514116C8CF2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::CloudUIBattlePosRegion, ::Class_1_F84162D45373F557_UIElementType>* EFMNDLPBIFF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4398514116C8CF2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8*>* Method_1_2E2231DD285B3FBE(::RPG::Client::CloudUIPosReporterMono* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8*>*(*)(::PVOID, ::RPG::Client::CloudUIPosReporterMono*))((::PBYTE)hIl2Cpp + CLASS_1_B4398514116C8CF2_METHOD_1_2E2231DD285B3FBE_OFFSET))(this, a1);
	}
};
