#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0486E82E26AF727D_CLASS_1_67D37A9C10FE429B__CTOR_OFFSET UNITYSDK_OFFSET(0x16686DC0)

inline static constexpr unsigned int Class_1_0486E82E26AF727D_Class_1_67D37A9C10FE429B_TypeDefinitionIndex = 82633;

class Class_1_0486E82E26AF727D_Class_1_67D37A9C10FE429B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0486E82E26AF727D_CLASS_1_67D37A9C10FE429B__CTOR_OFFSET))(this);
	}
};
