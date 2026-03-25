#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_49CD4483759F3691.h"

class Class_1_70697F531F566942_1;
class Class_1_945ACFB1FEBC7A2C_18;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_3_B3775D9B65EFBC91_METHOD_3_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x114BB8F0)
#define CLASS_3_B3775D9B65EFBC91_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x114BBB60)
#define CLASS_3_B3775D9B65EFBC91_METHOD_3_AA885AF35B10752C_OFFSET UNITYSDK_OFFSET(0x114BBA40)
#define CLASS_3_B3775D9B65EFBC91_METHOD_3_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0x114BB9F0)
#define CLASS_3_B3775D9B65EFBC91_METHOD_3_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x114BBEC0)
#define CLASS_3_B3775D9B65EFBC91_METHOD_3_FB84CA7105A88F81_OFFSET UNITYSDK_OFFSET(0x114BBBF0)
#define CLASS_3_B3775D9B65EFBC91_ONRETURN_OFFSET UNITYSDK_OFFSET(0x114BB880)
#define CLASS_3_B3775D9B65EFBC91__CTOR_OFFSET UNITYSDK_OFFSET(0x114BBDC0)
#define CLASS_3_B3775D9B65EFBC91__ONBIND_OFFSET UNITYSDK_OFFSET(0x114BB7A0)
#define CLASS_3_B3775D9B65EFBC91___IFIXBASEPROXY_ONRETURN_OFFSET UNITYSDK_OFFSET(0x114BBE50)
#define CLASS_3_B3775D9B65EFBC91___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x114BBDF0)

inline static constexpr unsigned int Class_3_B3775D9B65EFBC91_TypeDefinitionIndex = 58765;

class Class_3_B3775D9B65EFBC91 : public ::Class_2_49CD4483759F3691
{
public:
	::UnityEngine::Animator* Field_3_0; // 0x70

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

	::System::Void Method_3_3B10EBB5408EF02E(::Class_1_70697F531F566942_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91_METHOD_3_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_3_D2C3E503AE36B9C3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91_METHOD_3_D2C3E503AE36B9C3_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA885AF35B10752C(::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_18*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_18*>*))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91_METHOD_3_AA885AF35B10752C_OFFSET))(this, a1);
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

	::System::Void Method_3_E2CDB6B22CCEBA97(::Class_1_70697F531F566942_1* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_3_B3775D9B65EFBC91_METHOD_3_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}
};
