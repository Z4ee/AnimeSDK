#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_918;
class Class_1_3F28033F34305C46;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2C35EEA98A016E79_GET_RETITEMS_OFFSET UNITYSDK_OFFSET(0x9034FE0)
#define CLASS_1_2C35EEA98A016E79_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9034ED0)
#define CLASS_1_2C35EEA98A016E79_METHOD_1_F3EE4C21B501FA95_OFFSET UNITYSDK_OFFSET(0x9034F40)
#define CLASS_1_2C35EEA98A016E79_SET_RETITEMS_OFFSET UNITYSDK_OFFSET(0x9034FF0)
#define CLASS_1_2C35EEA98A016E79__CTOR_OFFSET UNITYSDK_OFFSET(0x9035000)

inline static constexpr unsigned int Class_1_2C35EEA98A016E79_TypeDefinitionIndex = 67976;

class Class_1_2C35EEA98A016E79 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* _RetItems_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C35EEA98A016E79__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C35EEA98A016E79_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_F3EE4C21B501FA95(::Class_0_16E4307DCC419505_918* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_918*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_2C35EEA98A016E79_METHOD_1_F3EE4C21B501FA95_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_RetItems()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C35EEA98A016E79_GET_RETITEMS_OFFSET))(this);
	}

	::System::Void set_RetItems(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_2C35EEA98A016E79_SET_RETITEMS_OFFSET))(this, value);
	}
};
