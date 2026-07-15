#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_METHOD_3_57D893F1263B05AE_OFFSET UNITYSDK_OFFSET(0x1BEB5230)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_METHOD_3_81B1405A7B64625F_OFFSET UNITYSDK_OFFSET(0x1BEB51B0)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB5220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartSplineMoveAction_TypeDefinitionIndex = 17926;

	class FiveDimStartSplineMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_81B1405A7B64625F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartSplineMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartSplineMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_METHOD_3_81B1405A7B64625F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57D893F1263B05AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartSplineMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartSplineMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_METHOD_3_57D893F1263B05AE_OFFSET))(a1, a2);
		}
	};
}
