#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_37BDD4E79861307F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9A691EC22B2A54E1_METHOD_1_090683E853EFD753_OFFSET UNITYSDK_OFFSET(0x8DC7880)
#define CLASS_1_9A691EC22B2A54E1_METHOD_1_28141416ADF4E9A8_OFFSET UNITYSDK_OFFSET(0x8DC8480)
#define CLASS_1_9A691EC22B2A54E1_METHOD_1_2E8AFDFF20EB7DF5_OFFSET UNITYSDK_OFFSET(0x8DC7800)
#define CLASS_1_9A691EC22B2A54E1_METHOD_1_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x8DC8CD0)
#define CLASS_1_9A691EC22B2A54E1_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x8DC72B0)
#define CLASS_1_9A691EC22B2A54E1_METHOD_1_722C40A9A071D2E1_OFFSET UNITYSDK_OFFSET(0x8DC7AC0)
#define CLASS_1_9A691EC22B2A54E1_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8DC8D90)
#define CLASS_1_9A691EC22B2A54E1_METHOD_1_9B2911E57853F013_OFFSET UNITYSDK_OFFSET(0x8DC7370)
#define CLASS_1_9A691EC22B2A54E1_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x8DC8DE0)
#define CLASS_1_9A691EC22B2A54E1_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x8DC8220)
#define CLASS_1_9A691EC22B2A54E1_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x8DC7D10)
#define CLASS_1_9A691EC22B2A54E1__CTOR_OFFSET UNITYSDK_OFFSET(0x8DC7160)

inline static constexpr unsigned int Class_1_9A691EC22B2A54E1_TypeDefinitionIndex = 44884;

class Class_1_9A691EC22B2A54E1 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_6; // 0x0
	::Class_1_37BDD4E79861307F* Field_1_3; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_37BDD4E79861307F*>* Field_1_1; // 0x20
	::RPG::GameCore::TurnBasedGameMode* Field_1_0; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_4; // 0x34

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::Class_1_37BDD4E79861307F* Method_1_2E8AFDFF20EB7DF5(::System::Int32 a1)
	{
		return ((::Class_1_37BDD4E79861307F*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1_METHOD_1_2E8AFDFF20EB7DF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_090683E853EFD753(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1_METHOD_1_090683E853EFD753_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_28141416ADF4E9A8()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1_METHOD_1_28141416ADF4E9A8_OFFSET))(this);
	}

	::System::Void Method_1_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1_METHOD_1_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_9B2911E57853F013(::Class_1_37BDD4E79861307F* a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::Class_1_37BDD4E79861307F*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1_METHOD_1_9B2911E57853F013_OFFSET))(this, a1, a2);
	}

	::Class_1_37BDD4E79861307F* Method_1_722C40A9A071D2E1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_37BDD4E79861307F*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1_METHOD_1_722C40A9A071D2E1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A691EC22B2A54E1_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};
