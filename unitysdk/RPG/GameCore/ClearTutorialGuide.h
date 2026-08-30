#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARTUTORIALGUIDE_METHOD_3_3D427BFBCDCD1FA3_OFFSET UNITYSDK_OFFSET(0x1CFDBA70)
#define RPG_GAMECORE_CLEARTUTORIALGUIDE_METHOD_3_9189CEFCD6116D90_OFFSET UNITYSDK_OFFSET(0x1CFDBA30)
#define RPG_GAMECORE_CLEARTUTORIALGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFDBA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearTutorialGuide_TypeDefinitionIndex = 24070;

	class ClearTutorialGuide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ReleaseAllLock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTUTORIALGUIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9189CEFCD6116D90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearTutorialGuide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearTutorialGuide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTUTORIALGUIDE_METHOD_3_9189CEFCD6116D90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3D427BFBCDCD1FA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearTutorialGuide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearTutorialGuide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARTUTORIALGUIDE_METHOD_3_3D427BFBCDCD1FA3_OFFSET))(a1, a2);
		}
	};
}
