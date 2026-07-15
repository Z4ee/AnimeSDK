#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphResultPredicate; }

#define RPG_GAMECORE_PHOTOGRAPHSHOTRESULTCONDITION_METHOD_2_B7F6BBF267E5D5C9_OFFSET UNITYSDK_OFFSET(0x1B4C4230)
#define RPG_GAMECORE_PHOTOGRAPHSHOTRESULTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C4480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphShotResultCondition_TypeDefinitionIndex = 20852;

	class PhotoGraphShotResultCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID TargetConditionName; // 0x10
		::Il2CppArray<::RPG::GameCore::PhotoGraphResultPredicate*>* ShotResultCondition; // 0x20
		::RPG::GameCore::PhotoGraphFovLevel TargetFovLevel; // 0x28
		::System::Boolean AutoSnapFovLevel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSHOTRESULTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B7F6BBF267E5D5C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphShotResultCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphShotResultCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSHOTRESULTCONDITION_METHOD_2_B7F6BBF267E5D5C9_OFFSET))(a1, a2);
		}
	};
}
