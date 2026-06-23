#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F1B93E9ABCA6C70F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9D6E7E76075C6E2_1_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x165CA690)
#define CLASS_1_B9D6E7E76075C6E2_1_METHOD_1_5D060AEFC9F7D9B8_OFFSET UNITYSDK_OFFSET(0x165CA680)
#define CLASS_1_B9D6E7E76075C6E2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x165CA600)

inline static constexpr unsigned int Class_1_B9D6E7E76075C6E2_1_TypeDefinitionIndex = 65095;

class Class_1_B9D6E7E76075C6E2_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F1B93E9ABCA6C70F*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5D060AEFC9F7D9B8(::System::Collections::Generic::List_1<::Class_1_F1B93E9ABCA6C70F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_F1B93E9ABCA6C70F*>*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_1_METHOD_1_5D060AEFC9F7D9B8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_F1B93E9ABCA6C70F*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_F1B93E9ABCA6C70F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_1_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}
};
