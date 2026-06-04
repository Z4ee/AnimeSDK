#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER_METHOD_3_69397066C01BB7C9_OFFSET UNITYSDK_OFFSET(0x19A94AC0)
#define RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER_METHOD_3_A5AE181562965240_OFFSET UNITYSDK_OFFSET(0x19A94B40)
#define RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A94B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleMissionResetEventListener_TypeDefinitionIndex = 20785;

	class PropPuzzleMissionResetEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MissionID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69397066C01BB7C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleMissionResetEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleMissionResetEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER_METHOD_3_69397066C01BB7C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5AE181562965240(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleMissionResetEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleMissionResetEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEMISSIONRESETEVENTLISTENER_METHOD_3_A5AE181562965240_OFFSET))(a1, a2);
		}
	};
}
