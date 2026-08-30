#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WaitCustomString.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY_METHOD_4_02B37CAC17E3DAF6_OFFSET UNITYSDK_OFFSET(0x1DEB5AC0)
#define RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY_METHOD_4_9382D69E5F11E0AB_OFFSET UNITYSDK_OFFSET(0x1DEB5DE0)
#define RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB5AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitCustomStringBattleClientOnly_TypeDefinitionIndex = 22650;

	class WaitCustomStringBattleClientOnly : public ::RPG::GameCore::WaitCustomString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9382D69E5F11E0AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitCustomStringBattleClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitCustomStringBattleClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY_METHOD_4_9382D69E5F11E0AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_02B37CAC17E3DAF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitCustomStringBattleClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitCustomStringBattleClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCUSTOMSTRINGBATTLECLIENTONLY_METHOD_4_02B37CAC17E3DAF6_OFFSET))(a1, a2);
		}
	};
}
