#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCustomValue; }

#define RPG_GAMECORE_SETMISSIONCUSTOMVALUE_METHOD_3_19B996F949A9161A_OFFSET UNITYSDK_OFFSET(0x1E085A70)
#define RPG_GAMECORE_SETMISSIONCUSTOMVALUE_METHOD_3_351873C0FC6DBED7_OFFSET UNITYSDK_OFFSET(0x1E085A30)
#define RPG_GAMECORE_SETMISSIONCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E085A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMissionCustomValue_TypeDefinitionIndex = 20201;

	class SetMissionCustomValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x20
		::System::UInt32 CustomValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_351873C0FC6DBED7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMissionCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMissionCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONCUSTOMVALUE_METHOD_3_351873C0FC6DBED7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_19B996F949A9161A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMissionCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONCUSTOMVALUE_METHOD_3_19B996F949A9161A_OFFSET))(a1, a2);
		}
	};
}
