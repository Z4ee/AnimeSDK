#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING_METHOD_4_9D8D60DA3F811BB1_OFFSET UNITYSDK_OFFSET(0x1767D3D0)
#define RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING_METHOD_4_E38832BF7540AFD8_OFFSET UNITYSDK_OFFSET(0x1767CD40)
#define RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1767CD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_TriggerCustomString_TypeDefinitionIndex = 18338;

	class SO_TriggerCustomString : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9D8D60DA3F811BB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_TriggerCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_TriggerCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING_METHOD_4_9D8D60DA3F811BB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E38832BF7540AFD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_TriggerCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_TriggerCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERCUSTOMSTRING_METHOD_4_E38832BF7540AFD8_OFFSET))(a1, a2);
		}
	};
}
