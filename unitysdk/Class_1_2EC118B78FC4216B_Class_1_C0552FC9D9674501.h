#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_116;
class Class_0_16E4307DCC419505_167;
class Class_1_2EC118B78FC4216B;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501_METHOD_1_0F34E5741BF56117_OFFSET UNITYSDK_OFFSET(0xB487050)
#define CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501_METHOD_1_96087633D03B1262_OFFSET UNITYSDK_OFFSET(0xB487160)
#define CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501__CTOR_OFFSET UNITYSDK_OFFSET(0xB487040)

inline static constexpr unsigned int Class_1_2EC118B78FC4216B_Class_1_C0552FC9D9674501_TypeDefinitionIndex = 79426;

class Class_1_2EC118B78FC4216B_Class_1_C0552FC9D9674501 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_116* NEADLJNICHM; // 0x10
	::Class_0_16E4307DCC419505_167* LLOCADHAALJ; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_116* a1, ::Class_0_16E4307DCC419505_167* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_116*, ::Class_0_16E4307DCC419505_167*))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_2EC118B78FC4216B* Method_1_0F34E5741BF56117(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::Int32 a2)
	{
		return ((::Class_1_2EC118B78FC4216B*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501_METHOD_1_0F34E5741BF56117_OFFSET))(this, a1, a2);
	}

	::ObservableCollections::ObservableList_1<::Class_1_2EC118B78FC4216B*>* Method_1_96087633D03B1262(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>* a1)
	{
		return ((::ObservableCollections::ObservableList_1<::Class_1_2EC118B78FC4216B*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501_METHOD_1_96087633D03B1262_OFFSET))(this, a1);
	}
};
