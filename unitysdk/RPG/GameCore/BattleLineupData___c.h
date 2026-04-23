#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MazeBuffData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_GAMECORE_BATTLELINEUPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5CFF90)
#define RPG_GAMECORE_BATTLELINEUPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5CFFC0)
#define RPG_GAMECORE_BATTLELINEUPDATA___C__GETALLAVATARGLOBALMAZEBUFFDATALIST_B__11_0_OFFSET UNITYSDK_OFFSET(0xB5CFFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupData___c_TypeDefinitionIndex = 51922;

	class BattleLineupData___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::BattleLineupData___c** StaticGet___9()
		{
			return (::RPG::GameCore::BattleLineupData___c**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupData___c_TypeDefinitionIndex)->GetStaticField(0x44050);
		}
		static ::System::Func_2<::RPG::GameCore::MazeBuffData*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::GameCore::MazeBuffData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupData___c_TypeDefinitionIndex)->GetStaticField(0x44058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllAvatarGlobalMazeBuffDataList_b__11_0(::RPG::GameCore::MazeBuffData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA___C__GETALLAVATARGLOBALMAZEBUFFDATALIST_B__11_0_OFFSET))(this, x);
		}
	};
}
