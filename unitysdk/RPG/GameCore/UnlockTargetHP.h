#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_UNLOCKTARGETHP_METHOD_3_22C91DB2516703F3_OFFSET UNITYSDK_OFFSET(0x178E7660)
#define RPG_GAMECORE_UNLOCKTARGETHP_METHOD_3_F4DFD397728D9327_OFFSET UNITYSDK_OFFSET(0x178E75E0)
#define RPG_GAMECORE_UNLOCKTARGETHP__CTOR_OFFSET UNITYSDK_OFFSET(0x178E7630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnlockTargetHP_TypeDefinitionIndex = 21861;

	class UnlockTargetHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* LockKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F4DFD397728D9327(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockTargetHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockTargetHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETHP_METHOD_3_F4DFD397728D9327_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_22C91DB2516703F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockTargetHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockTargetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTARGETHP_METHOD_3_22C91DB2516703F3_OFFSET))(a1, a2);
		}
	};
}
