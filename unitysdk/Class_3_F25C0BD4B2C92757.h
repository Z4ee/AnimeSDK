#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"

class Class_1_1CDA382D823F8E80;
class Class_1_48F4A404A08692BE_185;
class Class_1_8289F2785D9AA990;
namespace MoleMole { class CharacterScriptConfig; }
namespace System { class Action; }

#define CLASS_3_F25C0BD4B2C92757_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x19E05030)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_1AB5233FE3B5DA6C_OFFSET UNITYSDK_OFFSET(0x19E05300)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_2C1DB3547F0FB9F1_OFFSET UNITYSDK_OFFSET(0x19E05350)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x19E05260)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_A51FC4CED1841A97_OFFSET UNITYSDK_OFFSET(0x19E06150)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x19E05110)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_E412C5E2F69931D9_OFFSET UNITYSDK_OFFSET(0x19E053B0)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_FA4B2AA737B8C294_OFFSET UNITYSDK_OFFSET(0x19E05190)
#define CLASS_3_F25C0BD4B2C92757_METHOD_3_FD50A19FB3096D7C_OFFSET UNITYSDK_OFFSET(0x19E052F0)
#define CLASS_3_F25C0BD4B2C92757_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x19E04DE0)
#define CLASS_3_F25C0BD4B2C92757__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E05080)
#define CLASS_3_F25C0BD4B2C92757__CTOR_OFFSET UNITYSDK_OFFSET(0x19E05100)

inline static constexpr unsigned int Class_3_F25C0BD4B2C92757_TypeDefinitionIndex = 49086;

class Class_3_F25C0BD4B2C92757 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_21 = 0x13; // 0x0
	::Class_1_1CDA382D823F8E80* Field_3_16; // 0x48
	::Class_1_8289F2785D9AA990* Field_3_17; // 0x50
	::System::Action* Field_3_11; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_18; // 0x60
	::Class_1_8289F2785D9AA990* Field_3_8; // 0x68
	::Class_1_48F4A404A08692BE_185* Field_3_20; // 0x70
	::Class_1_8289F2785D9AA990* Field_3_10; // 0x78
	::System::Action* Field_3_12; // 0x80
	::System::Int32 Field_3_7; // 0x88
	::System::Single Field_3_3; // 0x8C
	::System::Int32 Field_3_4; // 0x90
	::System::Single Field_3_0; // 0x94
	::System::Boolean Field_3_6; // 0x98
	::System::Boolean Field_3_5; // 0x99
	::System::Boolean Field_3_13; // 0x9A
	::System::Boolean Field_3_9; // 0x9B
	::MoleMole::Config::CharacterAliveState Field_3_1; // 0x9C
	::System::Single Field_3_14; // 0xA0
	::System::Boolean Field_3_2; // 0xA4
	::System::Boolean Field_3_19; // 0xA5
	::System::UInt32 Field_3_15; // 0xA8

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

	static ::Class_3_F25C0BD4B2C92757* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F25C0BD4B2C92757*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Single Method_3_FA4B2AA737B8C294()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_FA4B2AA737B8C294_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::Config::CharacterAliveState Method_3_FD50A19FB3096D7C()
	{
		return ((::MoleMole::Config::CharacterAliveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_FD50A19FB3096D7C_OFFSET))(this);
	}

	::System::Void Method_3_1AB5233FE3B5DA6C(::MoleMole::Config::CharacterAliveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CharacterAliveState))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_1AB5233FE3B5DA6C_OFFSET))(this, a1);
	}

	::System::Void Method_3_2C1DB3547F0FB9F1(::MoleMole::Config::CharacterAliveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CharacterAliveState))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_2C1DB3547F0FB9F1_OFFSET))(this, a1);
	}

	::System::Void Method_3_E412C5E2F69931D9(::MoleMole::Config::CharacterAliveState a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CharacterAliveState, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_E412C5E2F69931D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A51FC4CED1841A97(::MoleMole::CharacterScriptConfig* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F25C0BD4B2C92757_METHOD_3_A51FC4CED1841A97_OFFSET))(this, a1, a2);
	}
};
