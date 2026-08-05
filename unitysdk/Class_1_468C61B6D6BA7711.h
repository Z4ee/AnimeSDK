#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_107658B7E82D7A9A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_468C61B6D6BA7711__CTOR_OFFSET UNITYSDK_OFFSET(0x15082F90)

inline static constexpr unsigned int Class_1_468C61B6D6BA7711_TypeDefinitionIndex = 48165;

class Class_1_468C61B6D6BA7711 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_107658B7E82D7A9A*>* Field_1_4; // 0x30
	::System::Int32 Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_468C61B6D6BA7711__CTOR_OFFSET))(this);
	}
};
