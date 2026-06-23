#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E39938B68726A585_METHOD_1_800F7FDEB2F03033_OFFSET UNITYSDK_OFFSET(0x145C96E0)
#define CLASS_1_E39938B68726A585_METHOD_1_D936FF1923FB59BE_OFFSET UNITYSDK_OFFSET(0x145C9640)
#define CLASS_1_E39938B68726A585_METHOD_1_F3B15EE52124846E_OFFSET UNITYSDK_OFFSET(0x145C9920)
#define CLASS_1_E39938B68726A585__CTOR_OFFSET UNITYSDK_OFFSET(0x145C9630)

inline static constexpr unsigned int Class_1_E39938B68726A585_TypeDefinitionIndex = 78766;

class Class_1_E39938B68726A585 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E39938B68726A585__CTOR_OFFSET))(this);
	}

	static ::Il2CppArray<::System::String*>* Method_1_D936FF1923FB59BE(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E39938B68726A585_METHOD_1_D936FF1923FB59BE_OFFSET))(a1);
	}

	static ::System::Void Method_1_800F7FDEB2F03033(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E39938B68726A585_METHOD_1_800F7FDEB2F03033_OFFSET))(a1);
	}

	static ::System::Void Method_1_F3B15EE52124846E(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E39938B68726A585_METHOD_1_F3B15EE52124846E_OFFSET))(a1, a2);
	}
};
