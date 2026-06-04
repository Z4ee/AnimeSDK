#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_16.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::GameCore { class AvatarPropertyRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5D2E9E194E93B02A_METHOD_1_3E2F1ABAF422B776_OFFSET UNITYSDK_OFFSET(0x136EA160)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_4034097AD7AEEEFF_OFFSET UNITYSDK_OFFSET(0x136EA110)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_4E830F6BBC16E3B3_OFFSET UNITYSDK_OFFSET(0x136E9DA0)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_6CBB1A41EE672824_OFFSET UNITYSDK_OFFSET(0x136E9890)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_70F1C3D660DA64F5_OFFSET UNITYSDK_OFFSET(0x136E9980)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_7B096696018C9A3B_OFFSET UNITYSDK_OFFSET(0x136E9C40)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x136E9780)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_7DDB6BEA4A1AFC2E_OFFSET UNITYSDK_OFFSET(0x136E9930)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_904F061560469780_OFFSET UNITYSDK_OFFSET(0x136E9FC0)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_97ABD8789ABF6051_OFFSET UNITYSDK_OFFSET(0x136E9CB0)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_9860437A7F236672_OFFSET UNITYSDK_OFFSET(0x136E9E00)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_AAC36DB396F0CF94_OFFSET UNITYSDK_OFFSET(0x136E9A00)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_B7C91CC9EF5969D3_OFFSET UNITYSDK_OFFSET(0x136E9D10)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_D25E301996B3A3D5_OFFSET UNITYSDK_OFFSET(0x136E9F10)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_E04B182755739E85_OFFSET UNITYSDK_OFFSET(0x136E9E60)
#define CLASS_1_5D2E9E194E93B02A_METHOD_1_F7C14B42FD141572_OFFSET UNITYSDK_OFFSET(0x136EA030)
#define CLASS_1_5D2E9E194E93B02A__CTOR_OFFSET UNITYSDK_OFFSET(0x136EA480)

inline static constexpr unsigned int Class_1_5D2E9E194E93B02A_TypeDefinitionIndex = 62502;

class Class_1_5D2E9E194E93B02A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}

	::RPG::Client::RelicItemData* Method_1_6CBB1A41EE672824(::System::UInt32 a1)
	{
		return ((::RPG::Client::RelicItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_6CBB1A41EE672824_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_7DDB6BEA4A1AFC2E(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_7DDB6BEA4A1AFC2E_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* Method_1_70F1C3D660DA64F5(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_70F1C3D660DA64F5_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* Method_1_AAC36DB396F0CF94(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_AAC36DB396F0CF94_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarPropertyType Method_1_7B096696018C9A3B(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_7B096696018C9A3B_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType Method_1_97ABD8789ABF6051(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_97ABD8789ABF6051_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B7C91CC9EF5969D3(::System::UInt32 a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_B7C91CC9EF5969D3_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_4E830F6BBC16E3B3(::RPG::AvatarSystem::IAvatar* a1, ::RPG::GameCore::AvatarPropertyType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_4E830F6BBC16E3B3_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Method_1_9860437A7F236672(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_9860437A7F236672_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_E04B182755739E85(::RPG::AvatarSystem::IAvatar* a1, ::RPG::GameCore::AvatarPropertyType a2, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::GameCore::AvatarPropertyType, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_E04B182755739E85_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_D25E301996B3A3D5(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_D25E301996B3A3D5_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_1_F7C14B42FD141572(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_F7C14B42FD141572_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarPropertyRow* Method_1_904F061560469780(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::AvatarPropertyRow*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_904F061560469780_OFFSET))(this, a1);
	}

	::Enum_3_71AA90D596A09AC8_16 Method_1_4034097AD7AEEEFF(::RPG::Client::RelicSmartSuit::RankType a1)
	{
		return ((::Enum_3_71AA90D596A09AC8_16(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RankType))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_4034097AD7AEEEFF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Method_1_3E2F1ABAF422B776(::RPG::GameCore::RelicType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_5D2E9E194E93B02A_METHOD_1_3E2F1ABAF422B776_OFFSET))(this, a1);
	}
};
