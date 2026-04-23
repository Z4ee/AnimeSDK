#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_15.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::GameCore { class AvatarPropertyRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_29A54A6045520AF2_METHOD_1_0A50743A1DB48D7D_OFFSET UNITYSDK_OFFSET(0x1198A490)
#define CLASS_1_29A54A6045520AF2_METHOD_1_0B3C1A412E596137_OFFSET UNITYSDK_OFFSET(0x1198A5B0)
#define CLASS_1_29A54A6045520AF2_METHOD_1_4034097AD7AEEEFF_OFFSET UNITYSDK_OFFSET(0x1198AD60)
#define CLASS_1_29A54A6045520AF2_METHOD_1_6CBB1A41EE672824_OFFSET UNITYSDK_OFFSET(0x1198A3F0)
#define CLASS_1_29A54A6045520AF2_METHOD_1_6E4E29E7996C681C_OFFSET UNITYSDK_OFFSET(0x1198A980)
#define CLASS_1_29A54A6045520AF2_METHOD_1_70F1C3D660DA64F5_OFFSET UNITYSDK_OFFSET(0x1198A530)
#define CLASS_1_29A54A6045520AF2_METHOD_1_7B096696018C9A3B_OFFSET UNITYSDK_OFFSET(0x1198A8B0)
#define CLASS_1_29A54A6045520AF2_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x1198A2E0)
#define CLASS_1_29A54A6045520AF2_METHOD_1_93C05B12B7DDEA26_OFFSET UNITYSDK_OFFSET(0x1198AA50)
#define CLASS_1_29A54A6045520AF2_METHOD_1_97ABD8789ABF6051_OFFSET UNITYSDK_OFFSET(0x1198A920)
#define CLASS_1_29A54A6045520AF2_METHOD_1_A7F45A66661D1FB5_OFFSET UNITYSDK_OFFSET(0x1198AC80)
#define CLASS_1_29A54A6045520AF2_METHOD_1_D25E301996B3A3D5_OFFSET UNITYSDK_OFFSET(0x1198AB60)
#define CLASS_1_29A54A6045520AF2_METHOD_1_D64533D84570E52F_OFFSET UNITYSDK_OFFSET(0x1198AC10)
#define CLASS_1_29A54A6045520AF2_METHOD_1_D80A4AAFBD918974_OFFSET UNITYSDK_OFFSET(0x1198ADB0)
#define CLASS_1_29A54A6045520AF2_METHOD_1_DAB4D0EF6E7FC758_OFFSET UNITYSDK_OFFSET(0x1198A9F0)
#define CLASS_1_29A54A6045520AF2_METHOD_1_E2175C7EACD4F6B7_OFFSET UNITYSDK_OFFSET(0x1198AAB0)
#define CLASS_1_29A54A6045520AF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1198B050)

inline static constexpr unsigned int Class_1_29A54A6045520AF2_TypeDefinitionIndex = 61569;

class Class_1_29A54A6045520AF2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}

	::RPG::Client::RelicItemData* Method_1_6CBB1A41EE672824(::System::UInt32 a1)
	{
		return ((::RPG::Client::RelicItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_6CBB1A41EE672824_OFFSET))(this, a1);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_0A50743A1DB48D7D(::System::UInt32 a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_0A50743A1DB48D7D_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* Method_1_70F1C3D660DA64F5(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_70F1C3D660DA64F5_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* Method_1_0B3C1A412E596137(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_0B3C1A412E596137_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarPropertyType Method_1_7B096696018C9A3B(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_7B096696018C9A3B_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType Method_1_97ABD8789ABF6051(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_97ABD8789ABF6051_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6E4E29E7996C681C(::System::UInt32 a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_6E4E29E7996C681C_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_DAB4D0EF6E7FC758(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::GameCore::AvatarPropertyType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_DAB4D0EF6E7FC758_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* Method_1_93C05B12B7DDEA26(::RPG::Client::IAvatarInfoProvider* a1, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_93C05B12B7DDEA26_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_E2175C7EACD4F6B7(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::GameCore::AvatarPropertyType a2, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::GameCore::AvatarPropertyType, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_E2175C7EACD4F6B7_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_D25E301996B3A3D5(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_D25E301996B3A3D5_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_1_A7F45A66661D1FB5(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_A7F45A66661D1FB5_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarPropertyRow* Method_1_D64533D84570E52F(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::AvatarPropertyRow*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_D64533D84570E52F_OFFSET))(this, a1);
	}

	::Enum_3_71AA90D596A09AC8_15 Method_1_4034097AD7AEEEFF(::RPG::Client::RelicSmartSuit::RankType a1)
	{
		return ((::Enum_3_71AA90D596A09AC8_15(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RankType))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_4034097AD7AEEEFF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* Method_1_D80A4AAFBD918974(::RPG::GameCore::RelicType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_29A54A6045520AF2_METHOD_1_D80A4AAFBD918974_OFFSET))(this, a1);
	}
};
