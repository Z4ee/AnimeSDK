#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_07EAD5B08687F346_CLEAR_OFFSET UNITYSDK_OFFSET(0x180B05F0)
#define CLASS_1_07EAD5B08687F346_METHOD_1_02EFFAE27F7FD9B3_OFFSET UNITYSDK_OFFSET(0x180B0D40)
#define CLASS_1_07EAD5B08687F346_METHOD_1_16B5254E8F103A0F_OFFSET UNITYSDK_OFFSET(0x180B0820)
#define CLASS_1_07EAD5B08687F346_METHOD_1_425B226ADBC6BFAE_OFFSET UNITYSDK_OFFSET(0x180B0790)
#define CLASS_1_07EAD5B08687F346_METHOD_1_94457A29A0D1E94E_OFFSET UNITYSDK_OFFSET(0x180B0AE0)
#define CLASS_1_07EAD5B08687F346_METHOD_1_DB2B8279031334FF_OFFSET UNITYSDK_OFFSET(0x180B0930)
#define CLASS_1_07EAD5B08687F346_METHOD_1_E37707502ECFE0A6_OFFSET UNITYSDK_OFFSET(0x180B0F80)
#define CLASS_1_07EAD5B08687F346_METHOD_1_E9E466E6EDEDE266_OFFSET UNITYSDK_OFFSET(0x180B0C10)
#define CLASS_1_07EAD5B08687F346__CTOR_OFFSET UNITYSDK_OFFSET(0x180B1060)

inline static constexpr unsigned int Class_1_07EAD5B08687F346_TypeDefinitionIndex = 39091;

class Class_1_07EAD5B08687F346 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* Field_1_1; // 0x10
	::RPG::PoolHashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_0; // 0x18

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

	::System::Void Method_1_94457A29A0D1E94E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_94457A29A0D1E94E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_02EFFAE27F7FD9B3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_02EFFAE27F7FD9B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_E37707502ECFE0A6(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_E37707502ECFE0A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DB2B8279031334FF(::System::Int32 a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_DB2B8279031334FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9E466E6EDEDE266(::System::Int32 a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_07EAD5B08687F346_METHOD_1_E9E466E6EDEDE266_OFFSET))(this, a1, a2);
	}
};
