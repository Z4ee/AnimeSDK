#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelSkillData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERADUELITEMDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB694EA0)
#define RPG_CLIENT_CHIMERADUELITEMDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB694EE0)
#define RPG_CLIENT_CHIMERADUELITEMDATA___C__TRYGETBATTLESKILLDATA_B__38_0_OFFSET UNITYSDK_OFFSET(0xB694F40)
#define RPG_CLIENT_CHIMERADUELITEMDATA___C__TRYGETSHOPSKILLDATA_B__37_0_OFFSET UNITYSDK_OFFSET(0xB694EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelItemData___c_TypeDefinitionIndex = 59303;

	class ChimeraDuelItemData___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>** StaticGet___9__38_0()
		{
			return (::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelItemData___c_TypeDefinitionIndex)->GetStaticField(0x64290);
		}
		static ::RPG::Client::ChimeraDuelItemData___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelItemData___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelItemData___c_TypeDefinitionIndex)->GetStaticField(0x64298);
		}
		static ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>** StaticGet___9__37_0()
		{
			return (::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelItemData___c_TypeDefinitionIndex)->GetStaticField(0x642A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetShopSkillData_b__37_0(::RPG::Client::IChimeraDuelSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraDuelSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA___C__TRYGETSHOPSKILLDATA_B__37_0_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetBattleSkillData_b__38_0(::RPG::Client::IChimeraDuelSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraDuelSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA___C__TRYGETBATTLESKILLDATA_B__38_0_OFFSET))(this, a1);
		}
	};
}
