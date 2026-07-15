#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3F43255EC92B83B.h"

class Class_1_C42EE16F2550E26E;
class Class_1_C47576BEFCFAD595;
class Class_2_21055A9FA74B791E;
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::GameCore { class ActivityParkourAIConfigRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_3_2BE5039CEA912003_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4F63C0)
#define CLASS_3_2BE5039CEA912003_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xE4F6B70)
#define CLASS_3_2BE5039CEA912003_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xE4F6B80)
#define CLASS_3_2BE5039CEA912003_METHOD_3_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0xE4F6570)
#define CLASS_3_2BE5039CEA912003_METHOD_3_79734A163132F053_OFFSET UNITYSDK_OFFSET(0xE4F6810)
#define CLASS_3_2BE5039CEA912003_METHOD_3_85AEF3F54FC78D7A_OFFSET UNITYSDK_OFFSET(0xE4F6950)
#define CLASS_3_2BE5039CEA912003_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xE4F6B90)
#define CLASS_3_2BE5039CEA912003_METHOD_3_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xE4F6C30)
#define CLASS_3_2BE5039CEA912003_METHOD_3_B24D6784786E080C_OFFSET UNITYSDK_OFFSET(0xE4F68E0)
#define CLASS_3_2BE5039CEA912003_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xE4F6690)
#define CLASS_3_2BE5039CEA912003_METHOD_3_E0ED2B966ABEBEA6_OFFSET UNITYSDK_OFFSET(0xE4F64A0)
#define CLASS_3_2BE5039CEA912003__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4F6C40)
#define CLASS_3_2BE5039CEA912003__CTOR_OFFSET UNITYSDK_OFFSET(0xE4F61C0)

inline static constexpr unsigned int Class_3_2BE5039CEA912003_TypeDefinitionIndex = 70773;

class Class_3_2BE5039CEA912003 : public ::Class_2_F3F43255EC92B83B
{
public:
	static ::System::Int32* StaticGet_Field_3_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2BE5039CEA912003_TypeDefinitionIndex)->GetStaticField(0x14390);
	}
	::Class_1_C42EE16F2550E26E* Field_3_1; // 0x108
	::Class_2_21055A9FA74B791E* Field_3_2; // 0x110
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

	::System::Void Method_3_B24D6784786E080C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2BE5039CEA912003_METHOD_3_B24D6784786E080C_OFFSET))(this, a1);
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
};
