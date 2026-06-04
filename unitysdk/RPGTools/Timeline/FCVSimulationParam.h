#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline { class AnimatorParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_FCVSIMULATIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xD01EE00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FCVSimulationParam_TypeDefinitionIndex = 45417;

	class FCVSimulationParam : public ::System::Object
	{
	public:
		::System::String* GroupID; // 0x10
		::System::String* PropID; // 0x18
		::RPGTools::Timeline::AnimatorParam* Param; // 0x20
		::System::Collections::Generic::List_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>* _groups; // 0x28
		::System::Collections::Generic::List_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>* _props; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FCVSIMULATIONPARAM__CTOR_OFFSET))(this);
		}
	};
}
