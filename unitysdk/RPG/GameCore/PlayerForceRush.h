#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERFORCERUSH_METHOD_3_6D2F0D8FA00DE9FC_OFFSET UNITYSDK_OFFSET(0x18C25C90)
#define RPG_GAMECORE_PLAYERFORCERUSH_METHOD_3_7EE4A192377F088D_OFFSET UNITYSDK_OFFSET(0x18C25C10)
#define RPG_GAMECORE_PLAYERFORCERUSH__CTOR_OFFSET UNITYSDK_OFFSET(0x18C25C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerForceRush_TypeDefinitionIndex = 18927;

	class PlayerForceRush : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceRush; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCERUSH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7EE4A192377F088D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerForceRush*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerForceRush*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCERUSH_METHOD_3_7EE4A192377F088D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6D2F0D8FA00DE9FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerForceRush* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerForceRush*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCERUSH_METHOD_3_6D2F0D8FA00DE9FC_OFFSET))(a1, a2);
		}
	};
}
