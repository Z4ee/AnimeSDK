#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class AkCallbackInfo;
class Class_0_16E4307DCC419505_460;
namespace RPG::Client { class GameObjectAudio; }
namespace RPG::GameCore { class AutoFightVORow; }
namespace RPG::GameCore { class AvatarVORow; }
namespace RPG::GameCore { class GridFightRoleOverrideVOConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C33B4E1136A08D50_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155F1F30)
#define CLASS_2_C33B4E1136A08D50_GET_HEALTHLOWPLAYED_OFFSET UNITYSDK_OFFSET(0x155F3E00)
#define CLASS_2_C33B4E1136A08D50_GET_SKILLREADYPLAYED_OFFSET UNITYSDK_OFFSET(0x155F3DE0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_0031B2A6B176A873_OFFSET UNITYSDK_OFFSET(0x155F3D20)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x155F3450)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_1485D2E561262682_OFFSET UNITYSDK_OFFSET(0x155F33D0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_24CFA0BD01CD3E33_OFFSET UNITYSDK_OFFSET(0x155F2730)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_4A3FC5B2985E26C8_OFFSET UNITYSDK_OFFSET(0x155F3780)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_6D50DE64A8D3B5FE_OFFSET UNITYSDK_OFFSET(0x155F2EB0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_6FA91C84727B1F32_OFFSET UNITYSDK_OFFSET(0x155F2B20)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_799DACEAB56FE8EF_OFFSET UNITYSDK_OFFSET(0x155F38D0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x155F31A0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_96C88D5424560008_OFFSET UNITYSDK_OFFSET(0x155F3B90)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x155F2170)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_9B3E928DD44EEB3D_OFFSET UNITYSDK_OFFSET(0x155F2490)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_AE9C00908C91A033_OFFSET UNITYSDK_OFFSET(0x155F2CA0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_E64359669D8372F3_OFFSET UNITYSDK_OFFSET(0x155F3660)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_EAA92E508F834FB8_OFFSET UNITYSDK_OFFSET(0x155F39F0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0x155F34E0)
#define CLASS_2_C33B4E1136A08D50_SET_HEALTHLOWPLAYED_OFFSET UNITYSDK_OFFSET(0x155F3E10)
#define CLASS_2_C33B4E1136A08D50_SET_SKILLREADYPLAYED_OFFSET UNITYSDK_OFFSET(0x155F3DF0)
#define CLASS_2_C33B4E1136A08D50__CTOR_OFFSET UNITYSDK_OFFSET(0x155F3E20)

inline static constexpr unsigned int Class_2_C33B4E1136A08D50_TypeDefinitionIndex = 57378;

class Class_2_C33B4E1136A08D50 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GridFightRoleOverrideVOConfigRow* BAAGDACPBMA; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::CharacterVOType>* MJBNOCHEHAB; // 0x20
	::System::String* LPODEFCCFML; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CharacterVOType>* NOBJJHNNIJE; // 0x30
	::System::String* LCFFGNLFLKJ; // 0x38
	::RPG::Client::GameObjectAudio* IBPBIPPHKGI; // 0x40
	::System::Boolean _SkillReadyPlayed_k__BackingField; // 0x48
	::System::Boolean _HealthLowPlayed_k__BackingField; // 0x49
	::System::Boolean OHDLLIAELPD; // 0x4A
	::System::UInt32 JHADDIAJCPJ; // 0x4C
	::System::UInt32 CMKFGPGPOGH; // 0x50
	::RPG::GameCore::CharacterVOType IMMJEEBEADG; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_9B3E928DD44EEB3D(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_9B3E928DD44EEB3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE9C00908C91A033(::Il2CppArray<::RPG::GameCore::CharacterVOType>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CharacterVOType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_AE9C00908C91A033_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6D50DE64A8D3B5FE(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_6D50DE64A8D3B5FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDB0D8DA4A269034(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_EDB0D8DA4A269034_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_24CFA0BD01CD3E33(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_24CFA0BD01CD3E33_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4A3FC5B2985E26C8(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_4A3FC5B2985E26C8_OFFSET))(this, a1);
	}

	::System::String* Method_2_6FA91C84727B1F32(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_6FA91C84727B1F32_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_8F059A365E90744C_OFFSET))(this);
	}

	::System::Boolean Method_2_1485D2E561262682()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_1485D2E561262682_OFFSET))(this);
	}

	::System::UInt32 Method_2_799DACEAB56FE8EF(::RPG::GameCore::AvatarVORow* a1, ::RPG::GameCore::CharacterVOType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarVORow*, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_799DACEAB56FE8EF_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_E64359669D8372F3(::RPG::GameCore::AutoFightVORow* a1, ::RPG::GameCore::CharacterVOType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AutoFightVORow*, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_E64359669D8372F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EAA92E508F834FB8(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_EAA92E508F834FB8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_96C88D5424560008(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_96C88D5424560008_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0031B2A6B176A873(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_0031B2A6B176A873_OFFSET))(this, a1);
	}

	::System::Boolean get_SkillReadyPlayed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_GET_SKILLREADYPLAYED_OFFSET))(this);
	}

	::System::Void set_SkillReadyPlayed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_SET_SKILLREADYPLAYED_OFFSET))(this, a1);
	}

	::System::Boolean get_HealthLowPlayed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_GET_HEALTHLOWPLAYED_OFFSET))(this);
	}

	::System::Void set_HealthLowPlayed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_SET_HEALTHLOWPLAYED_OFFSET))(this, a1);
	}
};
