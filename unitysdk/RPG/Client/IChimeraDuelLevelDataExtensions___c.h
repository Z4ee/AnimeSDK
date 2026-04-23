#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelSkillData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA61CDF0)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA61CE30)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__TRYGETBATTLESKILLDATA_B__2_0_OFFSET UNITYSDK_OFFSET(0xA61CE70)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__TRYGETSHOPSKILLDATA_B__1_0_OFFSET UNITYSDK_OFFSET(0xA61CE40)

namespace RPG::Client
{
	inline static constexpr unsigned int IChimeraDuelLevelDataExtensions___c_TypeDefinitionIndex = 58355;

	class IChimeraDuelLevelDataExtensions___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>**)Il2CppClass::FromTypeDefinitionIndex(IChimeraDuelLevelDataExtensions___c_TypeDefinitionIndex)->GetStaticField(0x21E70);
		}
		static ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>** StaticGet___9__1_0()
		{
			return (::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>**)Il2CppClass::FromTypeDefinitionIndex(IChimeraDuelLevelDataExtensions___c_TypeDefinitionIndex)->GetStaticField(0x21E78);
		}
		static ::RPG::Client::IChimeraDuelLevelDataExtensions___c** StaticGet___9()
		{
			return (::RPG::Client::IChimeraDuelLevelDataExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(IChimeraDuelLevelDataExtensions___c_TypeDefinitionIndex)->GetStaticField(0x21E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetShopSkillData_b__1_0(::RPG::Client::IChimeraDuelSkillData* skillData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraDuelSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__TRYGETSHOPSKILLDATA_B__1_0_OFFSET))(this, skillData);
		}

		::System::Boolean _TryGetBattleSkillData_b__2_0(::RPG::Client::IChimeraDuelSkillData* skillData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraDuelSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__TRYGETBATTLESKILLDATA_B__2_0_OFFSET))(this, skillData);
		}
	};
}
