#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3F43255EC92B83B.h"

class Class_1_C42EE16F2550E26E;
class Class_1_C47576BEFCFAD595;
class Class_2_9D4DD2F4235F8658;
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::GameCore { class ActivityParkourAIConfigRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_3_2BE5039CEA912003_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE497F40)
#define CLASS_3_2BE5039CEA912003_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xE498750)
#define CLASS_3_2BE5039CEA912003_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xE498760)
#define CLASS_3_2BE5039CEA912003_METHOD_3_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xE498890)
#define CLASS_3_2BE5039CEA912003_METHOD_3_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0xE4980F0)
#define CLASS_3_2BE5039CEA912003_METHOD_3_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xE498870)
#define CLASS_3_2BE5039CEA912003_METHOD_3_79734A163132F053_OFFSET UNITYSDK_OFFSET(0xE498390)
#define CLASS_3_2BE5039CEA912003_METHOD_3_85AEF3F54FC78D7A_OFFSET UNITYSDK_OFFSET(0xE498530)
#define CLASS_3_2BE5039CEA912003_METHOD_3_8D595942D57F40CD_OFFSET UNITYSDK_OFFSET(0xE498880)
#define CLASS_3_2BE5039CEA912003_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xE498770)
#define CLASS_3_2BE5039CEA912003_METHOD_3_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xE498810)
#define CLASS_3_2BE5039CEA912003_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xE498210)
#define CLASS_3_2BE5039CEA912003_METHOD_3_E0ED2B966ABEBEA6_OFFSET UNITYSDK_OFFSET(0xE498020)
#define CLASS_3_2BE5039CEA912003_METHOD_3_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xE498460)
#define CLASS_3_2BE5039CEA912003__CCTOR_OFFSET UNITYSDK_OFFSET(0xE498820)
#define CLASS_3_2BE5039CEA912003__CTOR_OFFSET UNITYSDK_OFFSET(0xE497D40)
#define CLASS_3_2BE5039CEA912003___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE498860)

inline static constexpr unsigned int Class_3_2BE5039CEA912003_TypeDefinitionIndex = 69252;

class Class_3_2BE5039CEA912003 : public ::Class_2_F3F43255EC92B83B
{
public:
	static ::System::Int32* StaticGet_Field_3_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2BE5039CEA912003_TypeDefinitionIndex)->GetStaticField(0x14310);
	}
	::Class_1_C42EE16F2550E26E* Field_3_1; // 0x108
	::Class_2_9D4DD2F4235F8658* Field_3_2; // 0x110
	::System::UInt32 _CharacterID_k__BackingField; // 0x118
	::System::Boolean Field_3_4; // 0x11C

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

	::System::Void Method_3_E0ED2B966ABEBEA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_E0ED2B966ABEBEA6_OFFSET))(this);
	}

	::System::Void Method_3_332E8DA02BCCBD12(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_332E8DA02BCCBD12_OFFSET))(this, a1);
	}

	::System::Void Method_3_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_3_79734A163132F053(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_79734A163132F053_OFFSET))(this, a1);
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

	::Class_1_C42EE16F2550E26E* Method_3_24748FC20F375725()
	{
		return ((::Class_1_C42EE16F2550E26E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_24748FC20F375725_OFFSET))(this);
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

	::System::Void Method_3_8D595942D57F40CD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_8D595942D57F40CD_OFFSET))(this, a1);
	}

	::System::Void Method_3_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_25DEA5C65A602671_OFFSET))(this);
	}
};
