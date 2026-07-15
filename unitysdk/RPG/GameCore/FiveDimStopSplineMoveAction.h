#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION_METHOD_3_2C8ED0E9B9E359FB_OFFSET UNITYSDK_OFFSET(0x1BEB5AC0)
#define RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION_METHOD_3_CD6DF8C18994B7DA_OFFSET UNITYSDK_OFFSET(0x1BEB5B40)
#define RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB5B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopSplineMoveAction_TypeDefinitionIndex = 17927;

	class FiveDimStopSplineMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2C8ED0E9B9E359FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopSplineMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopSplineMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION_METHOD_3_2C8ED0E9B9E359FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD6DF8C18994B7DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopSplineMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopSplineMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION_METHOD_3_CD6DF8C18994B7DA_OFFSET))(a1, a2);
		}
	};
}
