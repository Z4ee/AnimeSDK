#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPPUZZLEEVENTLISTENER_METHOD_3_5A6366B66021B3D7_OFFSET UNITYSDK_OFFSET(0x19A94490)
#define RPG_GAMECORE_PROPPUZZLEEVENTLISTENER_METHOD_3_CF0E121370511922_OFFSET UNITYSDK_OFFSET(0x19A943F0)
#define RPG_GAMECORE_PROPPUZZLEEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A94450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleEventListener_TypeDefinitionIndex = 20368;

	class PropPuzzleEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* InitializedCallback; // 0x18
		::System::Boolean InitializedCallbackLoop; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FinishCallback; // 0x28
		::System::Boolean FinishCallbackLoop; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ResetCallback; // 0x38
		::System::Boolean ResetCallbackLoop; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* QuitCallback; // 0x48
		::System::Boolean QuitCallbackLoop; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailCallback; // 0x58
		::System::Boolean FailCallbackLoop; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF0E121370511922(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTLISTENER_METHOD_3_CF0E121370511922_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A6366B66021B3D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEEVENTLISTENER_METHOD_3_5A6366B66021B3D7_OFFSET))(a1, a2);
		}
	};
}
