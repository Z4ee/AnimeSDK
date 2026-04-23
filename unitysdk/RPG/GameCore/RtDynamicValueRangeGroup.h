#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValueRangeCallback; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTDYNAMICVALUERANGEGROUP_METHOD_2_D300F1FE46F3CECA_OFFSET UNITYSDK_OFFSET(0x18DD0060)
#define RPG_GAMECORE_RTDYNAMICVALUERANGEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD0280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDynamicValueRangeGroup_TypeDefinitionIndex = 16768;

	class RtDynamicValueRangeGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StringHash Key; // 0x10
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x14
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>* Ranges; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDYNAMICVALUERANGEGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D300F1FE46F3CECA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDynamicValueRangeGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDynamicValueRangeGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDYNAMICVALUERANGEGROUP_METHOD_2_D300F1FE46F3CECA_OFFSET))(a1, a2);
		}
	};
}
