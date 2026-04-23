#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CREATEVIRTUALTEAM_METHOD_3_5721071D3F6DC841_OFFSET UNITYSDK_OFFSET(0x18846910)
#define RPG_GAMECORE_CREATEVIRTUALTEAM_METHOD_3_8EC003825F71DA11_OFFSET UNITYSDK_OFFSET(0x18846880)
#define RPG_GAMECORE_CREATEVIRTUALTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x188468E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateVirtualTeam_TypeDefinitionIndex = 20450;

	class CreateVirtualTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEVIRTUALTEAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8EC003825F71DA11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateVirtualTeam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateVirtualTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEVIRTUALTEAM_METHOD_3_8EC003825F71DA11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5721071D3F6DC841(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateVirtualTeam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateVirtualTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEVIRTUALTEAM_METHOD_3_5721071D3F6DC841_OFFSET))(a1, a2);
		}
	};
}
