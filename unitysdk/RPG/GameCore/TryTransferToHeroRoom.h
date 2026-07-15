#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRYTRANSFERTOHEROROOM_METHOD_3_13D3F7FB70C6090B_OFFSET UNITYSDK_OFFSET(0x1B063450)
#define RPG_GAMECORE_TRYTRANSFERTOHEROROOM_METHOD_3_29B4303782755B0E_OFFSET UNITYSDK_OFFSET(0x1B063380)
#define RPG_GAMECORE_TRYTRANSFERTOHEROROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B063440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TryTransferToHeroRoom_TypeDefinitionIndex = 21498;

	class TryTransferToHeroRoom : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRANSFERTOHEROROOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_29B4303782755B0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryTransferToHeroRoom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryTransferToHeroRoom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRANSFERTOHEROROOM_METHOD_3_29B4303782755B0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_13D3F7FB70C6090B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryTransferToHeroRoom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryTransferToHeroRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRANSFERTOHEROROOM_METHOD_3_13D3F7FB70C6090B_OFFSET))(a1, a2);
		}
	};
}
