#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_78433FB75A5779C7_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x16218F20)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_78433FB75A5779C7__CTOR_OFFSET UNITYSDK_OFFSET(0x16218F10)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_78433FB75A5779C7_TypeDefinitionIndex = 82181;

class Class_1_8B550A61FC9DDA82_Class_1_78433FB75A5779C7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_78433FB75A5779C7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_78433FB75A5779C7_METHOD_1_D109CE569415FA03_OFFSET))(this);
	}
};
