#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER_METHOD_3_14ECA85137D72491_OFFSET UNITYSDK_OFFSET(0x1D6A18F0)
#define RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER_METHOD_3_DE239EEFB576A50E_OFFSET UNITYSDK_OFFSET(0x1D6A18B0)
#define RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A18E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddHitByTimeRewindListener_TypeDefinitionIndex = 20408;

	class AddHitByTimeRewindListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE239EEFB576A50E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddHitByTimeRewindListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddHitByTimeRewindListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER_METHOD_3_DE239EEFB576A50E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_14ECA85137D72491(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddHitByTimeRewindListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER_METHOD_3_14ECA85137D72491_OFFSET))(a1, a2);
		}
	};
}
