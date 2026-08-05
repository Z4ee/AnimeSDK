#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABDepositoryElementTextTagRowWidgetController_Data; }
namespace MoleMole { class UIRABEnemyRowWidgetController_Data; }
namespace MoleMole { class UIRABLevelEnemyRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_9A4D825B1E3761F9___C_METHOD_1_A92CE8CBE95D68D5_OFFSET UNITYSDK_OFFSET(0x16452A60)
#define CLASS_2_9A4D825B1E3761F9___C_METHOD_1_B0173EDA5BE61396_OFFSET UNITYSDK_OFFSET(0x16452AD0)
#define CLASS_2_9A4D825B1E3761F9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16452A10)
#define CLASS_2_9A4D825B1E3761F9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16452A50)

inline static constexpr unsigned int Class_2_9A4D825B1E3761F9___c_TypeDefinitionIndex = 70481;

class Class_2_9A4D825B1E3761F9___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::Int32, ::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data*>** StaticGet___9__11_10()
	{
		return (::System::Converter_2<::System::Int32, ::MoleMole::UIRABDepositoryElementTextTagRowWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9A4D825B1E3761F9___c_TypeDefinitionIndex)->GetStaticField(0x34D80);
	}
	static ::Class_2_9A4D825B1E3761F9___c** StaticGet___9()
	{
		return (::Class_2_9A4D825B1E3761F9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9A4D825B1E3761F9___c_TypeDefinitionIndex)->GetStaticField(0x34D88);
	}
	static ::System::Func_2<::MoleMole::UIRABLevelEnemyRowWidgetController_Data*, ::MoleMole::UIRABEnemyRowWidgetController_Data*>** StaticGet___9__11_9()
	{
		return (::System::Func_2<::MoleMole::UIRABLevelEnemyRowWidgetController_Data*, ::MoleMole::UIRABEnemyRowWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9A4D825B1E3761F9___c_TypeDefinitionIndex)->GetStaticField(0x34D90);
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
