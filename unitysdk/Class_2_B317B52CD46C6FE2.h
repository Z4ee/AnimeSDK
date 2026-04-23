#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_382;
class Class_1_2CAAA2FDF9170110;
class Class_1_7AB88D713F5121B3_47;
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

#define CLASS_2_B317B52CD46C6FE2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95FB870)
#define CLASS_2_B317B52CD46C6FE2_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x95FC440)
#define CLASS_2_B317B52CD46C6FE2_GET_ISASSISTPLAYER_OFFSET UNITYSDK_OFFSET(0x95FC580)
#define CLASS_2_B317B52CD46C6FE2_GET_MULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x95FC5A0)
#define CLASS_2_B317B52CD46C6FE2_GET_RANK_OFFSET UNITYSDK_OFFSET(0x95FC6F0)
#define CLASS_2_B317B52CD46C6FE2_GET_SKINID_OFFSET UNITYSDK_OFFSET(0x95FC5C0)
#define CLASS_2_B317B52CD46C6FE2_GET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x95FC640)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x95FC1A0)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_09647A0B2E37C5F4_OFFSET UNITYSDK_OFFSET(0x95FB970)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x95FC520)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x95FC4C0)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x95FC5E0)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x95FB8C0)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_40A5DADED4224708_OFFSET UNITYSDK_OFFSET(0x95FBDE0)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_49218DFB30613065_OFFSET UNITYSDK_OFFSET(0x95FB570)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x95FC710)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_5A4377E3AE99E465_OFFSET UNITYSDK_OFFSET(0x95FAF40)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_5D0387964FCFFB35_OFFSET UNITYSDK_OFFSET(0x95FC3A0)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_7F870108AD2A9F7A_OFFSET UNITYSDK_OFFSET(0x95FC660)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_9C91BF7466D5AA9A_OFFSET UNITYSDK_OFFSET(0x95FBDA0)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x95FC470)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_B4D164980F0D1F85_OFFSET UNITYSDK_OFFSET(0x95FC250)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_D754D5F3490FC4F3_OFFSET UNITYSDK_OFFSET(0x95FBE30)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_E14215CF931F6112_OFFSET UNITYSDK_OFFSET(0x95FC2E0)
#define CLASS_2_B317B52CD46C6FE2_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x95FC460)
#define CLASS_2_B317B52CD46C6FE2_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x95FC450)
#define CLASS_2_B317B52CD46C6FE2_SET_ISASSISTPLAYER_OFFSET UNITYSDK_OFFSET(0x95FC590)
#define CLASS_2_B317B52CD46C6FE2_SET_MULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x95FC5B0)
#define CLASS_2_B317B52CD46C6FE2_SET_RANK_OFFSET UNITYSDK_OFFSET(0x95FC700)
#define CLASS_2_B317B52CD46C6FE2_SET_SKINID_OFFSET UNITYSDK_OFFSET(0x95FC5D0)
#define CLASS_2_B317B52CD46C6FE2_SET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x95FC650)
#define CLASS_2_B317B52CD46C6FE2__CTOR_OFFSET UNITYSDK_OFFSET(0x95FC7A0)

inline static constexpr unsigned int Class_2_B317B52CD46C6FE2_TypeDefinitionIndex = 53145;

class Class_2_B317B52CD46C6FE2 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::IAdventurePlayerCommonRowWrap* Field_2_1; // 0x18
	::RPG::GameCore::IAvatarCommonRowWrap* Field_2_7; // 0x20
	::RPG::GameCore::AvatarUltraSkillConfigRow* _UltraSkillConfig_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_10; // 0x30
	::RPG::GameCore::SpecialAvatarRow* Field_2_11; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarSkillRow*>* Field_2_8; // 0x40
	::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_47*>* Field_2_9; // 0x48
	::System::Boolean _IsAssistPlayer_k__BackingField; // 0x50
	::System::UInt32 _SkinID_k__BackingField; // 0x54
	::Enum_3_01618AD0437C8486 _AvatarType_k__BackingField; // 0x58
	::Enum_3_DFCB42601400F441 _MultiPathAvatarType_k__BackingField; // 0x5C
	::System::UInt32 _Rank_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5A4377E3AE99E465(::System::UInt32 a1, ::System::UInt32 a2, ::Enum_3_01618AD0437C8486 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_5A4377E3AE99E465_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_09647A0B2E37C5F4(::RPG::GameCore::AdventureAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_09647A0B2E37C5F4_OFFSET))(this, a1);
	}

	::RPG::GameCore::IAvatarCommonRowWrap* Method_2_9C91BF7466D5AA9A()
	{
		return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_9C91BF7466D5AA9A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* Method_2_B4D164980F0D1F85()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_B4D164980F0D1F85_OFFSET))(this);
	}

	::System::Void Method_2_D754D5F3490FC4F3(::Class_1_2CAAA2FDF9170110* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CAAA2FDF9170110*))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_D754D5F3490FC4F3_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_5D0387964FCFFB35(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_5D0387964FCFFB35_OFFSET))(this, a1);
	}

	::Enum_3_01618AD0437C8486 get_AvatarType()
	{
		return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_GET_AVATARTYPE_OFFSET))(this);
	}

	::System::Void set_AvatarType(::Enum_3_01618AD0437C8486 value)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_SET_AVATARTYPE_OFFSET))(this, value);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean get_IsAssistPlayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_GET_ISASSISTPLAYER_OFFSET))(this);
	}

	::System::Void set_IsAssistPlayer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_SET_ISASSISTPLAYER_OFFSET))(this, value);
	}

	::Enum_3_DFCB42601400F441 get_MultiPathAvatarType()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_GET_MULTIPATHAVATARTYPE_OFFSET))(this);
	}

	::System::Void set_MultiPathAvatarType(::Enum_3_DFCB42601400F441 value)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_SET_MULTIPATHAVATARTYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_SkinID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_GET_SKINID_OFFSET))(this);
	}

	::System::Void set_SkinID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_SET_SKINID_OFFSET))(this, value);
	}

	::System::UInt32 Method_2_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_259B533085E399D3_OFFSET))(this);
	}

	::RPG::GameCore::AvatarUltraSkillConfigRow* get_UltraSkillConfig()
	{
		return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_GET_ULTRASKILLCONFIG_OFFSET))(this);
	}

	::System::Void set_UltraSkillConfig(::RPG::GameCore::AvatarUltraSkillConfigRow* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarUltraSkillConfigRow*))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_SET_ULTRASKILLCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::AvatarSpecialUltraType Method_2_40A5DADED4224708()
	{
		return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_40A5DADED4224708_OFFSET))(this);
	}

	::RPG::Client::IAvatarSkinData* Method_2_7F870108AD2A9F7A()
	{
		return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_7F870108AD2A9F7A_OFFSET))(this);
	}

	::System::UInt32 get_Rank()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_GET_RANK_OFFSET))(this);
	}

	::System::Void set_Rank(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_SET_RANK_OFFSET))(this, value);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_49218DFB30613065(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_49218DFB30613065_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarSkillRow* Method_2_E14215CF931F6112(::System::String* a1)
	{
		return ((::RPG::GameCore::AvatarSkillRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B317B52CD46C6FE2_METHOD_2_E14215CF931F6112_OFFSET))(this, a1);
	}
};
