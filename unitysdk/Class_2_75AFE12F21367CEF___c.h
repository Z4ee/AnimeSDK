#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_75AFE12F21367CEF___C_METHOD_1_004EF7F411723ADC_OFFSET UNITYSDK_OFFSET(0x1774E3B0)
#define CLASS_2_75AFE12F21367CEF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1774E360)
#define CLASS_2_75AFE12F21367CEF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1774E3A0)

inline static constexpr unsigned int Class_2_75AFE12F21367CEF___c_TypeDefinitionIndex = 87144;

class Class_2_75AFE12F21367CEF___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>** StaticGet___9__53_0()
	{
		return (::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_75AFE12F21367CEF___c_TypeDefinitionIndex)->GetStaticField(0x2E480);
	}
	static ::Class_2_75AFE12F21367CEF___c** StaticGet___9()
	{
		return (::Class_2_75AFE12F21367CEF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_75AFE12F21367CEF___c_TypeDefinitionIndex)->GetStaticField(0x2E488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_75AFE12F21367CEF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75AFE12F21367CEF___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_004EF7F411723ADC(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + CLASS_2_75AFE12F21367CEF___C_METHOD_1_004EF7F411723ADC_OFFSET))(this, a1);
	}
};
