#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_945ACFB1FEBC7A2C_24;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define CLASS_2_616025E65B2913BC_METHOD_2_077465549C9EA81F_OFFSET UNITYSDK_OFFSET(0x1550B8D0)
#define CLASS_2_616025E65B2913BC_METHOD_2_CAF4BF0B42450263_OFFSET UNITYSDK_OFFSET(0x1550B920)
#define CLASS_2_616025E65B2913BC__CTOR_OFFSET UNITYSDK_OFFSET(0x1550BA30)
#define CLASS_2_616025E65B2913BC__ONBIND_OFFSET UNITYSDK_OFFSET(0x1550B740)

inline static constexpr unsigned int Class_2_616025E65B2913BC_TypeDefinitionIndex = 71407;

class Class_2_616025E65B2913BC : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x68

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
