#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A2301A8B07519135.h"

class Class_1_70697F531F566942_2;
class Class_1_945ACFB1FEBC7A2C_18;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_3_B3775D9B65EFBC91_METHOD_3_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x134C7DA0)
#define CLASS_3_B3775D9B65EFBC91_METHOD_3_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x134C8310)
#define CLASS_3_B3775D9B65EFBC91_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x134C8020)
#define CLASS_3_B3775D9B65EFBC91_METHOD_3_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0x134C7EB0)
#define CLASS_3_B3775D9B65EFBC91_METHOD_3_EFE936AF733A9DB1_OFFSET UNITYSDK_OFFSET(0x134C7F00)
#define CLASS_3_B3775D9B65EFBC91_METHOD_3_FB84CA7105A88F81_OFFSET UNITYSDK_OFFSET(0x134C80B0)
#define CLASS_3_B3775D9B65EFBC91_ONRETURN_OFFSET UNITYSDK_OFFSET(0x134C7D50)
#define CLASS_3_B3775D9B65EFBC91__CTOR_OFFSET UNITYSDK_OFFSET(0x134C8270)
#define CLASS_3_B3775D9B65EFBC91__ONBIND_OFFSET UNITYSDK_OFFSET(0x134C7CC0)
#define CLASS_3_B3775D9B65EFBC91___IFIXBASEPROXY_ONRETURN_OFFSET UNITYSDK_OFFSET(0x134C8300)
#define CLASS_3_B3775D9B65EFBC91___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x134C82A0)

inline static constexpr unsigned int Class_3_B3775D9B65EFBC91_TypeDefinitionIndex = 67061;

class Class_3_B3775D9B65EFBC91 : public ::Class_2_A2301A8B07519135
{
public:
	::UnityEngine::Animator* Field_3_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_3B10EBB5408EF02E(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91_METHOD_3_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_3_D2C3E503AE36B9C3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91_METHOD_3_D2C3E503AE36B9C3_OFFSET))(this, a1);
	}

	::System::Void Method_3_EFE936AF733A9DB1(::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_18*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_18*>*))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91_METHOD_3_EFE936AF733A9DB1_OFFSET))(this, a1);
	}

	::System::Void Method_3_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91_METHOD_3_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_3_FB84CA7105A88F81(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91_METHOD_3_FB84CA7105A88F81_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91___IFIXBASEPROXY_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_8CD1A6D1096A6CB7(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91_METHOD_3_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}
};
