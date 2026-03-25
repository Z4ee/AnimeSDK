#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3F43255EC92B83B.h"

class Class_1_C47576BEFCFAD595;
class Class_1_D94C90B243424267;
class Class_2_9D4DD2F4235F8658;
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::GameCore { class ActivityParkourAIConfigRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_3_2BE5039CEA912003_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116A5240)
#define CLASS_3_2BE5039CEA912003_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x116A59A0)
#define CLASS_3_2BE5039CEA912003_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x116A59B0)
#define CLASS_3_2BE5039CEA912003_METHOD_3_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x116A5B00)
#define CLASS_3_2BE5039CEA912003_METHOD_3_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0x116A53A0)
#define CLASS_3_2BE5039CEA912003_METHOD_3_427177C9E58EA7B1_OFFSET UNITYSDK_OFFSET(0x116A5AF0)
#define CLASS_3_2BE5039CEA912003_METHOD_3_5E93572F9B9C3F30_OFFSET UNITYSDK_OFFSET(0x116A5320)
#define CLASS_3_2BE5039CEA912003_METHOD_3_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x116A5AE0)
#define CLASS_3_2BE5039CEA912003_METHOD_3_85AEF3F54FC78D7A_OFFSET UNITYSDK_OFFSET(0x116A5780)
#define CLASS_3_2BE5039CEA912003_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x116A59C0)
#define CLASS_3_2BE5039CEA912003_METHOD_3_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x116A5A60)
#define CLASS_3_2BE5039CEA912003_METHOD_3_BFAD9E795CFA7062_OFFSET UNITYSDK_OFFSET(0x116A5640)
#define CLASS_3_2BE5039CEA912003_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x116A54C0)
#define CLASS_3_2BE5039CEA912003_METHOD_3_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x116A56B0)
#define CLASS_3_2BE5039CEA912003__CCTOR_OFFSET UNITYSDK_OFFSET(0x116A5A70)
#define CLASS_3_2BE5039CEA912003__CTOR_OFFSET UNITYSDK_OFFSET(0x116A5040)
#define CLASS_3_2BE5039CEA912003___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116A5AD0)

inline static constexpr unsigned int Class_3_2BE5039CEA912003_TypeDefinitionIndex = 60829;

class Class_3_2BE5039CEA912003 : public ::Class_2_F3F43255EC92B83B
{
public:
	static ::System::Int32* StaticGet_Field_3_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2BE5039CEA912003_TypeDefinitionIndex)->GetStaticField(0x10220);
	}
	::Class_2_9D4DD2F4235F8658* Field_3_2; // 0x108
	::Class_1_D94C90B243424267* Field_3_3; // 0x110
	::System::UInt32 _CharacterID_k__BackingField; // 0x118
	::System::Boolean Field_3_1; // 0x11C

	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::ActivityParkourAIConfigRow* a2, ::RPG::Client::ParkourGame::MonoParkourCharacter* a3, ::Class_1_C47576BEFCFAD595* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ActivityParkourAIConfigRow*, ::RPG::Client::ParkourGame::MonoParkourCharacter*, ::Class_1_C47576BEFCFAD595*))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_5E93572F9B9C3F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_5E93572F9B9C3F30_OFFSET))(this);
	}

	::System::Void Method_3_332E8DA02BCCBD12(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_332E8DA02BCCBD12_OFFSET))(this, a1);
	}

	::System::Void Method_3_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_3_BFAD9E795CFA7062(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_BFAD9E795CFA7062_OFFSET))(this, a1);
	}

	::System::Void Method_3_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_85AEF3F54FC78D7A(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_85AEF3F54FC78D7A_OFFSET))(this, a1);
	}

	::System::UInt32 get_CharacterID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_GET_CHARACTERID_OFFSET))(this);
	}

	::Class_1_D94C90B243424267* Method_3_24748FC20F375725()
	{
		return ((::Class_1_D94C90B243424267*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_3_427177C9E58EA7B1(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_427177C9E58EA7B1_OFFSET))(this, P0);
	}

	::System::Void Method_3_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_25DEA5C65A602671_OFFSET))(this);
	}
};
