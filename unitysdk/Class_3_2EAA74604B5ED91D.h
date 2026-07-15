#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1DC128E22A3FA54F.h"

class Class_1_70697F531F566942_2;
class Class_1_945ACFB1FEBC7A2C_20;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_3_2EAA74604B5ED91D_METHOD_3_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x1673F990)
#define CLASS_3_2EAA74604B5ED91D_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x1673FC10)
#define CLASS_3_2EAA74604B5ED91D_METHOD_3_B19D178EAF5F28EA_OFFSET UNITYSDK_OFFSET(0x1673FCA0)
#define CLASS_3_2EAA74604B5ED91D_METHOD_3_B7797AF42220DD8F_OFFSET UNITYSDK_OFFSET(0x1673FAA0)
#define CLASS_3_2EAA74604B5ED91D_METHOD_3_EFE936AF733A9DB1_OFFSET UNITYSDK_OFFSET(0x1673FAF0)
#define CLASS_3_2EAA74604B5ED91D_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1673F940)
#define CLASS_3_2EAA74604B5ED91D__CTOR_OFFSET UNITYSDK_OFFSET(0x1673FEA0)
#define CLASS_3_2EAA74604B5ED91D__ONBIND_OFFSET UNITYSDK_OFFSET(0x1673F8B0)

inline static constexpr unsigned int Class_3_2EAA74604B5ED91D_TypeDefinitionIndex = 68505;

class Class_3_2EAA74604B5ED91D : public ::Class_2_1DC128E22A3FA54F
{
public:
	::UnityEngine::Animator* Field_3_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EAA74604B5ED91D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EAA74604B5ED91D__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EAA74604B5ED91D_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_3B10EBB5408EF02E(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_2EAA74604B5ED91D_METHOD_3_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_3_B7797AF42220DD8F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2EAA74604B5ED91D_METHOD_3_B7797AF42220DD8F_OFFSET))(this, a1);
	}

	::System::Void Method_3_EFE936AF733A9DB1(::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_20*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_20*>*))((::PBYTE)hIl2Cpp + CLASS_3_2EAA74604B5ED91D_METHOD_3_EFE936AF733A9DB1_OFFSET))(this, a1);
	}

	::System::Void Method_3_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2EAA74604B5ED91D_METHOD_3_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_3_B19D178EAF5F28EA(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2EAA74604B5ED91D_METHOD_3_B19D178EAF5F28EA_OFFSET))(this, a1, a2);
	}
};
