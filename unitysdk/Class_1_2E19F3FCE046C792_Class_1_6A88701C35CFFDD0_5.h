#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_116;
class Class_0_16E4307DCC419505_1495;
class Class_0_16E4307DCC419505_167;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_2E19F3FCE046C792_CLASS_1_6A88701C35CFFDD0_5_METHOD_1_85AD8620182D62A0_OFFSET UNITYSDK_OFFSET(0x15CD4550)
#define CLASS_1_2E19F3FCE046C792_CLASS_1_6A88701C35CFFDD0_5_METHOD_1_C9ADBF6BC77E74FE_OFFSET UNITYSDK_OFFSET(0x15CD43E0)
#define CLASS_1_2E19F3FCE046C792_CLASS_1_6A88701C35CFFDD0_5__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD43D0)

inline static constexpr unsigned int Class_1_2E19F3FCE046C792_Class_1_6A88701C35CFFDD0_5_TypeDefinitionIndex = 79592;

class Class_1_2E19F3FCE046C792_Class_1_6A88701C35CFFDD0_5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_167* LLOCADHAALJ; // 0x10
	::Class_0_16E4307DCC419505_116* NEADLJNICHM; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_116* a1, ::Class_0_16E4307DCC419505_167* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_116*, ::Class_0_16E4307DCC419505_167*))((::PBYTE)hIl2Cpp + CLASS_1_2E19F3FCE046C792_CLASS_1_6A88701C35CFFDD0_5__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1495* Method_1_C9ADBF6BC77E74FE(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::Int32 a2)
	{
		return ((::Class_0_16E4307DCC419505_1495*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2E19F3FCE046C792_CLASS_1_6A88701C35CFFDD0_5_METHOD_1_C9ADBF6BC77E74FE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1495*>* Method_1_85AD8620182D62A0(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1495*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_2E19F3FCE046C792_CLASS_1_6A88701C35CFFDD0_5_METHOD_1_85AD8620182D62A0_OFFSET))(this, a1);
	}
};
