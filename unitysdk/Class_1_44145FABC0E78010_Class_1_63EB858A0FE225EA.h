#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_44145FABC0E78010_CLASS_1_63EB858A0FE225EA_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xEA6DCC0)
#define CLASS_1_44145FABC0E78010_CLASS_1_63EB858A0FE225EA__CTOR_OFFSET UNITYSDK_OFFSET(0xEA6DCB0)

inline static constexpr unsigned int Class_1_44145FABC0E78010_Class_1_63EB858A0FE225EA_TypeDefinitionIndex = 43939;

class Class_1_44145FABC0E78010_Class_1_63EB858A0FE225EA : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_2; // 0x10
	::System::Action_1<::System::String*>* Field_1_1; // 0x18
	::System::Action* Field_1_3; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44145FABC0E78010_CLASS_1_63EB858A0FE225EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_44145FABC0E78010_CLASS_1_63EB858A0FE225EA_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}
};
