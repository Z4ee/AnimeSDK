#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F80ACDC6C476D82;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_18643BAA5616465D_CLASS_1_D5BE28A88B2AF28C_METHOD_1_47C4C002C549FC1A_OFFSET UNITYSDK_OFFSET(0x14142DE0)
#define CLASS_3_18643BAA5616465D_CLASS_1_D5BE28A88B2AF28C__CTOR_OFFSET UNITYSDK_OFFSET(0x14142DD0)

inline static constexpr unsigned int Class_3_18643BAA5616465D_Class_1_D5BE28A88B2AF28C_TypeDefinitionIndex = 44671;

class Class_3_18643BAA5616465D_Class_1_D5BE28A88B2AF28C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Action_1<::Class_1_1F80ACDC6C476D82*>* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1F80ACDC6C476D82*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_CLASS_1_D5BE28A88B2AF28C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_47C4C002C549FC1A(::Class_1_1F80ACDC6C476D82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F80ACDC6C476D82*))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_CLASS_1_D5BE28A88B2AF28C_METHOD_1_47C4C002C549FC1A_OFFSET))(this, a1);
	}
};
