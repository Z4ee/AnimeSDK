#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL_METHOD_3_0358D498DC4F8515_OFFSET UNITYSDK_OFFSET(0x1D513800)
#define RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL_METHOD_3_B0F3C7F5C56B3DDA_OFFSET UNITYSDK_OFFSET(0x1D513840)
#define RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D513830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTimeRewindEntityDisableControl_TypeDefinitionIndex = 20439;

	class SetTimeRewindEntityDisableControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Disable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0358D498DC4F8515(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindEntityDisableControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindEntityDisableControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL_METHOD_3_0358D498DC4F8515_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B0F3C7F5C56B3DDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindEntityDisableControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindEntityDisableControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYDISABLECONTROL_METHOD_3_B0F3C7F5C56B3DDA_OFFSET))(a1, a2);
		}
	};
}
