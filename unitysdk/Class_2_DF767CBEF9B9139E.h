#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_1_DD584E66F5D339D3;
class Class_3_6B9658F527402856;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_DF767CBEF9B9139E_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1147DE70)
#define CLASS_2_DF767CBEF9B9139E_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x1147DCE0)
#define CLASS_2_DF767CBEF9B9139E_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1147DEB0)
#define CLASS_2_DF767CBEF9B9139E__CTOR_OFFSET UNITYSDK_OFFSET(0x1147DCC0)

inline static constexpr unsigned int Class_2_DF767CBEF9B9139E_TypeDefinitionIndex = 48882;

class Class_2_DF767CBEF9B9139E : public ::Class_1_2231FD56C070349F
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_2_1; // 0x18
	::Class_1_DD584E66F5D339D3* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_2; // 0x28

	::System::Void _ctor(::Class_3_6B9658F527402856* a1, ::Class_1_DD584E66F5D339D3* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6B9658F527402856*, ::Class_1_DD584E66F5D339D3*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_DF767CBEF9B9139E__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF767CBEF9B9139E_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF767CBEF9B9139E_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF767CBEF9B9139E_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
