#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR_METHOD_3_5296C003FA497B9B_OFFSET UNITYSDK_OFFSET(0x18EC9C60)
#define RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR_METHOD_3_E2E3C2BA929095F2_OFFSET UNITYSDK_OFFSET(0x18EC9CE0)
#define RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC9CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncCharLightAndCameraDir_TypeDefinitionIndex = 21896;

	class SyncCharLightAndCameraDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSync; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5296C003FA497B9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncCharLightAndCameraDir*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncCharLightAndCameraDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR_METHOD_3_5296C003FA497B9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2E3C2BA929095F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncCharLightAndCameraDir* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncCharLightAndCameraDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCCHARLIGHTANDCAMERADIR_METHOD_3_E2E3C2BA929095F2_OFFSET))(a1, a2);
		}
	};
}
