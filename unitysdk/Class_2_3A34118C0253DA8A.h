#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_375;
class Class_1_2CAAA2FDF9170110;
class Class_1_7AB88D713F5121B3_38;
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3A34118C0253DA8A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11610080)
#define CLASS_2_3A34118C0253DA8A_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x11610C50)
#define CLASS_2_3A34118C0253DA8A_GET_ISASSISTPLAYER_OFFSET UNITYSDK_OFFSET(0x11610D90)
#define CLASS_2_3A34118C0253DA8A_GET_MULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x11610DB0)
#define CLASS_2_3A34118C0253DA8A_GET_RANK_OFFSET UNITYSDK_OFFSET(0x11610F00)
#define CLASS_2_3A34118C0253DA8A_GET_SKINID_OFFSET UNITYSDK_OFFSET(0x11610DD0)
#define CLASS_2_3A34118C0253DA8A_GET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x11610E50)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x116109B0)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_09647A0B2E37C5F4_OFFSET UNITYSDK_OFFSET(0x11610180)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x11610D30)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11610CD0)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x11610DF0)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x116100D0)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_40A5DADED4224708_OFFSET UNITYSDK_OFFSET(0x116105F0)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_49218DFB30613065_OFFSET UNITYSDK_OFFSET(0x1160FD80)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x11610F20)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_5D0387964FCFFB35_OFFSET UNITYSDK_OFFSET(0x11610BB0)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_7F870108AD2A9F7A_OFFSET UNITYSDK_OFFSET(0x11610E70)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_9C91BF7466D5AA9A_OFFSET UNITYSDK_OFFSET(0x116105B0)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_A1CFB70150CC7929_OFFSET UNITYSDK_OFFSET(0x1160F800)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x11610C80)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_B4D164980F0D1F85_OFFSET UNITYSDK_OFFSET(0x11610A60)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_D754D5F3490FC4F3_OFFSET UNITYSDK_OFFSET(0x11610640)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_E14215CF931F6112_OFFSET UNITYSDK_OFFSET(0x11610AF0)
#define CLASS_2_3A34118C0253DA8A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11610C70)
#define CLASS_2_3A34118C0253DA8A_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x11610C60)
#define CLASS_2_3A34118C0253DA8A_SET_ISASSISTPLAYER_OFFSET UNITYSDK_OFFSET(0x11610DA0)
#define CLASS_2_3A34118C0253DA8A_SET_MULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x11610DC0)
#define CLASS_2_3A34118C0253DA8A_SET_RANK_OFFSET UNITYSDK_OFFSET(0x11610F10)
#define CLASS_2_3A34118C0253DA8A_SET_SKINID_OFFSET UNITYSDK_OFFSET(0x11610DE0)
#define CLASS_2_3A34118C0253DA8A_SET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x11610E60)
#define CLASS_2_3A34118C0253DA8A__CTOR_OFFSET UNITYSDK_OFFSET(0x11610FB0)

inline static constexpr unsigned int Class_2_3A34118C0253DA8A_TypeDefinitionIndex = 46457;

class Class_2_3A34118C0253DA8A : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::AvatarUltraSkillConfigRow* _UltraSkillConfig_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarSkillRow*>* Field_2_8; // 0x20
	::RPG::GameCore::IAvatarCommonRowWrap* Field_2_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_10; // 0x30
	::RPG::GameCore::IAdventurePlayerCommonRowWrap* Field_2_1; // 0x38
	::RPG::GameCore::SpecialAvatarRow* Field_2_11; // 0x40
	::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_38*>* Field_2_9; // 0x48
	::System::Boolean _IsAssistPlayer_k__BackingField; // 0x50
	::Enum_3_A35B38E5F9115A76 _AvatarType_k__BackingField; // 0x54
	::System::UInt32 _Rank_k__BackingField; // 0x58
	::System::UInt32 _SkinID_k__BackingField; // 0x5C
	::Enum_3_DFCB42601400F441 _MultiPathAvatarType_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A1CFB70150CC7929(::System::UInt32 a1, ::System::UInt32 a2, ::Enum_3_A35B38E5F9115A76 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Enum_3_A35B38E5F9115A76))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_A1CFB70150CC7929_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_09647A0B2E37C5F4(::RPG::GameCore::AdventureAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_09647A0B2E37C5F4_OFFSET))(this, a1);
	}

	::RPG::GameCore::IAvatarCommonRowWrap* Method_2_9C91BF7466D5AA9A()
	{
		return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_9C91BF7466D5AA9A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* Method_2_B4D164980F0D1F85()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_B4D164980F0D1F85_OFFSET))(this);
	}

	::System::Void Method_2_D754D5F3490FC4F3(::Class_1_2CAAA2FDF9170110* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CAAA2FDF9170110*))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_D754D5F3490FC4F3_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_5D0387964FCFFB35(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_5D0387964FCFFB35_OFFSET))(this, a1);
	}

	::Enum_3_A35B38E5F9115A76 get_AvatarType()
	{
		return ((::Enum_3_A35B38E5F9115A76(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_GET_AVATARTYPE_OFFSET))(this);
	}

	::System::Void set_AvatarType(::Enum_3_A35B38E5F9115A76 value)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_SET_AVATARTYPE_OFFSET))(this, value);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean get_IsAssistPlayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_GET_ISASSISTPLAYER_OFFSET))(this);
	}

	::System::Void set_IsAssistPlayer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_SET_ISASSISTPLAYER_OFFSET))(this, value);
	}

	::Enum_3_DFCB42601400F441 get_MultiPathAvatarType()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_GET_MULTIPATHAVATARTYPE_OFFSET))(this);
	}

	::System::Void set_MultiPathAvatarType(::Enum_3_DFCB42601400F441 value)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_SET_MULTIPATHAVATARTYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_SkinID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_GET_SKINID_OFFSET))(this);
	}

	::System::Void set_SkinID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_SET_SKINID_OFFSET))(this, value);
	}

	::System::UInt32 Method_2_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_259B533085E399D3_OFFSET))(this);
	}

	::RPG::GameCore::AvatarUltraSkillConfigRow* get_UltraSkillConfig()
	{
		return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_GET_ULTRASKILLCONFIG_OFFSET))(this);
	}

	::System::Void set_UltraSkillConfig(::RPG::GameCore::AvatarUltraSkillConfigRow* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarUltraSkillConfigRow*))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_SET_ULTRASKILLCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::AvatarSpecialUltraType Method_2_40A5DADED4224708()
	{
		return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_40A5DADED4224708_OFFSET))(this);
	}

	::RPG::Client::IAvatarSkinData* Method_2_7F870108AD2A9F7A()
	{
		return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_7F870108AD2A9F7A_OFFSET))(this);
	}

	::System::UInt32 get_Rank()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_GET_RANK_OFFSET))(this);
	}

	::System::Void set_Rank(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_SET_RANK_OFFSET))(this, value);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_49218DFB30613065(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_49218DFB30613065_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarSkillRow* Method_2_E14215CF931F6112(::System::String* a1)
	{
		return ((::RPG::GameCore::AvatarSkillRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3A34118C0253DA8A_METHOD_2_E14215CF931F6112_OFFSET))(this, a1);
	}
};
