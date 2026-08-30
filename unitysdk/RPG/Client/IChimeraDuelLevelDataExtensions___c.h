#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelSkillData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3DFCE0)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3DFD20)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__TRYGETBATTLESKILLDATA_B__2_0_OFFSET UNITYSDK_OFFSET(0xD3DFD90)
#define RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__TRYGETSHOPSKILLDATA_B__1_0_OFFSET UNITYSDK_OFFSET(0xD3DFD30)

namespace RPG::Client
{
	inline static constexpr unsigned int IChimeraDuelLevelDataExtensions___c_TypeDefinitionIndex = 63409;

	class IChimeraDuelLevelDataExtensions___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>**)Il2CppClass::FromTypeDefinitionIndex(IChimeraDuelLevelDataExtensions___c_TypeDefinitionIndex)->GetStaticField(0x5BD60);
		}
		static ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>** StaticGet___9__1_0()
		{
			return (::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>**)Il2CppClass::FromTypeDefinitionIndex(IChimeraDuelLevelDataExtensions___c_TypeDefinitionIndex)->GetStaticField(0x5BD68);
		}
		static ::RPG::Client::IChimeraDuelLevelDataExtensions___c** StaticGet___9()
		{
			return (::RPG::Client::IChimeraDuelLevelDataExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(IChimeraDuelLevelDataExtensions___c_TypeDefinitionIndex)->GetStaticField(0x5BD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetShopSkillData_b__1_0(::RPG::Client::IChimeraDuelSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraDuelSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__TRYGETSHOPSKILLDATA_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetBattleSkillData_b__2_0(::RPG::Client::IChimeraDuelSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraDuelSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ICHIMERADUELLEVELDATAEXTENSIONS___C__TRYGETBATTLESKILLDATA_B__2_0_OFFSET))(this, a1);
		}
	};
}
