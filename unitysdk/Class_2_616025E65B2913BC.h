#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_945ACFB1FEBC7A2C_24;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define CLASS_2_616025E65B2913BC_METHOD_2_077465549C9EA81F_OFFSET UNITYSDK_OFFSET(0x1730EC50)
#define CLASS_2_616025E65B2913BC_METHOD_2_CAF4BF0B42450263_OFFSET UNITYSDK_OFFSET(0x1730ECA0)
#define CLASS_2_616025E65B2913BC__CTOR_OFFSET UNITYSDK_OFFSET(0x1730EDB0)
#define CLASS_2_616025E65B2913BC__ONBIND_OFFSET UNITYSDK_OFFSET(0x1730EAC0)

inline static constexpr unsigned int Class_2_616025E65B2913BC_TypeDefinitionIndex = 68225;

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

	::System::Void Method_2_077465549C9EA81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_616025E65B2913BC_METHOD_2_077465549C9EA81F_OFFSET))(this);
	}

	::System::Void Method_2_CAF4BF0B42450263(::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_24*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_24*>*))((::PBYTE)hIl2Cpp + CLASS_2_616025E65B2913BC_METHOD_2_CAF4BF0B42450263_OFFSET))(this, a1);
	}
};
