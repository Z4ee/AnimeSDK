#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_8FE15D155B05EF4E_4;
namespace RPG::Client::DynamicFloatingObject { class WaterSimOverrideParam_WaterSimParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_WATERSIMOVERRIDEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17715800)

namespace RPG::Client::DynamicFloatingObject
{
	inline static constexpr unsigned int WaterSimOverrideParam_TypeDefinitionIndex = 70170;

	class WaterSimOverrideParam : public ::RPG::Client::TAMonoPlugin_1<::Class_3_8FE15D155B05EF4E_4*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DynamicFloatingObject::WaterSimOverrideParam_WaterSimParam*>* overrideParams; // 0x30
		::RPG::Client::DynamicFloatingObject::WaterSimOverrideParam_WaterSimParam* defaultParam; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_WATERSIMOVERRIDEPARAM__CTOR_OFFSET))(this);
		}
	};
}
