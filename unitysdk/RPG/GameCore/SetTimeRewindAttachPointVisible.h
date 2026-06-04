#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE_METHOD_3_A67139B5A3D2E454_OFFSET UNITYSDK_OFFSET(0x19C64740)
#define RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE_METHOD_3_FA258542EC69D347_OFFSET UNITYSDK_OFFSET(0x19C647C0)
#define RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C64790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTimeRewindAttachPointVisible_TypeDefinitionIndex = 19532;

	class SetTimeRewindAttachPointVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicString* AttachPointName; // 0x20
		::System::Single TransitionTime; // 0x28
		::System::Boolean Visible; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A67139B5A3D2E454(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindAttachPointVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindAttachPointVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE_METHOD_3_A67139B5A3D2E454_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FA258542EC69D347(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindAttachPointVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindAttachPointVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDATTACHPOINTVISIBLE_METHOD_3_FA258542EC69D347_OFFSET))(a1, a2);
		}
	};
}
