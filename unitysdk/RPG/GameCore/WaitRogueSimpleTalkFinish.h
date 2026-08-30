#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_METHOD_3_00B505ECED9D2288_OFFSET UNITYSDK_OFFSET(0x1D6AAFE0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_METHOD_3_F0F0C1F05EC68505_OFFSET UNITYSDK_OFFSET(0x1D6AB0B0)
#define RPG_GAMECORE_WAITROGUESIMPLETALKFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AB0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueSimpleTalkFinish_TypeDefinitionIndex = 20867;

	class WaitRogueSimpleTalkFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_00B505ECED9D2288(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueSimpleTalkFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueSimpleTalkFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_METHOD_3_00B505ECED9D2288_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F0F0C1F05EC68505(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRogueSimpleTalkFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRogueSimpleTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUESIMPLETALKFINISH_METHOD_3_F0F0C1F05EC68505_OFFSET))(a1, a2);
		}
	};
}
