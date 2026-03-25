#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARTUTORIALGUIDE_METHOD_3_3D427BFBCDCD1FA3_OFFSET UNITYSDK_OFFSET(0x170B3B70)
#define RPG_GAMECORE_CLEARTUTORIALGUIDE_METHOD_3_80014F6E1815099A_OFFSET UNITYSDK_OFFSET(0x170B3AF0)
#define RPG_GAMECORE_CLEARTUTORIALGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x170B3B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearTutorialGuide_TypeDefinitionIndex = 22393;

	class ClearTutorialGuide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ReleaseAllLock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTUTORIALGUIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80014F6E1815099A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearTutorialGuide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearTutorialGuide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTUTORIALGUIDE_METHOD_3_80014F6E1815099A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3D427BFBCDCD1FA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearTutorialGuide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearTutorialGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTUTORIALGUIDE_METHOD_3_3D427BFBCDCD1FA3_OFFSET))(a1, a2);
		}
	};
}
