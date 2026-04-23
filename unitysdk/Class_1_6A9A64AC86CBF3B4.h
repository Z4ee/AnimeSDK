#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RelicItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6A9A64AC86CBF3B4_METHOD_1_242296C0234622FA_OFFSET UNITYSDK_OFFSET(0x12A0EF60)
#define CLASS_1_6A9A64AC86CBF3B4_METHOD_1_76B4457BCE3F5B96_OFFSET UNITYSDK_OFFSET(0x12A0EE30)
#define CLASS_1_6A9A64AC86CBF3B4_METHOD_1_BD44B738CCDC386E_OFFSET UNITYSDK_OFFSET(0x12A0EF00)
#define CLASS_1_6A9A64AC86CBF3B4__CTOR_OFFSET UNITYSDK_OFFSET(0x12A0F140)

inline static constexpr unsigned int Class_1_6A9A64AC86CBF3B4_TypeDefinitionIndex = 61566;

class Class_1_6A9A64AC86CBF3B4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A9A64AC86CBF3B4__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_76B4457BCE3F5B96(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::RelicItemData* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_6A9A64AC86CBF3B4_METHOD_1_76B4457BCE3F5B96_OFFSET))(this, a1, a2);
	}

	::RPG::Client::RelicSmartSuit::RankType Method_1_BD44B738CCDC386E(::RPG::Client::IAvatarInfoProvider* a1, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a2)
	{
		return ((::RPG::Client::RelicSmartSuit::RankType(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_6A9A64AC86CBF3B4_METHOD_1_BD44B738CCDC386E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_242296C0234622FA(::RPG::Client::IAvatarInfoProvider* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6A9A64AC86CBF3B4_METHOD_1_242296C0234622FA_OFFSET))(this, a1, a2);
	}
};
