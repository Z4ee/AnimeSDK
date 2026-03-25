#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TimeRewindChildConfig; }
namespace RPG::GameCore { class TimeRewindParentPropStateConfig; }

#define RPG_GAMECORE_BINDTIMEREWINDPARENT_METHOD_3_C240A95616C7D13E_OFFSET UNITYSDK_OFFSET(0x16FE74E0)
#define RPG_GAMECORE_BINDTIMEREWINDPARENT_METHOD_3_C45A9A8750BF7468_OFFSET UNITYSDK_OFFSET(0x16FE7560)
#define RPG_GAMECORE_BINDTIMEREWINDPARENT__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE7530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BindTimeRewindParent_TypeDefinitionIndex = 18966;

	class BindTimeRewindParent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TimeRewindParentPropStateConfig*>* PropStateConfig; // 0x18
		::System::Single RotationSpeed; // 0x20
		::System::Single ChildInstanceID; // 0x24
		::RPG::MVector3 ChildOffset; // 0x28
		::Il2CppArray<::RPG::GameCore::TimeRewindChildConfig*>* ChildConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDPARENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C240A95616C7D13E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BindTimeRewindParent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BindTimeRewindParent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDPARENT_METHOD_3_C240A95616C7D13E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C45A9A8750BF7468(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BindTimeRewindParent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BindTimeRewindParent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDPARENT_METHOD_3_C45A9A8750BF7468_OFFSET))(a1, a2);
		}
	};
}
