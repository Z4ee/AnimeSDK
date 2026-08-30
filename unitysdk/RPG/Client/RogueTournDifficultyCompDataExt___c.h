#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF10E50)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF10E90)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__DIFFICULTYCOMPLEVEL_B__0_0_OFFSET UNITYSDK_OFFSET(0x1AF10EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDifficultyCompDataExt___c_TypeDefinitionIndex = 67584;

	class RogueTournDifficultyCompDataExt___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournDifficultyCompData*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournDifficultyCompData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDifficultyCompDataExt___c_TypeDefinitionIndex)->GetStaticField(0x11C60);
		}
		static ::RPG::Client::RogueTournDifficultyCompDataExt___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournDifficultyCompDataExt___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDifficultyCompDataExt___c_TypeDefinitionIndex)->GetStaticField(0x11C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _DifficultyCompLevel_b__0_0(::RPG::Client::RogueTournDifficultyCompData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueTournDifficultyCompData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATAEXT___C__DIFFICULTYCOMPLEVEL_B__0_0_OFFSET))(this, a1);
		}
	};
}
