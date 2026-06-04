#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME_METHOD_3_8369197332E34D80_OFFSET UNITYSDK_OFFSET(0x19C4FA40)
#define RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME_METHOD_3_96730D7615AC9C39_OFFSET UNITYSDK_OFFSET(0x19C4F9C0)
#define RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19C4FA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetForceStreamingThisFrame_TypeDefinitionIndex = 19935;

	class SetForceStreamingThisFrame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean StartLoadingTick; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96730D7615AC9C39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetForceStreamingThisFrame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetForceStreamingThisFrame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME_METHOD_3_96730D7615AC9C39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8369197332E34D80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetForceStreamingThisFrame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetForceStreamingThisFrame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFORCESTREAMINGTHISFRAME_METHOD_3_8369197332E34D80_OFFSET))(a1, a2);
		}
	};
}
