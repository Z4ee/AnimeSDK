#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/System/Object.h"

class Class_1_CB7F0487F7A6164A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5858F33063ADC66A_METHOD_1_47237B285B706963_OFFSET UNITYSDK_OFFSET(0x11E98370)
#define CLASS_1_5858F33063ADC66A_METHOD_1_DEC324896C1ADBED_OFFSET UNITYSDK_OFFSET(0x11E97F60)
#define CLASS_1_5858F33063ADC66A_METHOD_1_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0x11E98160)
#define CLASS_1_5858F33063ADC66A__CTOR_OFFSET UNITYSDK_OFFSET(0x11E97ED0)

inline static constexpr unsigned int Class_1_5858F33063ADC66A_TypeDefinitionIndex = 48118;

class Class_1_5858F33063ADC66A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AbilityTargetting, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5858F33063ADC66A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DEC324896C1ADBED(::MoleMole::Config::AbilityTargetting a1, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AbilityTargetting, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*))((::PBYTE)hIl2Cpp + CLASS_1_5858F33063ADC66A_METHOD_1_DEC324896C1ADBED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5858F33063ADC66A_METHOD_1_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* Method_1_47237B285B706963(::MoleMole::Config::AbilityTargetting a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*(*)(::PVOID, ::MoleMole::Config::AbilityTargetting))((::PBYTE)hIl2Cpp + CLASS_1_5858F33063ADC66A_METHOD_1_47237B285B706963_OFFSET))(this, a1);
	}
};
