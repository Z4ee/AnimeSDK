#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY_METHOD_3_020FF5E78704E6CC_OFFSET UNITYSDK_OFFSET(0x1CB02C90)
#define RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY_METHOD_3_20257E4DCCDF37AB_OFFSET UNITYSDK_OFFSET(0x1CB02C50)
#define RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB02C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StretchGlobalTimeSlowByKey_TypeDefinitionIndex = 22421;

	class StretchGlobalTimeSlowByKey : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SlowKey; // 0x18
		::System::Single Scale; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_20257E4DCCDF37AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StretchGlobalTimeSlowByKey*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StretchGlobalTimeSlowByKey*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY_METHOD_3_20257E4DCCDF37AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_020FF5E78704E6CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StretchGlobalTimeSlowByKey* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StretchGlobalTimeSlowByKey*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY_METHOD_3_020FF5E78704E6CC_OFFSET))(a1, a2);
		}
	};
}
