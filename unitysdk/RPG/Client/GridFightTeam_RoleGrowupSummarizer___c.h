#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD344580)
#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3445C0)
#define RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__UPDATEAFTER_B__6_1_OFFSET UNITYSDK_OFFSET(0xD3445D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_RoleGrowupSummarizer___c_TypeDefinitionIndex = 65222;

	class GridFightTeam_RoleGrowupSummarizer___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam_RoleGrowupSummarizer___c_TypeDefinitionIndex)->GetStaticField(0x52A80);
		}
		static ::RPG::Client::GridFightTeam_RoleGrowupSummarizer___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTeam_RoleGrowupSummarizer___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam_RoleGrowupSummarizer___c_TypeDefinitionIndex)->GetStaticField(0x52A88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateAfter_b__6_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_ROLEGROWUPSUMMARIZER___C__UPDATEAFTER_B__6_1_OFFSET))(this, a1);
		}
	};
}
