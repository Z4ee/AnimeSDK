#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0AF00976E6903061;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_964E2D961D8B2F0E__CTOR_OFFSET UNITYSDK_OFFSET(0x13CE24C0)

inline static constexpr unsigned int Class_1_964E2D961D8B2F0E_TypeDefinitionIndex = 59773;

class Class_1_964E2D961D8B2F0E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_0AF00976E6903061*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964E2D961D8B2F0E__CTOR_OFFSET))(this);
	}
};
