#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20F751C9D1225D72;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9D6E7E76075C6E2_3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13164F60)
#define CLASS_1_B9D6E7E76075C6E2_3_METHOD_1_835758B171E01A6B_OFFSET UNITYSDK_OFFSET(0x131644D0)
#define CLASS_1_B9D6E7E76075C6E2_3__CTOR_OFFSET UNITYSDK_OFFSET(0x131644C0)

inline static constexpr unsigned int Class_1_B9D6E7E76075C6E2_3_TypeDefinitionIndex = 45671;

class Class_1_B9D6E7E76075C6E2_3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_20F751C9D1225D72*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_20F751C9D1225D72*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_20F751C9D1225D72*>*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_3__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_835758B171E01A6B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_3_METHOD_1_835758B171E01A6B_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
