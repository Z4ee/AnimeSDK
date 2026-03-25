#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_METHOD_3_38C43E4F24F5EC03_OFFSET UNITYSDK_OFFSET(0x170AC750)
#define RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_METHOD_3_DB580490AE9AF272_OFFSET UNITYSDK_OFFSET(0x170AC7D0)
#define RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x170AC7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTriggerPerformanceByPhase_TypeDefinitionIndex = 19890;

	class ChimeraTriggerPerformanceByPhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPerfect; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnComplete; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnJustSoSo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_38C43E4F24F5EC03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_METHOD_3_38C43E4F24F5EC03_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB580490AE9AF272(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_METHOD_3_DB580490AE9AF272_OFFSET))(a1, a2);
		}
	};
}
