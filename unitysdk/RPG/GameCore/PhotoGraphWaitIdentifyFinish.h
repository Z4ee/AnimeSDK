#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH_METHOD_3_3A148666410E3256_OFFSET UNITYSDK_OFFSET(0x174ADB20)
#define RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH_METHOD_3_3F10581D785A4A33_OFFSET UNITYSDK_OFFSET(0x174ADAA0)
#define RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x174ADAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphWaitIdentifyFinish_TypeDefinitionIndex = 19827;

	class PhotoGraphWaitIdentifyFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* WaitTargetType; // 0x18
		::RPG::GameCore::DynamicFloat* AimNpcID; // 0x20
		::System::Boolean WaitAll; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnIdentifyFinish; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnIdentifyFailed; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPreviewFinish; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F10581D785A4A33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH_METHOD_3_3F10581D785A4A33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A148666410E3256(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHWAITIDENTIFYFINISH_METHOD_3_3A148666410E3256_OFFSET))(a1, a2);
		}
	};
}
