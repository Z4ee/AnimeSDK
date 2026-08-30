#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REPLACEVIRTUALTEAM_METHOD_3_78AF42E97C0FF111_OFFSET UNITYSDK_OFFSET(0x1D3A1A00)
#define RPG_GAMECORE_REPLACEVIRTUALTEAM_METHOD_3_ECD1C4004427BBAD_OFFSET UNITYSDK_OFFSET(0x1D3A19B0)
#define RPG_GAMECORE_REPLACEVIRTUALTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A19F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReplaceVirtualTeam_TypeDefinitionIndex = 20220;

	class ReplaceVirtualTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACEVIRTUALTEAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ECD1C4004427BBAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReplaceVirtualTeam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReplaceVirtualTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACEVIRTUALTEAM_METHOD_3_ECD1C4004427BBAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_78AF42E97C0FF111(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReplaceVirtualTeam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReplaceVirtualTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACEVIRTUALTEAM_METHOD_3_78AF42E97C0FF111_OFFSET))(a1, a2);
		}
	};
}
