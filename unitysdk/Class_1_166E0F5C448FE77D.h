#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1010;
class Class_1_3F28033F34305C46;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_166E0F5C448FE77D_GET_RETITEMS_OFFSET UNITYSDK_OFFSET(0x14A0A330)
#define CLASS_1_166E0F5C448FE77D_METHOD_1_25682602140D6309_OFFSET UNITYSDK_OFFSET(0x14A0A240)
#define CLASS_1_166E0F5C448FE77D_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x14A0A1D0)
#define CLASS_1_166E0F5C448FE77D_SET_RETITEMS_OFFSET UNITYSDK_OFFSET(0x14A0A340)
#define CLASS_1_166E0F5C448FE77D__CTOR_OFFSET UNITYSDK_OFFSET(0x14A0A350)

inline static constexpr unsigned int Class_1_166E0F5C448FE77D_TypeDefinitionIndex = 70466;

class Class_1_166E0F5C448FE77D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* _RetItems_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_166E0F5C448FE77D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_166E0F5C448FE77D_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Boolean Method_1_25682602140D6309(::Class_0_16E4307DCC419505_1010* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1010*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_1_166E0F5C448FE77D_METHOD_1_25682602140D6309_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_RetItems()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_166E0F5C448FE77D_GET_RETITEMS_OFFSET))(this);
	}

	::System::Void set_RetItems(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_166E0F5C448FE77D_SET_RETITEMS_OFFSET))(this, a1);
	}
};
