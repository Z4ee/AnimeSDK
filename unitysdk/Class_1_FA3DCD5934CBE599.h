#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E9A0EFA0AAE76DD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FA3DCD5934CBE599_GET_ID_OFFSET UNITYSDK_OFFSET(0x12CBE340)
#define CLASS_1_FA3DCD5934CBE599_GET_ISBATTLEEVENT_OFFSET UNITYSDK_OFFSET(0x12CBE360)
#define CLASS_1_FA3DCD5934CBE599_GET_SPECIALMARKDICT_OFFSET UNITYSDK_OFFSET(0x12CBE380)
#define CLASS_1_FA3DCD5934CBE599_SET_ID_OFFSET UNITYSDK_OFFSET(0x12CBE350)
#define CLASS_1_FA3DCD5934CBE599_SET_ISBATTLEEVENT_OFFSET UNITYSDK_OFFSET(0x12CBE370)
#define CLASS_1_FA3DCD5934CBE599_SET_SPECIALMARKDICT_OFFSET UNITYSDK_OFFSET(0x12CBE390)
#define CLASS_1_FA3DCD5934CBE599__CTOR_OFFSET UNITYSDK_OFFSET(0x12CBE2B0)

inline static constexpr unsigned int Class_1_FA3DCD5934CBE599_TypeDefinitionIndex = 81010;

class Class_1_FA3DCD5934CBE599 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3E9A0EFA0AAE76DD*>* _SpecialMarkDict_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18
	::System::Boolean _IsBattleEvent_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FA3DCD5934CBE599__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA3DCD5934CBE599_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA3DCD5934CBE599_SET_ID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsBattleEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA3DCD5934CBE599_GET_ISBATTLEEVENT_OFFSET))(this);
	}

	::System::Void set_IsBattleEvent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FA3DCD5934CBE599_SET_ISBATTLEEVENT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3E9A0EFA0AAE76DD*>* get_SpecialMarkDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3E9A0EFA0AAE76DD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA3DCD5934CBE599_GET_SPECIALMARKDICT_OFFSET))(this);
	}

	::System::Void set_SpecialMarkDict(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3E9A0EFA0AAE76DD*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3E9A0EFA0AAE76DD*>*))((::PBYTE)hIl2Cpp + CLASS_1_FA3DCD5934CBE599_SET_SPECIALMARKDICT_OFFSET))(this, a1);
	}
};
