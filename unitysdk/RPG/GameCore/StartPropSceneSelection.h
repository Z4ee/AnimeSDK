#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARTPROPSCENESELECTION_METHOD_3_8C03A9402CD9F962_OFFSET UNITYSDK_OFFSET(0x19CB8CB0)
#define RPG_GAMECORE_STARTPROPSCENESELECTION_METHOD_3_9B0BAF52964D8013_OFFSET UNITYSDK_OFFSET(0x19CB8C20)
#define RPG_GAMECORE_STARTPROPSCENESELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB8C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartPropSceneSelection_TypeDefinitionIndex = 20803;

	class StartPropSceneSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MultiSelect; // 0x18
		::System::Single ClickCd; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPSCENESELECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B0BAF52964D8013(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartPropSceneSelection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartPropSceneSelection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPSCENESELECTION_METHOD_3_9B0BAF52964D8013_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8C03A9402CD9F962(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartPropSceneSelection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartPropSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPSCENESELECTION_METHOD_3_8C03A9402CD9F962_OFFSET))(a1, a2);
		}
	};
}
