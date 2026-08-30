#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_METHOD_3_57D893F1263B05AE_OFFSET UNITYSDK_OFFSET(0x1D87D890)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION_METHOD_3_81B1405A7B64625F_OFFSET UNITYSDK_OFFSET(0x1D87D810)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87D880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartSplineMoveAction_TypeDefinitionIndex = 18446;

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
