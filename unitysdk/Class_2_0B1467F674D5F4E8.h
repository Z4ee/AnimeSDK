#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_945ACFB1FEBC7A2C_21;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define CLASS_2_0B1467F674D5F4E8_METHOD_2_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x1255C730)
#define CLASS_2_0B1467F674D5F4E8_METHOD_2_955B34203630535A_OFFSET UNITYSDK_OFFSET(0x1255C8F0)
#define CLASS_2_0B1467F674D5F4E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1255C9D0)
#define CLASS_2_0B1467F674D5F4E8__ONBIND_OFFSET UNITYSDK_OFFSET(0x1255C5B0)
#define CLASS_2_0B1467F674D5F4E8___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1255CA00)

inline static constexpr unsigned int Class_2_0B1467F674D5F4E8_TypeDefinitionIndex = 65854;

class Class_2_0B1467F674D5F4E8 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Animation* Field_2_0; // 0x60
	::RPG::Client::RPGAnimationEvent* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B1467F674D5F4E8__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B1467F674D5F4E8__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B1467F674D5F4E8_METHOD_2_1092C5537716905B_OFFSET))(this);
	}

	::System::Void Method_2_955B34203630535A(::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_21*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_21*>*))((::PBYTE)hIl2Cpp + CLASS_2_0B1467F674D5F4E8_METHOD_2_955B34203630535A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B1467F674D5F4E8___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
