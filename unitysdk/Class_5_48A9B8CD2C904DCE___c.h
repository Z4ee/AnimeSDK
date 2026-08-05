#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_48A9B8CD2C904DCE___C_METHOD_1_004EF7F411723ADC_OFFSET UNITYSDK_OFFSET(0x12BCE890)
#define CLASS_5_48A9B8CD2C904DCE___C_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12BCEA20)
#define CLASS_5_48A9B8CD2C904DCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BCE840)
#define CLASS_5_48A9B8CD2C904DCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12BCE880)

inline static constexpr unsigned int Class_5_48A9B8CD2C904DCE___c_TypeDefinitionIndex = 45837;

class Class_5_48A9B8CD2C904DCE___c : public ::System::Object
{
public:
	static ::Class_5_48A9B8CD2C904DCE___c** StaticGet___9()
	{
		return (::Class_5_48A9B8CD2C904DCE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_48A9B8CD2C904DCE___c_TypeDefinitionIndex)->GetStaticField(0x39120);
	}
	static ::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_48A9B8CD2C904DCE___c_TypeDefinitionIndex)->GetStaticField(0x39128);
	}
	static ::System::Action** StaticGet___9__21_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_5_48A9B8CD2C904DCE___c_TypeDefinitionIndex)->GetStaticField(0x39130);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_48A9B8CD2C904DCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_48A9B8CD2C904DCE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_004EF7F411723ADC(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + CLASS_5_48A9B8CD2C904DCE___C_METHOD_1_004EF7F411723ADC_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_48A9B8CD2C904DCE___C_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
