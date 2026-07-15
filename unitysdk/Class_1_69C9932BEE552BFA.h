#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1192;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_69C9932BEE552BFA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1658E090)
#define CLASS_1_69C9932BEE552BFA_METHOD_1_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x1658EA90)
#define CLASS_1_69C9932BEE552BFA_METHOD_1_414A7307FE07A8CF_OFFSET UNITYSDK_OFFSET(0x1658E4C0)
#define CLASS_1_69C9932BEE552BFA_METHOD_1_87BD4DF5EA15A3A8_OFFSET UNITYSDK_OFFSET(0x1658E1B0)
#define CLASS_1_69C9932BEE552BFA_METHOD_1_F53BCDB0C8CF4D2A_OFFSET UNITYSDK_OFFSET(0x1658E7A0)
#define CLASS_1_69C9932BEE552BFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1658EB60)

inline static constexpr unsigned int Class_1_69C9932BEE552BFA_TypeDefinitionIndex = 71715;

class Class_1_69C9932BEE552BFA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

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

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1192*>* Method_1_414A7307FE07A8CF(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1192*>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_69C9932BEE552BFA_METHOD_1_414A7307FE07A8CF_OFFSET))(this, a1, a2);
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
