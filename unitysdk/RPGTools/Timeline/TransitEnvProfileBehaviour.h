#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_METHOD_3_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0xABAFF00)
#define RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xABB0380)
#define RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_METHOD_3_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xABAFEB0)
#define RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xABB0370)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TransitEnvProfileBehaviour_TypeDefinitionIndex = 39227;

	class TransitEnvProfileBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::String* Path; // 0x20
		::System::Single Duration; // 0x28
		::System::Boolean UseStoryPriority; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_D799715F2EF979EA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_METHOD_3_D799715F2EF979EA_OFFSET))(this);
		}

		::System::Void Method_3_21886A8411E71157()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_METHOD_3_21886A8411E71157_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
