#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_D64D1DF1189AA0DE_CLASS_1_D61CA95282E9B959_METHOD_1_062EFC2CEFBD1558_OFFSET UNITYSDK_OFFSET(0x15D0F910)
#define CLASS_3_D64D1DF1189AA0DE_CLASS_1_D61CA95282E9B959_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x15D0F7B0)
#define CLASS_3_D64D1DF1189AA0DE_CLASS_1_D61CA95282E9B959__CTOR_OFFSET UNITYSDK_OFFSET(0x15D0F7A0)

inline static constexpr unsigned int Class_3_D64D1DF1189AA0DE_Class_1_D61CA95282E9B959_TypeDefinitionIndex = 48232;

class Class_3_D64D1DF1189AA0DE_Class_1_D61CA95282E9B959 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10
	::System::Action* Field_1_5; // 0x20
	::System::Int32 Field_1_7; // 0x28
	::System::Int32 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_CLASS_1_D61CA95282E9B959__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_CLASS_1_D61CA95282E9B959_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_062EFC2CEFBD1558(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D64D1DF1189AA0DE_CLASS_1_D61CA95282E9B959_METHOD_1_062EFC2CEFBD1558_OFFSET))(this, a1, a2);
	}
};
