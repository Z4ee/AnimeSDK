#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1019;
class Class_2_AD9AD2C922D82BDD;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_277F05E864245D00_METHOD_2_012617F70DD9D7B6_OFFSET UNITYSDK_OFFSET(0xA8171E0)
#define CLASS_2_277F05E864245D00_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0xA818420)
#define CLASS_2_277F05E864245D00_METHOD_2_30A8BE571FA65949_OFFSET UNITYSDK_OFFSET(0xA816CF0)
#define CLASS_2_277F05E864245D00_METHOD_2_3317C35C4958EC45_OFFSET UNITYSDK_OFFSET(0xA8189C0)
#define CLASS_2_277F05E864245D00_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA818D00)
#define CLASS_2_277F05E864245D00_METHOD_2_5CB1195CE7AFB965_OFFSET UNITYSDK_OFFSET(0xA8186B0)
#define CLASS_2_277F05E864245D00_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xA818CA0)
#define CLASS_2_277F05E864245D00_METHOD_2_6B181DF837608D32_OFFSET UNITYSDK_OFFSET(0xA817FD0)
#define CLASS_2_277F05E864245D00_METHOD_2_723E4567D37B31D6_OFFSET UNITYSDK_OFFSET(0xA818660)
#define CLASS_2_277F05E864245D00_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xA818370)
#define CLASS_2_277F05E864245D00_METHOD_2_A9DAF3FE2888211B_1_OFFSET UNITYSDK_OFFSET(0xA818880)
#define CLASS_2_277F05E864245D00_METHOD_2_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0xA817ED0)
#define CLASS_2_277F05E864245D00_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xA816C80)
#define CLASS_2_277F05E864245D00_METHOD_2_BE790DD47B832304_OFFSET UNITYSDK_OFFSET(0xA8178C0)
#define CLASS_2_277F05E864245D00_METHOD_2_CEB324AD021F471A_OFFSET UNITYSDK_OFFSET(0xA817720)
#define CLASS_2_277F05E864245D00_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA818970)
#define CLASS_2_277F05E864245D00_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA818C00)
#define CLASS_2_277F05E864245D00_METHOD_2_F00F31CDB4F497F2_OFFSET UNITYSDK_OFFSET(0xA816ED0)
#define CLASS_2_277F05E864245D00__CTOR_OFFSET UNITYSDK_OFFSET(0xA818C10)
#define CLASS_2_277F05E864245D00__ONBIND_OFFSET UNITYSDK_OFFSET(0xA8166F0)
#define CLASS_2_277F05E864245D00___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA818C40)

inline static constexpr unsigned int Class_2_277F05E864245D00_TypeDefinitionIndex = 67233;

class Class_2_277F05E864245D00 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::Class_0_16E4307DCC419505_1019* Field_2_3; // 0x60
	::Class_0_16E4307DCC419505_1019* Field_2_4; // 0x68
	::Class_2_AD9AD2C922D82BDD* Field_2_5; // 0x70
	::RPG::GameCore::BattleInstance* Field_2_6; // 0x78
	::System::Boolean Field_2_7; // 0x80
	::System::Boolean Field_2_8; // 0x81

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_30A8BE571FA65949()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_30A8BE571FA65949_OFFSET))(this);
	}

	::System::Void Method_2_F00F31CDB4F497F2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_F00F31CDB4F497F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_012617F70DD9D7B6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_012617F70DD9D7B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B181DF837608D32(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_6B181DF837608D32_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_723E4567D37B31D6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_723E4567D37B31D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CB1195CE7AFB965(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_5CB1195CE7AFB965_OFFSET))(this, a1);
	}

	::System::Void Method_2_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_3317C35C4958EC45(::System::UInt32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_3317C35C4958EC45_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BE790DD47B832304(::RPG::GameCore::AvatarRowData* a1, ::RPG::GameCore::ICharacterSkillRowData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_BE790DD47B832304_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_CEB324AD021F471A(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AvatarDataComponent*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AvatarDataComponent*&))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_CEB324AD021F471A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_A9DAF3FE2888211B_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_A9DAF3FE2888211B_1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_277F05E864245D00_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
