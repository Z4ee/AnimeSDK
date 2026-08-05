#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;
class Class_2_C34A9C604D2C2C17;

#define MOLEMOLE_UIACTIVITYCOMPTASKOVACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E8680)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompTaskOvaContext_TypeDefinitionIndex = 79750;

	class UIActivityCompTaskOvaContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D375C91CCE5D3999* activityData; // 0x28
		::Class_2_C34A9C604D2C2C17* ovaTaskHandler; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
