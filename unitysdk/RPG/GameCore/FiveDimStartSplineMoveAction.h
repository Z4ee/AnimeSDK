#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_METHOD_4_284435AA3EF64EC9_OFFSET UNITYSDK_OFFSET(0x1D6B0F20)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_METHOD_4_48F2299754410774_OFFSET UNITYSDK_OFFSET(0x1D6B0EA0)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B0F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartSplineMoveAction_TypeDefinitionIndex = 18655;

	class FiveDimStartSplineMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_48F2299754410774(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartSplineMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartSplineMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_METHOD_4_48F2299754410774_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_284435AA3EF64EC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartSplineMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartSplineMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_METHOD_4_284435AA3EF64EC9_OFFSET))(a1, a2);
		}
	};
}
