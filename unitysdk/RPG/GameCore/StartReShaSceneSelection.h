#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_STARTRESHASCENESELECTION_METHOD_3_17260249546673F2_OFFSET UNITYSDK_OFFSET(0x18E9BBB0)
#define RPG_GAMECORE_STARTRESHASCENESELECTION_METHOD_3_271E63C111150FCB_OFFSET UNITYSDK_OFFSET(0x18E9BB30)
#define RPG_GAMECORE_STARTRESHASCENESELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9BB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartReShaSceneSelection_TypeDefinitionIndex = 20886;

	class StartReShaSceneSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CameraAnchor; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnConfirm; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReturn; // 0x28
		::RPG::GameCore::DynamicString* PlanetDisplayID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTRESHASCENESELECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_271E63C111150FCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartReShaSceneSelection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartReShaSceneSelection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTRESHASCENESELECTION_METHOD_3_271E63C111150FCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_17260249546673F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartReShaSceneSelection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartReShaSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTRESHASCENESELECTION_METHOD_3_17260249546673F2_OFFSET))(a1, a2);
		}
	};
}
