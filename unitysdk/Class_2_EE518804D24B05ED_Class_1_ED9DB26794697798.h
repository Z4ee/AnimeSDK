#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_EE518804D24B05ED;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_EE518804D24B05ED_CLASS_1_ED9DB26794697798_METHOD_1_19B911E6848D24CA_OFFSET UNITYSDK_OFFSET(0x15363310)
#define CLASS_2_EE518804D24B05ED_CLASS_1_ED9DB26794697798__CTOR_OFFSET UNITYSDK_OFFSET(0x15358180)

inline static constexpr unsigned int Class_2_EE518804D24B05ED_Class_1_ED9DB26794697798_TypeDefinitionIndex = 60018;

class Class_2_EE518804D24B05ED_Class_1_ED9DB26794697798 : public ::System::Object
{
public:
	::Class_2_EE518804D24B05ED* Field_1_2; // 0x10
	::System::Action_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* Field_1_0; // 0x18
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED_CLASS_1_ED9DB26794697798__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_19B911E6848D24CA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED_CLASS_1_ED9DB26794697798_METHOD_1_19B911E6848D24CA_OFFSET))(this, a1);
	}
};
