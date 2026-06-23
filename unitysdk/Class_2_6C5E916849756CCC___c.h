#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C0193181990E79BE_1;
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_6C5E916849756CCC___C_METHOD_1_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x12E05A00)
#define CLASS_2_6C5E916849756CCC___C_METHOD_1_D6AE6EF47A1DDB72_OFFSET UNITYSDK_OFFSET(0x12E05980)
#define CLASS_2_6C5E916849756CCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E05930)
#define CLASS_2_6C5E916849756CCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E05970)

inline static constexpr unsigned int Class_2_6C5E916849756CCC___c_TypeDefinitionIndex = 86833;

class Class_2_6C5E916849756CCC___c : public ::System::Object
{
public:
	static ::Class_2_6C5E916849756CCC___c** StaticGet___9()
	{
		return (::Class_2_6C5E916849756CCC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x48F00);
	}
	static ::System::Action_1<::Class_3_C0193181990E79BE_1*>** StaticGet___9__15_10()
	{
		return (::System::Action_1<::Class_3_C0193181990E79BE_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x48F08);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__15_8()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x48F10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_1_D6AE6EF47A1DDB72()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C_METHOD_1_D6AE6EF47A1DDB72_OFFSET))(this);
	}

	::System::Void Method_1_A0042105686D97E8(::Class_3_C0193181990E79BE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C0193181990E79BE_1*))((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C_METHOD_1_A0042105686D97E8_OFFSET))(this, a1);
	}
};
