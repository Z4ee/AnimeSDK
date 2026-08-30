#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CREATEVIRTUALTEAM_METHOD_3_5721071D3F6DC841_OFFSET UNITYSDK_OFFSET(0x1D00B1E0)
#define RPG_GAMECORE_CREATEVIRTUALTEAM_METHOD_3_BAB3615A643B321D_OFFSET UNITYSDK_OFFSET(0x1D00B190)
#define RPG_GAMECORE_CREATEVIRTUALTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D00B1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateVirtualTeam_TypeDefinitionIndex = 21363;

	class CreateVirtualTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEVIRTUALTEAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BAB3615A643B321D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateVirtualTeam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateVirtualTeam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEVIRTUALTEAM_METHOD_3_BAB3615A643B321D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5721071D3F6DC841(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateVirtualTeam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateVirtualTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEVIRTUALTEAM_METHOD_3_5721071D3F6DC841_OFFSET))(a1, a2);
		}
	};
}
