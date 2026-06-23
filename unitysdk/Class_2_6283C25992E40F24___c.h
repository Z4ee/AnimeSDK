#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIInLevelSkillButtonZiplineChangeChildWindowController_Mode.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_6283C25992E40F24___C_METHOD_1_30E1342B30B71849_OFFSET UNITYSDK_OFFSET(0x101D7610)
#define CLASS_2_6283C25992E40F24___C_METHOD_1_F548E9A6D316B815_OFFSET UNITYSDK_OFFSET(0x101D7460)
#define CLASS_2_6283C25992E40F24___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x101D7410)
#define CLASS_2_6283C25992E40F24___C__CTOR_OFFSET UNITYSDK_OFFSET(0x101D7450)

inline static constexpr unsigned int Class_2_6283C25992E40F24___c_TypeDefinitionIndex = 51283;

class Class_2_6283C25992E40F24___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::EntityHandle>** StaticGet___9__29_0()
	{
		return (::System::Func_1<::MoleMole::EntityHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6283C25992E40F24___c_TypeDefinitionIndex)->GetStaticField(0x3BB70);
	}
	static ::System::Func_1<::MoleMole::UIInLevelSkillButtonZiplineChangeChildWindowController_Mode>** StaticGet___9__29_1()
	{
		return (::System::Func_1<::MoleMole::UIInLevelSkillButtonZiplineChangeChildWindowController_Mode>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6283C25992E40F24___c_TypeDefinitionIndex)->GetStaticField(0x3BB78);
	}
	static ::Class_2_6283C25992E40F24___c** StaticGet___9()
	{
		return (::Class_2_6283C25992E40F24___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6283C25992E40F24___c_TypeDefinitionIndex)->GetStaticField(0x3BB80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6283C25992E40F24___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6283C25992E40F24___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIInLevelSkillButtonZiplineChangeChildWindowController_Mode Method_1_F548E9A6D316B815()
	{
		return ((::MoleMole::UIInLevelSkillButtonZiplineChangeChildWindowController_Mode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6283C25992E40F24___C_METHOD_1_F548E9A6D316B815_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_1_30E1342B30B71849()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6283C25992E40F24___C_METHOD_1_30E1342B30B71849_OFFSET))(this);
	}
};
