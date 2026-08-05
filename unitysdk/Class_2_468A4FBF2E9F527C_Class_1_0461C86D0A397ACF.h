#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1E6D2200CD1BDBEF.h"
#include "unitysdk/Struct_2_7548B21900B2290E_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_468A4FBF2E9F527C_CLASS_1_0461C86D0A397ACF__CTOR_OFFSET UNITYSDK_OFFSET(0x142FEAA0)

inline static constexpr unsigned int Class_2_468A4FBF2E9F527C_Class_1_0461C86D0A397ACF_TypeDefinitionIndex = 69811;

class Class_2_468A4FBF2E9F527C_Class_1_0461C86D0A397ACF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_1E6D2200CD1BDBEF>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_7548B21900B2290E_1>* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_0; // 0x28
	::System::Single Field_1_5; // 0x30
	::System::Int32 Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_468A4FBF2E9F527C_CLASS_1_0461C86D0A397ACF__CTOR_OFFSET))(this);
	}
};
