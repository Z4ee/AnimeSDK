#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/BattleComboGear.h"

class Class_2_4A4A4FC674682470;
namespace RPG::GameCore { class LevelComboChangeEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_6FA64DA172FF7850_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15EE24E0)
#define CLASS_2_6FA64DA172FF7850_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15EE25D0)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_3EBDDB8CB2E1257C_OFFSET UNITYSDK_OFFSET(0x15EE1F50)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_53FC71A0CDC95BC5_OFFSET UNITYSDK_OFFSET(0x15EE1C40)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x15EE23C0)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_C9312916D3A31323_OFFSET UNITYSDK_OFFSET(0x15EE1BF0)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_E8DC972172C77691_OFFSET UNITYSDK_OFFSET(0x15EE1BA0)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x15EE1EB0)
#define CLASS_2_6FA64DA172FF7850_METHOD_2_FF8AB72E6ABB8C7A_OFFSET UNITYSDK_OFFSET(0x15EE1FC0)
#define CLASS_2_6FA64DA172FF7850__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE26A0)
#define CLASS_2_6FA64DA172FF7850__ONBIND_OFFSET UNITYSDK_OFFSET(0x15EE1750)

inline static constexpr unsigned int Class_2_6FA64DA172FF7850_TypeDefinitionIndex = 68334;

class Class_2_6FA64DA172FF7850 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x5; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::Animation* Field_2_3; // 0x60
	::Il2CppArray<::Class_2_4A4A4FC674682470*>* Field_2_4; // 0x68
	::System::Boolean Field_2_5; // 0x70
	::System::Boolean Field_2_6; // 0x71
	::RPG::Client::BattleComboGear Field_2_7; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C9312916D3A31323()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_C9312916D3A31323_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EBDDB8CB2E1257C(::RPG::GameCore::LevelComboChangeEvent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelComboChangeEvent*))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_3EBDDB8CB2E1257C_OFFSET))(this, a1);
	}

	::System::Void Method_2_53FC71A0CDC95BC5(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_53FC71A0CDC95BC5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FF8AB72E6ABB8C7A(::RPG::Client::BattleComboGear a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleComboGear))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_FF8AB72E6ABB8C7A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_E8DC972172C77691(::RPG::Client::BattleComboGear a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::BattleComboGear))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_E8DC972172C77691_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA64DA172FF7850_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
