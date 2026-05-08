#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_665;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D049E9EF414CBAAC_METHOD_1_977A5C8234F34C98_OFFSET UNITYSDK_OFFSET(0x165C7D70)
#define CLASS_1_D049E9EF414CBAAC__CTOR_OFFSET UNITYSDK_OFFSET(0x165C7CF0)

inline static constexpr unsigned int Class_1_D049E9EF414CBAAC_TypeDefinitionIndex = 13817;

class Class_1_D049E9EF414CBAAC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_665*>* Field_1_1; // 0x10
	::System::Byte Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D049E9EF414CBAAC__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_665*>* Method_1_977A5C8234F34C98()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_665*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D049E9EF414CBAAC_METHOD_1_977A5C8234F34C98_OFFSET))(this);
	}
};
