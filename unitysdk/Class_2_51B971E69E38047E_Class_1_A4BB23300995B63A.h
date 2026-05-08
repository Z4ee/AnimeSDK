#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_3056A65E74601914;
namespace System { class Action; }

#define CLASS_2_51B971E69E38047E_CLASS_1_A4BB23300995B63A_METHOD_1_F52EFF7D10910629_OFFSET UNITYSDK_OFFSET(0xFB745A0)
#define CLASS_2_51B971E69E38047E_CLASS_1_A4BB23300995B63A__CTOR_OFFSET UNITYSDK_OFFSET(0xFB74590)

inline static constexpr unsigned int Class_2_51B971E69E38047E_Class_1_A4BB23300995B63A_TypeDefinitionIndex = 80673;

class Class_2_51B971E69E38047E_Class_1_A4BB23300995B63A : public ::System::Object
{
public:
	::Class_1_3056A65E74601914* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_A4BB23300995B63A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F52EFF7D10910629(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_A4BB23300995B63A_METHOD_1_F52EFF7D10910629_OFFSET))(this, a1);
	}
};
