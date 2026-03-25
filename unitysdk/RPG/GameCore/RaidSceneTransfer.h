#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RAIDSCENETRANSFER_METHOD_3_4E98A592D7704178_OFFSET UNITYSDK_OFFSET(0x1757E520)
#define RPG_GAMECORE_RAIDSCENETRANSFER_METHOD_3_62A615A009D80778_OFFSET UNITYSDK_OFFSET(0x1757E490)
#define RPG_GAMECORE_RAIDSCENETRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1757E4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidSceneTransfer_TypeDefinitionIndex = 18793;

	class RaidSceneTransfer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDSCENETRANSFER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_62A615A009D80778(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RaidSceneTransfer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidSceneTransfer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDSCENETRANSFER_METHOD_3_62A615A009D80778_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4E98A592D7704178(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RaidSceneTransfer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidSceneTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDSCENETRANSFER_METHOD_3_4E98A592D7704178_OFFSET))(a1, a2);
		}
	};
}
