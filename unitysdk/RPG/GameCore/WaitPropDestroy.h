#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WAITPROPDESTROY_METHOD_3_2C5DF8873AFE9173_OFFSET UNITYSDK_OFFSET(0x19105300)
#define RPG_GAMECORE_WAITPROPDESTROY_METHOD_3_34294A95452621C4_OFFSET UNITYSDK_OFFSET(0x191051B0)
#define RPG_GAMECORE_WAITPROPDESTROY__CTOR_OFFSET UNITYSDK_OFFSET(0x19105270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropDestroy_TypeDefinitionIndex = 20407;

	class WaitPropDestroy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPDESTROY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34294A95452621C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropDestroy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropDestroy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPDESTROY_METHOD_3_34294A95452621C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C5DF8873AFE9173(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropDestroy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropDestroy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPDESTROY_METHOD_3_2C5DF8873AFE9173_OFFSET))(a1, a2);
		}
	};
}
