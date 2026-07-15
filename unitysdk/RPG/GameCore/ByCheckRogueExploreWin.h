#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_3D711D253DFD2D25_OFFSET UNITYSDK_OFFSET(0x19CCB570)
#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_71C4263E1613F38F_OFFSET UNITYSDK_OFFSET(0x19CCB430)
#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_9174FD8DEB143E74_OFFSET UNITYSDK_OFFSET(0x19CCB3F0)
#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_E339CE3D95C6609C_OFFSET UNITYSDK_OFFSET(0x19CCB5A0)
#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19CCB420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckRogueExploreWin_TypeDefinitionIndex = 20889;

	class ByCheckRogueExploreWin : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9174FD8DEB143E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckRogueExploreWin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckRogueExploreWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_9174FD8DEB143E74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_71C4263E1613F38F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckRogueExploreWin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckRogueExploreWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_71C4263E1613F38F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3D711D253DFD2D25(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRogueExploreWin*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRogueExploreWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_3D711D253DFD2D25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E339CE3D95C6609C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRogueExploreWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRogueExploreWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_METHOD_4_E339CE3D95C6609C_OFFSET))(a1, a2);
		}
	};
}
