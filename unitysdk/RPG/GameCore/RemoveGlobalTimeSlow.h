#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REMOVEGLOBALTIMESLOW_METHOD_3_04D5E4002A0EAFDD_OFFSET UNITYSDK_OFFSET(0x18CA4450)
#define RPG_GAMECORE_REMOVEGLOBALTIMESLOW_METHOD_3_3A34B6945CE0B921_OFFSET UNITYSDK_OFFSET(0x18CA43D0)
#define RPG_GAMECORE_REMOVEGLOBALTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA4420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveGlobalTimeSlow_TypeDefinitionIndex = 22822;

	class RemoveGlobalTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SlowKey; // 0x18
		::System::Boolean FadeOut; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEGLOBALTIMESLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A34B6945CE0B921(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveGlobalTimeSlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveGlobalTimeSlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEGLOBALTIMESLOW_METHOD_3_3A34B6945CE0B921_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_04D5E4002A0EAFDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveGlobalTimeSlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveGlobalTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEGLOBALTIMESLOW_METHOD_3_04D5E4002A0EAFDD_OFFSET))(a1, a2);
		}
	};
}
