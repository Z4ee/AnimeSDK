#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropSelectionEffect_Class_1_F34E36657A6030BD.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"

namespace RPG::Client { class PropSelectionEffect; }
namespace System { class Object; }

#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_02D56593AA4F1C3B_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xDD724A0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_02D56593AA4F1C3B_METHOD_2_A6EE3276D5055243_OFFSET UNITYSDK_OFFSET(0xDD72450)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_02D56593AA4F1C3B__CTOR_OFFSET UNITYSDK_OFFSET(0xDD6F680)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffect_Class_2_02D56593AA4F1C3B_TypeDefinitionIndex = 60371;

	class PropSelectionEffect_Class_2_02D56593AA4F1C3B : public ::RPG::Client::PropSelectionEffect_Class_1_F34E36657A6030BD
	{
	public:
		::System::Void _ctor(::RPG::Client::PropSelectionEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_02D56593AA4F1C3B__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_2_A6EE3276D5055243(::RPG::Client::PropSelectionState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_02D56593AA4F1C3B_METHOD_2_A6EE3276D5055243_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_2_02D56593AA4F1C3B_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
		}
	};
}
