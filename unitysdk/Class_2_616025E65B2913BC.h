#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_945ACFB1FEBC7A2C_22;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define CLASS_2_616025E65B2913BC_METHOD_2_AD2B2AFEF3192F72_OFFSET UNITYSDK_OFFSET(0x13743ED0)
#define CLASS_2_616025E65B2913BC_METHOD_2_CAF4BF0B42450263_OFFSET UNITYSDK_OFFSET(0x13743F20)
#define CLASS_2_616025E65B2913BC__CTOR_OFFSET UNITYSDK_OFFSET(0x13744030)
#define CLASS_2_616025E65B2913BC__ONBIND_OFFSET UNITYSDK_OFFSET(0x13743D40)
#define CLASS_2_616025E65B2913BC___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13744060)

inline static constexpr unsigned int Class_2_616025E65B2913BC_TypeDefinitionIndex = 66788;

class Class_2_616025E65B2913BC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::RPGAnimationEvent* Field_2_0; // 0x60
	::UnityEngine::Animation* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_616025E65B2913BC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_616025E65B2913BC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_AD2B2AFEF3192F72()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_616025E65B2913BC_METHOD_2_AD2B2AFEF3192F72_OFFSET))(this);
	}

	::System::Void Method_2_CAF4BF0B42450263(::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_22*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_22*>*))((::PBYTE)hIl2Cpp + CLASS_2_616025E65B2913BC_METHOD_2_CAF4BF0B42450263_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_616025E65B2913BC___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
