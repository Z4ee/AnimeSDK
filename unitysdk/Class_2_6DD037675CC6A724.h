#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_460;
class Class_1_1C30CE192ABE4C54;
class Class_1_7AB88D713F5121B3_49;
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

#define CLASS_2_6DD037675CC6A724_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1891C4B0)
#define CLASS_2_6DD037675CC6A724_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1891D190)
#define CLASS_2_6DD037675CC6A724_GET_ISASSISTPLAYER_OFFSET UNITYSDK_OFFSET(0x1891D2D0)
#define CLASS_2_6DD037675CC6A724_GET_MULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1891D2F0)
#define CLASS_2_6DD037675CC6A724_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1891D480)
#define CLASS_2_6DD037675CC6A724_GET_SKINID_OFFSET UNITYSDK_OFFSET(0x1891D310)
#define CLASS_2_6DD037675CC6A724_GET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x1891D3A0)
#define CLASS_2_6DD037675CC6A724_METHOD_2_0A8E5BC1A94628D2_OFFSET UNITYSDK_OFFSET(0x1891C5D0)
#define CLASS_2_6DD037675CC6A724_METHOD_2_0B7DBFF99E44C186_OFFSET UNITYSDK_OFFSET(0x1891C120)
#define CLASS_2_6DD037675CC6A724_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1891D270)
#define CLASS_2_6DD037675CC6A724_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1891D210)
#define CLASS_2_6DD037675CC6A724_METHOD_2_20B88645258E9357_OFFSET UNITYSDK_OFFSET(0x1891D3C0)
#define CLASS_2_6DD037675CC6A724_METHOD_2_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x1891D330)
#define CLASS_2_6DD037675CC6A724_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x1891CE50)
#define CLASS_2_6DD037675CC6A724_METHOD_2_40A5DADED4224708_OFFSET UNITYSDK_OFFSET(0x1891CAA0)
#define CLASS_2_6DD037675CC6A724_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x1891D4A0)
#define CLASS_2_6DD037675CC6A724_METHOD_2_5D0387964FCFFB35_OFFSET UNITYSDK_OFFSET(0x1891D100)
#define CLASS_2_6DD037675CC6A724_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x1891C500)
#define CLASS_2_6DD037675CC6A724_METHOD_2_9C91BF7466D5AA9A_OFFSET UNITYSDK_OFFSET(0x1891CA60)
#define CLASS_2_6DD037675CC6A724_METHOD_2_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0x1891CAF0)
#define CLASS_2_6DD037675CC6A724_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1891D1C0)
#define CLASS_2_6DD037675CC6A724_METHOD_2_C2E159EEB0AF3727_OFFSET UNITYSDK_OFFSET(0x1891BA50)
#define CLASS_2_6DD037675CC6A724_METHOD_2_DFF62828E77D9066_OFFSET UNITYSDK_OFFSET(0x1891CF20)
#define CLASS_2_6DD037675CC6A724_METHOD_2_E14215CF931F6112_OFFSET UNITYSDK_OFFSET(0x1891D050)
#define CLASS_2_6DD037675CC6A724_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1891D1B0)
#define CLASS_2_6DD037675CC6A724_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1891D1A0)
#define CLASS_2_6DD037675CC6A724_SET_ISASSISTPLAYER_OFFSET UNITYSDK_OFFSET(0x1891D2E0)
#define CLASS_2_6DD037675CC6A724_SET_MULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1891D300)
#define CLASS_2_6DD037675CC6A724_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1891D490)
#define CLASS_2_6DD037675CC6A724_SET_SKINID_OFFSET UNITYSDK_OFFSET(0x1891D320)
#define CLASS_2_6DD037675CC6A724_SET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x1891D3B0)
#define CLASS_2_6DD037675CC6A724__CTOR_OFFSET UNITYSDK_OFFSET(0x1891D540)

inline static constexpr unsigned int Class_2_6DD037675CC6A724_TypeDefinitionIndex = 57801;

