#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B71B870103B6CD36_Class_1_4DE51D3432AC64D4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B71B870103B6CD36_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x19506720)
#define CLASS_1_B71B870103B6CD36_METHOD_1_4EBEE54C9A644B9D_OFFSET UNITYSDK_OFFSET(0x19506780)
#define CLASS_1_B71B870103B6CD36_METHOD_1_665DA8A75463507D_OFFSET UNITYSDK_OFFSET(0x195069A0)
#define CLASS_1_B71B870103B6CD36__CTOR_OFFSET UNITYSDK_OFFSET(0x19506690)

inline static constexpr unsigned int Class_1_B71B870103B6CD36_TypeDefinitionIndex = 42722;

class Class_1_B71B870103B6CD36 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B71B870103B6CD36_Class_1_4DE51D3432AC64D4*>* Field_1_0; // 0x10
	::System::Single Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71B870103B6CD36__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B71B870103B6CD36_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::Class_1_B71B870103B6CD36_Class_1_4DE51D3432AC64D4* Method_1_4EBEE54C9A644B9D(::System::String* a1, ::System::Object* a2)
	{
		return ((::Class_1_B71B870103B6CD36_Class_1_4DE51D3432AC64D4*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B71B870103B6CD36_METHOD_1_4EBEE54C9A644B9D_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_665DA8A75463507D(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B71B870103B6CD36_METHOD_1_665DA8A75463507D_OFFSET))(this, a1);
	}
};
