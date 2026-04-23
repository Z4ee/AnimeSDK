#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICPARAM_METHOD_2_AEAAAC4A80275338_OFFSET UNITYSDK_OFFSET(0x188927B0)
#define RPG_GAMECORE_DYNAMICPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18892960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicParam_TypeDefinitionIndex = 17225;

	class DynamicParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TriggerKey; // 0x10
		::System::UInt32 Index; // 0x18
		::RPG::GameCore::FixPoint Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AEAAAC4A80275338(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICPARAM_METHOD_2_AEAAAC4A80275338_OFFSET))(a1, a2);
		}
	};
}
