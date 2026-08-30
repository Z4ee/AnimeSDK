#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_METHOD_3_4240564C8455DD72_OFFSET UNITYSDK_OFFSET(0x1DB80260)
#define RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_METHOD_3_4CC40DC71D842EEF_OFFSET UNITYSDK_OFFSET(0x1DB80190)
#define RPG_GAMECORE_RELEASEENVPROFILEFORSTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB80250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReleaseEnvProfileForStory_TypeDefinitionIndex = 21654;

	class ReleaseEnvProfileForStory : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILEFORSTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4CC40DC71D842EEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseEnvProfileForStory*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseEnvProfileForStory*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_METHOD_3_4CC40DC71D842EEF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4240564C8455DD72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseEnvProfileForStory* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseEnvProfileForStory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_METHOD_3_4240564C8455DD72_OFFSET))(a1, a2);
		}
	};
}
