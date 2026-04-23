#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B9E6DC87D4879FCD.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_4A6263F694FB4D6A_METHOD_2_5E666539A1C93EAC_OFFSET UNITYSDK_OFFSET(0x19DB4D80)
#define CLASS_2_4A6263F694FB4D6A__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB4CA0)

inline static constexpr unsigned int Class_2_4A6263F694FB4D6A_TypeDefinitionIndex = 39859;

class Class_2_4A6263F694FB4D6A : public ::System::Exception
{
public:
	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::Struct_2_B9E6DC87D4879FCD>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Struct_2_B9E6DC87D4879FCD>*))((::PBYTE)hIl2Cpp + CLASS_2_4A6263F694FB4D6A__CTOR_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_5E666539A1C93EAC(::System::Collections::Generic::IEnumerable_1<::Struct_2_B9E6DC87D4879FCD>* a1)
	{
		return ((::System::String*(*)(::System::Collections::Generic::IEnumerable_1<::Struct_2_B9E6DC87D4879FCD>*))((::PBYTE)hIl2Cpp + CLASS_2_4A6263F694FB4D6A_METHOD_2_5E666539A1C93EAC_OFFSET))(a1);
	}
};
