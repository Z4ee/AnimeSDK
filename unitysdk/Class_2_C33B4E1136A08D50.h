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

#define CLASS_2_C33B4E1136A08D50_DISPOSE_OFFSET UNITYSDK_OFFSET(0x190FC2C0)
#define CLASS_2_C33B4E1136A08D50_GET_HEALTHLOWPLAYED_OFFSET UNITYSDK_OFFSET(0x190FE1A0)
#define CLASS_2_C33B4E1136A08D50_GET_SKILLREADYPLAYED_OFFSET UNITYSDK_OFFSET(0x190FE180)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_0031B2A6B176A873_OFFSET UNITYSDK_OFFSET(0x190FE0C0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x190FD7F0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_1485D2E561262682_OFFSET UNITYSDK_OFFSET(0x190FD770)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_24CFA0BD01CD3E33_OFFSET UNITYSDK_OFFSET(0x190FCAC0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_4A3FC5B2985E26C8_OFFSET UNITYSDK_OFFSET(0x190FDB20)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_6D50DE64A8D3B5FE_OFFSET UNITYSDK_OFFSET(0x190FD240)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_6FA91C84727B1F32_OFFSET UNITYSDK_OFFSET(0x190FCEB0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_799DACEAB56FE8EF_OFFSET UNITYSDK_OFFSET(0x190FDC70)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x190FD540)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_96C88D5424560008_OFFSET UNITYSDK_OFFSET(0x190FDF30)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x190FC500)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_9B3E928DD44EEB3D_OFFSET UNITYSDK_OFFSET(0x190FC820)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_AE9C00908C91A033_OFFSET UNITYSDK_OFFSET(0x190FD030)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_E64359669D8372F3_OFFSET UNITYSDK_OFFSET(0x190FDA00)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_EAA92E508F834FB8_OFFSET UNITYSDK_OFFSET(0x190FDD90)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0x190FD880)
#define CLASS_2_C33B4E1136A08D50_SET_HEALTHLOWPLAYED_OFFSET UNITYSDK_OFFSET(0x190FE1B0)
#define CLASS_2_C33B4E1136A08D50_SET_SKILLREADYPLAYED_OFFSET UNITYSDK_OFFSET(0x190FE190)
#define CLASS_2_C33B4E1136A08D50__CTOR_OFFSET UNITYSDK_OFFSET(0x190FE1C0)

inline static constexpr unsigned int Class_2_C33B4E1136A08D50_TypeDefinitionIndex = 57378;

class Class_2_C33B4E1136A08D50 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GridFightRoleOverrideVOConfigRow* BAAGDACPBMA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CharacterVOType>* NOBJJHNNIJE; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::CharacterVOType>* MJBNOCHEHAB; // 0x28
	::System::String* LCFFGNLFLKJ; // 0x30
	::RPG::Client::GameObjectAudio* IBPBIPPHKGI; // 0x38
	::System::String* LPODEFCCFML; // 0x40
	::System::UInt32 CMKFGPGPOGH; // 0x48
	::System::UInt32 JHADDIAJCPJ; // 0x4C
	::System::Boolean _SkillReadyPlayed_k__BackingField; // 0x50
	::System::Boolean _HealthLowPlayed_k__BackingField; // 0x51
	::System::Boolean OHDLLIAELPD; // 0x52
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
