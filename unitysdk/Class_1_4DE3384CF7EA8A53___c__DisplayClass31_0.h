#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_331;
namespace System { class Action; }

#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS31_0__APPLYLAYER_B__0_OFFSET UNITYSDK_OFFSET(0xAC651E0)
#define CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC63330)

inline static constexpr unsigned int Class_1_4DE3384CF7EA8A53___c__DisplayClass31_0_TypeDefinitionIndex = 46622;

class Class_1_4DE3384CF7EA8A53___c__DisplayClass31_0 : public ::System::Object
{
public:
	::System::Action* finishCallback; // 0x10
	::Class_0_16E4307DCC419505_331* handle; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
	}

	::System::Void _ApplyLayer_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4DE3384CF7EA8A53___C__DISPLAYCLASS31_0__APPLYLAYER_B__0_OFFSET))(this, a1);
	}
};
