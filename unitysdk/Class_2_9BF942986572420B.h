#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class AkCallbackInfo;
class Class_0_16E4307DCC419505_375;
namespace RPG::Client { class GameObjectAudio; }
namespace RPG::GameCore { class AutoFightVORow; }
namespace RPG::GameCore { class AvatarVORow; }
namespace RPG::GameCore { class GridFightRoleOverrideVOConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_9BF942986572420B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B89760)
#define CLASS_2_9BF942986572420B_GET_HEALTHLOWPLAYED_OFFSET UNITYSDK_OFFSET(0x10B8B240)
#define CLASS_2_9BF942986572420B_GET_SKILLREADYPLAYED_OFFSET UNITYSDK_OFFSET(0x10B8B220)
#define CLASS_2_9BF942986572420B_METHOD_2_03A756C1E337B103_OFFSET UNITYSDK_OFFSET(0x10B8B190)
#define CLASS_2_9BF942986572420B_METHOD_2_1DB1CBD202875DBB_OFFSET UNITYSDK_OFFSET(0x10B8A2C0)
#define CLASS_2_9BF942986572420B_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x10B89980)
#define CLASS_2_9BF942986572420B_METHOD_2_2B63DE2921807645_OFFSET UNITYSDK_OFFSET(0x10B8A3D0)
#define CLASS_2_9BF942986572420B_METHOD_2_3252C72430690445_OFFSET UNITYSDK_OFFSET(0x10B8A890)
#define CLASS_2_9BF942986572420B_METHOD_2_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x10B8A680)
#define CLASS_2_9BF942986572420B_METHOD_2_4810D8613150D7C1_OFFSET UNITYSDK_OFFSET(0x10B89E90)
#define CLASS_2_9BF942986572420B_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x10B8A910)
#define CLASS_2_9BF942986572420B_METHOD_2_799DACEAB56FE8EF_OFFSET UNITYSDK_OFFSET(0x10B8AD20)
#define CLASS_2_9BF942986572420B_METHOD_2_96C88D5424560008_OFFSET UNITYSDK_OFFSET(0x10B8B000)
#define CLASS_2_9BF942986572420B_METHOD_2_9B3E928DD44EEB3D_OFFSET UNITYSDK_OFFSET(0x10B89C00)
#define CLASS_2_9BF942986572420B_METHOD_2_9D0BCB90135AF1F1_OFFSET UNITYSDK_OFFSET(0x10B8AC40)
#define CLASS_2_9BF942986572420B_METHOD_2_E64359669D8372F3_OFFSET UNITYSDK_OFFSET(0x10B8AB20)
#define CLASS_2_9BF942986572420B_METHOD_2_EAA92E508F834FB8_OFFSET UNITYSDK_OFFSET(0x10B8AE40)
#define CLASS_2_9BF942986572420B_METHOD_2_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0x10B8A9A0)
#define CLASS_2_9BF942986572420B_SET_HEALTHLOWPLAYED_OFFSET UNITYSDK_OFFSET(0x10B8B250)
#define CLASS_2_9BF942986572420B_SET_SKILLREADYPLAYED_OFFSET UNITYSDK_OFFSET(0x10B8B230)
#define CLASS_2_9BF942986572420B__CTOR_OFFSET UNITYSDK_OFFSET(0x10B8B260)

inline static constexpr unsigned int Class_2_9BF942986572420B_TypeDefinitionIndex = 46071;

class Class_2_9BF942986572420B : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GridFightRoleOverrideVOConfigRow* Field_2_10; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CharacterVOType>* Field_2_6; // 0x20
	::System::String* Field_2_9; // 0x28
	::System::String* Field_2_2; // 0x30
	::RPG::Client::GameObjectAudio* Field_2_5; // 0x38
	::System::UInt32 Field_2_4; // 0x40
	::System::Boolean _SkillReadyPlayed_k__BackingField; // 0x44
	::System::Boolean Field_2_3; // 0x45
	::System::Boolean _HealthLowPlayed_k__BackingField; // 0x46
	::RPG::GameCore::CharacterVOType Field_2_8; // 0x48
	::System::UInt32 Field_2_7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_9B3E928DD44EEB3D(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_9B3E928DD44EEB3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B63DE2921807645(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_2B63DE2921807645_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDB0D8DA4A269034(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_EDB0D8DA4A269034_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4810D8613150D7C1(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_4810D8613150D7C1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9D0BCB90135AF1F1(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_9D0BCB90135AF1F1_OFFSET))(this, a1);
	}

	::System::String* Method_2_1DB1CBD202875DBB(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_1DB1CBD202875DBB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_39D78A8EB32A5315_OFFSET))(this);
	}

	::System::Boolean Method_2_3252C72430690445()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_3252C72430690445_OFFSET))(this);
	}

	::System::UInt32 Method_2_799DACEAB56FE8EF(::RPG::GameCore::AvatarVORow* a1, ::RPG::GameCore::CharacterVOType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarVORow*, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_799DACEAB56FE8EF_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_E64359669D8372F3(::RPG::GameCore::AutoFightVORow* a1, ::RPG::GameCore::CharacterVOType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AutoFightVORow*, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_E64359669D8372F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EAA92E508F834FB8(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_EAA92E508F834FB8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_96C88D5424560008(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_96C88D5424560008_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_03A756C1E337B103(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_METHOD_2_03A756C1E337B103_OFFSET))(this, a1);
	}

	::System::Boolean get_SkillReadyPlayed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_GET_SKILLREADYPLAYED_OFFSET))(this);
	}

	::System::Void set_SkillReadyPlayed(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_SET_SKILLREADYPLAYED_OFFSET))(this, value);
	}

	::System::Boolean get_HealthLowPlayed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_GET_HEALTHLOWPLAYED_OFFSET))(this);
	}

	::System::Void set_HealthLowPlayed(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9BF942986572420B_SET_HEALTHLOWPLAYED_OFFSET))(this, value);
	}
};
