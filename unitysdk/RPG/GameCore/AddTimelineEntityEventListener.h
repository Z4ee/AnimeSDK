#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TimelineEntityStateChangeCallback; }

#define RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER_METHOD_3_30D3145A18E263D7_OFFSET UNITYSDK_OFFSET(0x16F224E0)
#define RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER_METHOD_3_BF2975C9A753D78B_OFFSET UNITYSDK_OFFSET(0x16F22460)
#define RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F224B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddTimelineEntityEventListener_TypeDefinitionIndex = 18947;

	class AddTimelineEntityEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::Il2CppArray<::RPG::GameCore::TimelineEntityStateChangeCallback*>* StateEnterListener; // 0x20
		::Il2CppArray<::RPG::GameCore::TimelineEntityStateChangeCallback*>* StateLeaveListener; // 0x28
		::Il2CppArray<::RPG::GameCore::TimelineEntityStateChangeCallback*>* StateListener; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStartControlEntity; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEndControlEntity; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPause; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnResumePause; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAddPause; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRemovePause; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeSelected; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeUnselected; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BF2975C9A753D78B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTimelineEntityEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTimelineEntityEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER_METHOD_3_BF2975C9A753D78B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30D3145A18E263D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTimelineEntityEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTimelineEntityEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER_METHOD_3_30D3145A18E263D7_OFFSET))(a1, a2);
		}
	};
}
