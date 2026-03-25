#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_METHOD_3_4240564C8455DD72_OFFSET UNITYSDK_OFFSET(0x1758AF40)
#define RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_METHOD_3_CF5AD398A5D10406_OFFSET UNITYSDK_OFFSET(0x1758AE30)
#define RPG_GAMECORE_RELEASEENVPROFILEFORSTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1758AF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReleaseEnvProfileForStory_TypeDefinitionIndex = 20072;

	class ReleaseEnvProfileForStory : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILEFORSTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF5AD398A5D10406(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseEnvProfileForStory*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseEnvProfileForStory*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_METHOD_3_CF5AD398A5D10406_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4240564C8455DD72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseEnvProfileForStory* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseEnvProfileForStory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_METHOD_3_4240564C8455DD72_OFFSET))(a1, a2);
		}
	};
}
