#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class String; }

#define RPG_CLIENT_PROP_ROTATESELECTPARAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC60A170)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotateSelectParamData_TypeDefinitionIndex = 73330;

	class RotateSelectParamData : public ::System::Object
	{
	public:
		::System::String* FragmentUniqueName; // 0x10
		::RPG::GameCore::OptionTriggerInfo* RotateInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATESELECTPARAMDATA__CTOR_OFFSET))(this);
		}
	};
}
