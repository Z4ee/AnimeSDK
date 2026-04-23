#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_969;
class Class_2_AD9AD2C922D82BDD;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x1243A830)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_15240475E6251796_OFFSET UNITYSDK_OFFSET(0x1243B240)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_3DD9CDD21849C79E_OFFSET UNITYSDK_OFFSET(0x12439670)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_53EFB6656ED62D50_OFFSET UNITYSDK_OFFSET(0x124397F0)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1243B5A0)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_5CB1195CE7AFB965_OFFSET UNITYSDK_OFFSET(0x1243AF30)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_64A453EFA5B2DCBE_OFFSET UNITYSDK_OFFSET(0x1243A100)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_723E4567D37B31D6_OFFSET UNITYSDK_OFFSET(0x1243AEE0)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_850E0EB08CA9201F_OFFSET UNITYSDK_OFFSET(0x12439A10)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_862A46B7ADA3ADE1_OFFSET UNITYSDK_OFFSET(0x1243AC70)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_A9DAF3FE2888211B_1_OFFSET UNITYSDK_OFFSET(0x1243B100)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x1243A730)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x12439600)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1243ABC0)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x1243B530)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_CEB324AD021F471A_OFFSET UNITYSDK_OFFSET(0x12439FB0)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1243B1F0)
#define CLASS_2_E7E9A0BE6C2493BC_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1243B490)
#define CLASS_2_E7E9A0BE6C2493BC__CTOR_OFFSET UNITYSDK_OFFSET(0x1243B4A0)
#define CLASS_2_E7E9A0BE6C2493BC__ONBIND_OFFSET UNITYSDK_OFFSET(0x124394E0)
#define CLASS_2_E7E9A0BE6C2493BC___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1243B4D0)

inline static constexpr unsigned int Class_2_E7E9A0BE6C2493BC_TypeDefinitionIndex = 66292;

class Class_2_E7E9A0BE6C2493BC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	::Class_2_AD9AD2C922D82BDD* Field_2_5; // 0x60
	::Class_0_16E4307DCC419505_969* Field_2_0; // 0x68
	::RPG::GameCore::BattleInstance* Field_2_2; // 0x70
	::Class_0_16E4307DCC419505_969* Field_2_1; // 0x78
	::System::Boolean Field_2_4; // 0x80
	::System::Boolean Field_2_3; // 0x81

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_3DD9CDD21849C79E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_3DD9CDD21849C79E_OFFSET))(this);
	}

	::System::Void Method_2_53EFB6656ED62D50(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_53EFB6656ED62D50_OFFSET))(this, a1);
	}

	::System::Void Method_2_850E0EB08CA9201F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_850E0EB08CA9201F_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_862A46B7ADA3ADE1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_862A46B7ADA3ADE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_723E4567D37B31D6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_723E4567D37B31D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CB1195CE7AFB965(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_5CB1195CE7AFB965_OFFSET))(this, a1);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_15240475E6251796(::System::UInt32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_15240475E6251796_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_64A453EFA5B2DCBE(::RPG::GameCore::AvatarRowData* a1, ::RPG::GameCore::ICharacterSkillRowData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_64A453EFA5B2DCBE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_CEB324AD021F471A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AvatarDataComponent*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AvatarDataComponent*&))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_CEB324AD021F471A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_A9DAF3FE2888211B_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_A9DAF3FE2888211B_1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E9A0BE6C2493BC_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
