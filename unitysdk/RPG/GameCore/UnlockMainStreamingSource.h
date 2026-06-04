#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_METHOD_3_481CBBA5183EB411_OFFSET UNITYSDK_OFFSET(0x19E380A0)
#define RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_METHOD_3_BEB953562151DCDD_OFFSET UNITYSDK_OFFSET(0x19E37F90)
#define RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E38070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnlockMainStreamingSource_TypeDefinitionIndex = 19363;

	class UnlockMainStreamingSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BEB953562151DCDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockMainStreamingSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockMainStreamingSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_METHOD_3_BEB953562151DCDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_481CBBA5183EB411(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockMainStreamingSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockMainStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_METHOD_3_481CBBA5183EB411_OFFSET))(a1, a2);
		}
	};
}