class Class_2_6DD037675CC6A724 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::IAdventurePlayerCommonRowWrap* FHLJLHBJEMB; // 0x18
	::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_49*>* APHNHHEDNCO; // 0x20
	::RPG::GameCore::AvatarUltraSkillConfigRow* _UltraSkillConfig_k__BackingField; // 0x28
	::RPG::GameCore::SpecialAvatarRow* CAPGLMAKHKJ; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarSkillRow*>* APEOPPEOHPJ; // 0x38
	::RPG::GameCore::IAvatarCommonRowWrap* EDNFMPELNBG; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* CBCCHEHFJFL; // 0x48
	::Enum_3_DFCB42601400F441 _MultiPathAvatarType_k__BackingField; // 0x50
	::System::Boolean _IsAssistPlayer_k__BackingField; // 0x54
	::System::UInt32 _SkinID_k__BackingField; // 0x58
	::System::UInt32 _Rank_k__BackingField; // 0x5C
	::Enum_3_01618AD0437C8486 _AvatarType_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C2E159EEB0AF3727(::System::UInt32 a1, ::System::UInt32 a2, ::Enum_3_01618AD0437C8486 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_C2E159EEB0AF3727_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0A8E5BC1A94628D2(::RPG::GameCore::AdventureAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_0A8E5BC1A94628D2_OFFSET))(this, a1);
	}

	::RPG::GameCore::IAvatarCommonRowWrap* Method_2_9C91BF7466D5AA9A()
	{
		return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_9C91BF7466D5AA9A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* Method_2_DFF62828E77D9066()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_DFF62828E77D9066_OFFSET))(this);
	}

	::System::Void Method_2_A8458C1526636349(::Class_1_1C30CE192ABE4C54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C30CE192ABE4C54*))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_A8458C1526636349_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_5D0387964FCFFB35(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_5D0387964FCFFB35_OFFSET))(this, a1);
	}

	::Enum_3_01618AD0437C8486 get_AvatarType()
	{
		return ((::Enum_3_01618AD0437C8486(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_GET_AVATARTYPE_OFFSET))(this);
	}

	::System::Void set_AvatarType(::Enum_3_01618AD0437C8486 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_SET_AVATARTYPE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean get_IsAssistPlayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_GET_ISASSISTPLAYER_OFFSET))(this);
	}

	::System::Void set_IsAssistPlayer(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_SET_ISASSISTPLAYER_OFFSET))(this, a1);
	}

	::Enum_3_DFCB42601400F441 get_MultiPathAvatarType()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_GET_MULTIPATHAVATARTYPE_OFFSET))(this);
	}

	::System::Void set_MultiPathAvatarType(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_SET_MULTIPATHAVATARTYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_SkinID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_GET_SKINID_OFFSET))(this);
	}

	::System::Void set_SkinID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_SET_SKINID_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_2372762F4122DEB8_OFFSET))(this);
	}

	::RPG::GameCore::AvatarUltraSkillConfigRow* get_UltraSkillConfig()
	{
		return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_GET_ULTRASKILLCONFIG_OFFSET))(this);
	}

	::System::Void set_UltraSkillConfig(::RPG::GameCore::AvatarUltraSkillConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarUltraSkillConfigRow*))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_SET_ULTRASKILLCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarSpecialUltraType Method_2_40A5DADED4224708()
	{
		return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_40A5DADED4224708_OFFSET))(this);
	}

	::RPG::Client::IAvatarSkinData* Method_2_20B88645258E9357()
	{
		return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_20B88645258E9357_OFFSET))(this);
	}

	::System::UInt32 get_Rank()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_GET_RANK_OFFSET))(this);
	}

	::System::Void set_Rank(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_SET_RANK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B7DBFF99E44C186(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_0B7DBFF99E44C186_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarSkillRow* Method_2_E14215CF931F6112(::System::String* a1)
	{
		return ((::RPG::GameCore::AvatarSkillRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6DD037675CC6A724_METHOD_2_E14215CF931F6112_OFFSET))(this, a1);
	}
};
