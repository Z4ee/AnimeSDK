#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_E651EC59C69087D5;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_A8886CB1373AE575_METHOD_2_1724616537E36B8E_OFFSET UNITYSDK_OFFSET(0x1A6C4E90)
#define CLASS_2_A8886CB1373AE575_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A6C4FA0)
#define CLASS_2_A8886CB1373AE575_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1A6C4EE0)
#define CLASS_2_A8886CB1373AE575_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x1A6C4AE0)
#define CLASS_2_A8886CB1373AE575__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C5010)
#define CLASS_2_A8886CB1373AE575__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A6C49C0)

inline static constexpr unsigned int Class_2_A8886CB1373AE575_TypeDefinitionIndex = 72214;

class Class_2_A8886CB1373AE575 : public ::Class_1_34917908B7833130
{
public:
	::Class_2_E651EC59C69087D5* PFKCKIOAOFO; // 0x60
	::UnityEngine::UI::Slider* HBMGJNFEFLN; // 0x68
	::System::Action_1<::Class_2_A8886CB1373AE575*>* HJLKNPIFNGI; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8886CB1373AE575__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8886CB1373AE575__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8886CB1373AE575_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_2_1724616537E36B8E(::System::Action_1<::Class_2_A8886CB1373AE575*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_2_A8886CB1373AE575*>*))((::PBYTE)hIl2Cpp + CLASS_2_A8886CB1373AE575_METHOD_2_1724616537E36B8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8886CB1373AE575_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8886CB1373AE575_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
