#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0C0DF0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C0E30)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__DIFFICULTYCOMPLEVEL_B__0_0_OFFSET UNITYSDK_OFFSET(0xB0C0E40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDifficultyCompDataExt___c_TypeDefinitionIndex = 62288;

	class RogueTournDifficultyCompDataExt___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournDifficultyCompDataExt___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournDifficultyCompDataExt___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDifficultyCompDataExt___c_TypeDefinitionIndex)->GetStaticField(0x18B70);
		}
		static ::System::Func_2<::RPG::Client::RogueTournDifficultyCompData*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournDifficultyCompData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDifficultyCompDataExt___c_TypeDefinitionIndex)->GetStaticField(0x18B78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _DifficultyCompLevel_b__0_0(::RPG::Client::RogueTournDifficultyCompData* diffComp)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueTournDifficultyCompData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__DIFFICULTYCOMPLEVEL_B__0_0_OFFSET))(this, diffComp);
		}
	};
}
