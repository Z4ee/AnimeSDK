#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX_METHOD_3_55D3B5FC59A329DE_OFFSET UNITYSDK_OFFSET(0x18825960)
#define RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX_METHOD_3_878FC6A6A2A479D2_OFFSET UNITYSDK_OFFSET(0x18825850)
#define RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x18825930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CollectHeartDialCameraIndex_TypeDefinitionIndex = 20080;

	class CollectHeartDialCameraIndex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_878FC6A6A2A479D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectHeartDialCameraIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectHeartDialCameraIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX_METHOD_3_878FC6A6A2A479D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_55D3B5FC59A329DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectHeartDialCameraIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectHeartDialCameraIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTHEARTDIALCAMERAINDEX_METHOD_3_55D3B5FC59A329DE_OFFSET))(a1, a2);
		}
	};
}
