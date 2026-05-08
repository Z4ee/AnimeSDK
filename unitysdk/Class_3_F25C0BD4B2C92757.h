#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"

class Class_1_1CDA382D823F8E80;
class Class_1_48F4A404A08692BE_25;
class Class_1_8289F2785D9AA990;
namespace MoleMole { class CharacterScriptConfig; }
namespace System { class Action; }

#define CLASS_3_F25C0BD4B2C92757_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xFEF05C0)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_1AB5233FE3B5DA6C_OFFSET UNITYSDK_OFFSET(0xFEF14C0)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_2C1DB3547F0FB9F1_OFFSET UNITYSDK_OFFSET(0xFEF06B0)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xFEF1820)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_A51FC4CED1841A97_OFFSET UNITYSDK_OFFSET(0xFEF1590)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xFEF1510)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_E412C5E2F69931D9_OFFSET UNITYSDK_OFFSET(0xFEF0710)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_FA4B2AA737B8C294_OFFSET UNITYSDK_OFFSET(0xFEF18B0)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_FD50A19FB3096D7C_OFFSET UNITYSDK_OFFSET(0xFEF06A0)
#define CLASS_3_F25C0BD4B2C92757_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xFEF0360)
#define CLASS_3_F25C0BD4B2C92757__CCTOR_OFFSET UNITYSDK_OFFSET(0xFEF0610)
#define CLASS_3_F25C0BD4B2C92757__CTOR_OFFSET UNITYSDK_OFFSET(0xFEF0690)

inline static constexpr unsigned int Class_3_F25C0BD4B2C92757_TypeDefinitionIndex = 72961;

class Class_3_F25C0BD4B2C92757 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_21 = 0x11; // 0x0
	::Class_1_8289F2785D9AA990* Field_3_10; // 0x48
	::Class_1_8289F2785D9AA990* Field_3_18; // 0x50
	::System::Action* Field_3_11; // 0x58
	::Class_1_1CDA382D823F8E80* Field_3_16; // 0x60
	::Class_1_8289F2785D9AA990* Field_3_8; // 0x68
	::Class_1_48F4A404A08692BE_25* Field_3_20; // 0x70
	::System::Action* Field_3_12; // 0x78
	::Class_1_8289F2785D9AA990* Field_3_17; // 0x80
	::System::Single Field_3_3; // 0x88
	::MoleMole::Config::CharacterAliveState Field_3_1; // 0x8C
	::System::Int32 Field_3_7; // 0x90
	::System::Single Field_3_14; // 0x94
	::System::Single Field_3_0; // 0x98
	::System::Boolean Field_3_9; // 0x9C
	::System::Boolean Field_3_19; // 0x9D
	::System::Boolean Field_3_6; // 0x9E
	::System::Boolean Field_3_5; // 0x9F
	::System::Int32 Field_3_4; // 0xA0
	::System::UInt32 Field_3_15; // 0xA4
	::System::Boolean Field_3_2; // 0xA8
	::System::Boolean Field_3_13; // 0xA9

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_GETCLASSID_OFFSET))(this);
	}

	::MoleMole::Config::CharacterAliveState Method_3_FD50A19FB3096D7C()
	{
		return ((::MoleMole::Config::CharacterAliveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_FD50A19FB3096D7C_OFFSET))(this);
	}

	::System::Void Method_3_2C1DB3547F0FB9F1(::MoleMole::Config::CharacterAliveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CharacterAliveState))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_2C1DB3547F0FB9F1_OFFSET))(this, a1);
	}

	::System::Void Method_3_1AB5233FE3B5DA6C(::MoleMole::Config::CharacterAliveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CharacterAliveState))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_1AB5233FE3B5DA6C_OFFSET))(this, a1);
	}

	static ::Class_3_F25C0BD4B2C92757* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F25C0BD4B2C92757*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_A51FC4CED1841A97(::MoleMole::CharacterScriptConfig* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_A51FC4CED1841A97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E412C5E2F69931D9(::MoleMole::Config::CharacterAliveState a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CharacterAliveState, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_E412C5E2F69931D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_3_FA4B2AA737B8C294()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_FA4B2AA737B8C294_OFFSET))(this);
	}
};
