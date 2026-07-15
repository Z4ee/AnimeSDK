#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1061;
class Class_2_AD9AD2C922D82BDD;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_3FFEA49C18A8590E_METHOD_2_012617F70DD9D7B6_OFFSET UNITYSDK_OFFSET(0x176352D0)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x17636A00)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_1F0134B562731ABF_OFFSET UNITYSDK_OFFSET(0x17636C40)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_29169364C61FFEF2_OFFSET UNITYSDK_OFFSET(0x17637040)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_30A8BE571FA65949_OFFSET UNITYSDK_OFFSET(0x17634D90)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17636FA0)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_3CDF6ADA20D8C6EC_OFFSET UNITYSDK_OFFSET(0x17634F70)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_5CB1195CE7AFB965_OFFSET UNITYSDK_OFFSET(0x17636C90)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_6B181DF837608D32_OFFSET UNITYSDK_OFFSET(0x176364A0)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x17636950)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_9C7C9181F3354D4B_OFFSET UNITYSDK_OFFSET(0x17635BF0)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x17636E60)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x17634D20)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_CEB324AD021F471A_OFFSET UNITYSDK_OFFSET(0x17635A50)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x17636FF0)
#define CLASS_2_3FFEA49C18A8590E_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x17636310)
#define CLASS_2_3FFEA49C18A8590E__CTOR_OFFSET UNITYSDK_OFFSET(0x176372D0)
#define CLASS_2_3FFEA49C18A8590E__ONBIND_OFFSET UNITYSDK_OFFSET(0x17634C00)

inline static constexpr unsigned int Class_2_3FFEA49C18A8590E_TypeDefinitionIndex = 68687;

class Class_2_3FFEA49C18A8590E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::Class_0_16E4307DCC419505_1061* Field_2_3; // 0x60
	::RPG::GameCore::BattleInstance* Field_2_4; // 0x68
	::Class_2_AD9AD2C922D82BDD* Field_2_5; // 0x70
	::Class_0_16E4307DCC419505_1061* Field_2_6; // 0x78
	::System::Boolean Field_2_7; // 0x80
	::System::Boolean Field_2_8; // 0x81

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_30A8BE571FA65949()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_30A8BE571FA65949_OFFSET))(this);
	}

	::System::Void Method_2_3CDF6ADA20D8C6EC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_3CDF6ADA20D8C6EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_012617F70DD9D7B6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_012617F70DD9D7B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B181DF837608D32(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_6B181DF837608D32_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F0134B562731ABF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_1F0134B562731ABF_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CB1195CE7AFB965(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_5CB1195CE7AFB965_OFFSET))(this, a1);
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_29169364C61FFEF2(::System::UInt32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_29169364C61FFEF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9C7C9181F3354D4B(::RPG::GameCore::AvatarRowData* a1, ::RPG::GameCore::ICharacterSkillRowData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_9C7C9181F3354D4B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_CEB324AD021F471A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AvatarDataComponent*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AvatarDataComponent*&))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_CEB324AD021F471A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3FFEA49C18A8590E_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}
};
