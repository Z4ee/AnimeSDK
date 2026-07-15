#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_METHOD_3_40D043E41A473AD4_OFFSET UNITYSDK_OFFSET(0x1B884F30)
#define RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_METHOD_3_481CBBA5183EB411_OFFSET UNITYSDK_OFFSET(0x1B885000)
#define RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B884FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnlockMainStreamingSource_TypeDefinitionIndex = 19719;

	class UnlockMainStreamingSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40D043E41A473AD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockMainStreamingSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockMainStreamingSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_METHOD_3_40D043E41A473AD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_481CBBA5183EB411(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockMainStreamingSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockMainStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKMAINSTREAMINGSOURCE_METHOD_3_481CBBA5183EB411_OFFSET))(a1, a2);
		}
	};
}
