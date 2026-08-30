#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKVERSUSBAR_METHOD_3_65EB6191DFC817B3_OFFSET UNITYSDK_OFFSET(0x1D211EF0)
#define RPG_GAMECORE_LOCKVERSUSBAR_METHOD_3_B313798818AC2870_OFFSET UNITYSDK_OFFSET(0x1D211F30)
#define RPG_GAMECORE_LOCKVERSUSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D211F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockVersusBar_TypeDefinitionIndex = 22887;

	class LockVersusBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsUnlock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKVERSUSBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_65EB6191DFC817B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockVersusBar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockVersusBar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKVERSUSBAR_METHOD_3_65EB6191DFC817B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B313798818AC2870(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockVersusBar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockVersusBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKVERSUSBAR_METHOD_3_B313798818AC2870_OFFSET))(a1, a2);
		}
	};
}
