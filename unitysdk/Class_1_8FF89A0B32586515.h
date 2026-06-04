#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8FF89A0B32586515_METHOD_1_6AB817648D551E7E_OFFSET UNITYSDK_OFFSET(0xA44BC70)
#define CLASS_1_8FF89A0B32586515_METHOD_1_7738465BA5B9D85A_OFFSET UNITYSDK_OFFSET(0xA44BD70)
#define CLASS_1_8FF89A0B32586515_METHOD_1_B387E1AED8A8F880_1_OFFSET UNITYSDK_OFFSET(0xA44BDF0)
#define CLASS_1_8FF89A0B32586515_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xA44BCF0)
#define CLASS_1_8FF89A0B32586515__CTOR_OFFSET UNITYSDK_OFFSET(0xA44BCE0)

inline static constexpr unsigned int Class_1_8FF89A0B32586515_TypeDefinitionIndex = 69476;

class Class_1_8FF89A0B32586515 : public ::System::Object
{
public:
	::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_8FF89A0B32586515__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_8FF89A0B32586515* Method_1_6AB817648D551E7E(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
	{
		return ((::Class_1_8FF89A0B32586515*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_8FF89A0B32586515_METHOD_1_6AB817648D551E7E_OFFSET))(a1);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FF89A0B32586515_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* Method_1_7738465BA5B9D85A()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FF89A0B32586515_METHOD_1_7738465BA5B9D85A_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FF89A0B32586515_METHOD_1_B387E1AED8A8F880_1_OFFSET))(this);
	}
};
