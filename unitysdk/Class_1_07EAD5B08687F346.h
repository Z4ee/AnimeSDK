#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_07EAD5B08687F346_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E281C0)
#define CLASS_1_07EAD5B08687F346_METHOD_1_16B5254E8F103A0F_OFFSET UNITYSDK_OFFSET(0x18E283A0)
#define CLASS_1_07EAD5B08687F346_METHOD_1_355098BE7E395AFD_OFFSET UNITYSDK_OFFSET(0x18E28790)
#define CLASS_1_07EAD5B08687F346_METHOD_1_425B226ADBC6BFAE_OFFSET UNITYSDK_OFFSET(0x18E28310)
#define CLASS_1_07EAD5B08687F346_METHOD_1_5A9A62E6A31621BD_OFFSET UNITYSDK_OFFSET(0x18E28660)
#define CLASS_1_07EAD5B08687F346_METHOD_1_A3F9A666F7E0E2B7_OFFSET UNITYSDK_OFFSET(0x18E28A60)
#define CLASS_1_07EAD5B08687F346_METHOD_1_DC497FA458BA0CAA_OFFSET UNITYSDK_OFFSET(0x18E28890)
#define CLASS_1_07EAD5B08687F346_METHOD_1_E9E466E6EDEDE266_OFFSET UNITYSDK_OFFSET(0x18E284B0)
#define CLASS_1_07EAD5B08687F346__CTOR_OFFSET UNITYSDK_OFFSET(0x18E28B10)

inline static constexpr unsigned int Class_1_07EAD5B08687F346_TypeDefinitionIndex = 39859;

class Class_1_07EAD5B08687F346 : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_425B226ADBC6BFAE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_425B226ADBC6BFAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_16B5254E8F103A0F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_16B5254E8F103A0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A9A62E6A31621BD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_5A9A62E6A31621BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC497FA458BA0CAA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_DC497FA458BA0CAA_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3F9A666F7E0E2B7(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_A3F9A666F7E0E2B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9E466E6EDEDE266(::System::Int32 a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_E9E466E6EDEDE266_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_355098BE7E395AFD(::System::Int32 a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_355098BE7E395AFD_OFFSET))(this, a1, a2);
	}
};
