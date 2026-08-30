#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_F5805CBBD0353DD6;
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_27786C24DA3EBF5C_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15286DA0)
#define CLASS_2_27786C24DA3EBF5C_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x15286CD0)
#define CLASS_2_27786C24DA3EBF5C_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x15286D20)
#define CLASS_2_27786C24DA3EBF5C_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x15286C70)
#define CLASS_2_27786C24DA3EBF5C__CTOR_OFFSET UNITYSDK_OFFSET(0x15286E40)
#define CLASS_2_27786C24DA3EBF5C__ONBIND_OFFSET UNITYSDK_OFFSET(0x15286BF0)

inline static constexpr unsigned int Class_2_27786C24DA3EBF5C_TypeDefinitionIndex = 72128;

class Class_2_27786C24DA3EBF5C : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* ILKFAAGCMHG; // 0x0
	::UnityEngine::Animation* KCOAILOHDND; // 0x60
	::Class_1_F5805CBBD0353DD6* APPIHABBCGK; // 0x68
	::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x70
	::System::Int32 IKIIIHNECLG; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27786C24DA3EBF5C_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}
};
