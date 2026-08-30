#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMatchThreePropData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30AD45F4D42794E6_GET_BIRDID_OFFSET UNITYSDK_OFFSET(0x188ADAD0)
#define CLASS_1_30AD45F4D42794E6_GET_PROPDATAS_OFFSET UNITYSDK_OFFSET(0x188ADAF0)
#define CLASS_1_30AD45F4D42794E6_METHOD_1_63820209E6B1A9F2_OFFSET UNITYSDK_OFFSET(0x188ADB00)
#define CLASS_1_30AD45F4D42794E6_SET_BIRDID_OFFSET UNITYSDK_OFFSET(0x188ADAE0)
#define CLASS_1_30AD45F4D42794E6__CTOR_OFFSET UNITYSDK_OFFSET(0x188ADBF0)

inline static constexpr unsigned int Class_1_30AD45F4D42794E6_TypeDefinitionIndex = 66100;

class Class_1_30AD45F4D42794E6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* _PropDatas_k__BackingField; // 0x10
	::System::UInt32 _BirdID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD45F4D42794E6__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_BirdID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD45F4D42794E6_GET_BIRDID_OFFSET))(this);
	}

	::System::Void set_BirdID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_30AD45F4D42794E6_SET_BIRDID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* get_PropDatas()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD45F4D42794E6_GET_PROPDATAS_OFFSET))(this);
	}

	static ::Class_1_30AD45F4D42794E6* Method_1_63820209E6B1A9F2(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* a2)
	{
		return ((::Class_1_30AD45F4D42794E6*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*))((::PBYTE)hIl2Cpp + CLASS_1_30AD45F4D42794E6_METHOD_1_63820209E6B1A9F2_OFFSET))(a1, a2);
	}
};
