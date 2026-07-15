#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REMOVEGLOBALTIMESLOW_METHOD_3_04D5E4002A0EAFDD_OFFSET UNITYSDK_OFFSET(0x1B9CFC10)
#define RPG_GAMECORE_REMOVEGLOBALTIMESLOW_METHOD_3_275EB5DEE5A7D26A_OFFSET UNITYSDK_OFFSET(0x1B9CFBC0)
#define RPG_GAMECORE_REMOVEGLOBALTIMESLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CFC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveGlobalTimeSlow_TypeDefinitionIndex = 22974;

	class RemoveGlobalTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SlowKey; // 0x18
		::System::Boolean FadeOut; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEGLOBALTIMESLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_275EB5DEE5A7D26A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveGlobalTimeSlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveGlobalTimeSlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEGLOBALTIMESLOW_METHOD_3_275EB5DEE5A7D26A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_04D5E4002A0EAFDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveGlobalTimeSlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveGlobalTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEGLOBALTIMESLOW_METHOD_3_04D5E4002A0EAFDD_OFFSET))(a1, a2);
		}
	};
}
