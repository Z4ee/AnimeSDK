#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABDD6A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__CREATECOMPARER_B__4_0_OFFSET UNITYSDK_OFFSET(0x1ABDD6F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABDD6E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__GETCURSEASONALLTRAITS_B__41_0_OFFSET UNITYSDK_OFFSET(0x1ABDD730)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__GETCURSEASONALLTRAITS_B__41_1_OFFSET UNITYSDK_OFFSET(0x1ABDD750)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationFilter___c_TypeDefinitionIndex = 61766;

	class GridFightGameFormationFilter___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationFilter___c_TypeDefinitionIndex)->GetStaticField(0x26560);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationFilter___c_TypeDefinitionIndex)->GetStaticField(0x26568);
		}
		static ::RPG::Client::GridFightGameFormationFilter___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameFormationFilter___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationFilter___c_TypeDefinitionIndex)->GetStaticField(0x26570);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::GameCore::GridFightTraitType>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::GameCore::GridFightTraitType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationFilter___c_TypeDefinitionIndex)->GetStaticField(0x26578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateComparer_b__4_0(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__CREATECOMPARER_B__4_0_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GridFightTraitType _GetCurSeasonAllTraits_b__41_0(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::RPG::GameCore::GridFightTraitType(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__GETCURSEASONALLTRAITS_B__41_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfig* _GetCurSeasonAllTraits_b__41_1(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__GETCURSEASONALLTRAITS_B__41_1_OFFSET))(this, a1);
		}
	};
}
