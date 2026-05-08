#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C0193181990E79BE_12;
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_6C5E916849756CCC___C_METHOD_1_7FE3EA8542ED97C3_OFFSET UNITYSDK_OFFSET(0x1306BA90)
#define CLASS_2_6C5E916849756CCC___C_METHOD_1_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x1306BA80)
#define CLASS_2_6C5E916849756CCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1306BA30)
#define CLASS_2_6C5E916849756CCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1306BA70)

inline static constexpr unsigned int Class_2_6C5E916849756CCC___c_TypeDefinitionIndex = 47841;

class Class_2_6C5E916849756CCC___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__15_7()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x303F0);
	}
	static ::Class_2_6C5E916849756CCC___c** StaticGet___9()
	{
		return (::Class_2_6C5E916849756CCC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x303F8);
	}
	static ::System::Action_1<::Class_3_C0193181990E79BE_12*>** StaticGet___9__15_9()
	{
		return (::System::Action_1<::Class_3_C0193181990E79BE_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x30400);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A0042105686D97E8(::Class_3_C0193181990E79BE_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C0193181990E79BE_12*))((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C_METHOD_1_A0042105686D97E8_OFFSET))(this, a1);
	}

	::MoleMole::UIControllerContextBase* Method_1_7FE3EA8542ED97C3()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C_METHOD_1_7FE3EA8542ED97C3_OFFSET))(this);
	}
};
