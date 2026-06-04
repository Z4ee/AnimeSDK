#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RecordOperation; }

#define RPG_GAMECORE_TUTORIALOPERATIONRECORD_METHOD_2_E4D968888D43703E_OFFSET UNITYSDK_OFFSET(0x19E2D5D0)
#define RPG_GAMECORE_TUTORIALOPERATIONRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2D6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialOperationRecord_TypeDefinitionIndex = 17301;

	class TutorialOperationRecord : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RecordOperation*>* OpList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALOPERATIONRECORD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E4D968888D43703E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialOperationRecord*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialOperationRecord*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALOPERATIONRECORD_METHOD_2_E4D968888D43703E_OFFSET))(a1, a2);
		}
	};
}
