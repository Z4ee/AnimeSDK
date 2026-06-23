#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABDepositoryElementTextTagRowWidgetController_Data; }
namespace MoleMole { class UIRABEnemyRowWidgetController_Data; }
namespace MoleMole { class UIRABLevelEnemyRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_9A4D825B1E3761F9___C_METHOD_1_A92CE8CBE95D68D5_OFFSET UNITYSDK_OFFSET(0xB7921E0)
#define CLASS_2_9A4D825B1E3761F9___C_METHOD_1_B0173EDA5BE61396_OFFSET UNITYSDK_OFFSET(0xB792250)
#define CLASS_2_9A4D825B1E3761F9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB792190)
#define CLASS_2_9A4D825B1E3761F9___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB7921D0)

inline static constexpr unsigned int Class_2_9A4D825B1E3761F9___c_TypeDefinitionIndex = 68923;

class Class_2_9A4D825B1E3761F9___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::UIRABLevelEnemyRowWidgetController_Data*, ::MoleMole::UIRABEnemyRowWidgetController_Data*>** StaticGet___9__11_9()
	{
		return (::System::Func_2<::MoleMole::UIRABLevelEnemyRowWidgetController_Data*, ::MoleMole::UIRABEnemyRowWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9A4D825B1E3761F9___c_TypeDefinitionIndex)->GetStaticField(0x3E1D0);
	}
	static ::Class_2_9A4D825B1E3761F9___c** StaticGet___9()
	{
		return (::Class_2_9A4D825B1E3761F9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9A4D825B1E3761F9___c_TypeDefinitionIndex)->GetStaticField(0x3E1D8);
	}
	static ::System::Converter_2<::System::Int32, ::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data*>** StaticGet___9__11_10()
	{
		return (::System::Converter_2<::System::Int32, ::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9A4D825B1E3761F9___c_TypeDefinitionIndex)->GetStaticField(0x3E1E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9A4D825B1E3761F9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A4D825B1E3761F9___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIRABEnemyRowWidgetController_Data* Method_1_A92CE8CBE95D68D5(::MoleMole::UIRABLevelEnemyRowWidgetController_Data* a1)
	{
		return ((::MoleMole::UIRABEnemyRowWidgetController_Data*(*)(::PVOID, ::MoleMole::UIRABLevelEnemyRowWidgetController_Data*))((::PBYTE)hIl2Cpp + CLASS_2_9A4D825B1E3761F9___C_METHOD_1_A92CE8CBE95D68D5_OFFSET))(this, a1);
	}

	::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data* Method_1_B0173EDA5BE61396(::System::Int32 a1)
	{
		return ((::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9A4D825B1E3761F9___C_METHOD_1_B0173EDA5BE61396_OFFSET))(this, a1);
	}
};
