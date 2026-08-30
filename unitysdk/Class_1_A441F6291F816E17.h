#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChooseDeliveryEntry; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_A441F6291F816E17_METHOD_1_173210441DEA27B9_OFFSET UNITYSDK_OFFSET(0x16B96510)
#define CLASS_1_A441F6291F816E17_METHOD_1_22E7D6C757A80BFD_OFFSET UNITYSDK_OFFSET(0x16B965E0)
#define CLASS_1_A441F6291F816E17_METHOD_1_52BA6E23EFEC7133_OFFSET UNITYSDK_OFFSET(0x16B963E0)
#define CLASS_1_A441F6291F816E17_METHOD_1_C9E1F19AD83A2155_OFFSET UNITYSDK_OFFSET(0x16B96670)
#define CLASS_1_A441F6291F816E17__CTOR_OFFSET UNITYSDK_OFFSET(0x16B96790)

inline static constexpr unsigned int Class_1_A441F6291F816E17_TypeDefinitionIndex = 63589;

class Class_1_A441F6291F816E17 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChooseDeliveryEntry*>* JDBDEKAJPFB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A441F6291F816E17__CTOR_OFFSET))(this);
	}

	::RPG::Client::ChooseDeliveryEntry* Method_1_52BA6E23EFEC7133(::System::UInt32 a1)
	{
		return ((::RPG::Client::ChooseDeliveryEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A441F6291F816E17_METHOD_1_52BA6E23EFEC7133_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_173210441DEA27B9(::System::UInt32 a1, ::RPG::Client::ChooseDeliveryEntry*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChooseDeliveryEntry*&))((::PBYTE)hIl2Cpp + CLASS_1_A441F6291F816E17_METHOD_1_173210441DEA27B9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_22E7D6C757A80BFD(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A441F6291F816E17_METHOD_1_22E7D6C757A80BFD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_C9E1F19AD83A2155()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A441F6291F816E17_METHOD_1_C9E1F19AD83A2155_OFFSET))(this);
	}
};
