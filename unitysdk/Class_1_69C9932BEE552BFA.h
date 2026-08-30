#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1252;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_69C9932BEE552BFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F34FA0)
#define CLASS_1_69C9932BEE552BFA_METHOD_1_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x17F359A0)
#define CLASS_1_69C9932BEE552BFA_METHOD_1_414A7307FE07A8CF_OFFSET UNITYSDK_OFFSET(0x17F353D0)
#define CLASS_1_69C9932BEE552BFA_METHOD_1_87BD4DF5EA15A3A8_OFFSET UNITYSDK_OFFSET(0x17F350C0)
#define CLASS_1_69C9932BEE552BFA_METHOD_1_F53BCDB0C8CF4D2A_OFFSET UNITYSDK_OFFSET(0x17F356B0)
#define CLASS_1_69C9932BEE552BFA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F35A70)

inline static constexpr unsigned int Class_1_69C9932BEE552BFA_TypeDefinitionIndex = 75021;

class Class_1_69C9932BEE552BFA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* LDLIFOBHINC; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* CJJAHIJOJMN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* BDMJFJAHFGN; // 0x20
	::System::Boolean HHGMFCMPCIK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69C9932BEE552BFA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69C9932BEE552BFA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_87BD4DF5EA15A3A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69C9932BEE552BFA_METHOD_1_87BD4DF5EA15A3A8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1252*>* Method_1_414A7307FE07A8CF(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1252*>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_69C9932BEE552BFA_METHOD_1_414A7307FE07A8CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F53BCDB0C8CF4D2A(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_69C9932BEE552BFA_METHOD_1_F53BCDB0C8CF4D2A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69C9932BEE552BFA_METHOD_1_3CF43707BF2E9BBA_OFFSET))(this);
	}
};
