#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION_METHOD_4_67300F6416F064A8_OFFSET UNITYSDK_OFFSET(0x1D6B17B0)
#define RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION_METHOD_4_FAA4575D0A92240D_OFFSET UNITYSDK_OFFSET(0x1D6B1830)
#define RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B1820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopSplineMoveAction_TypeDefinitionIndex = 18656;

	class FiveDimStopSplineMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_67300F6416F064A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopSplineMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopSplineMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION_METHOD_4_67300F6416F064A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FAA4575D0A92240D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopSplineMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopSplineMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPSPLINEMOVEACTION_METHOD_4_FAA4575D0A92240D_OFFSET))(a1, a2);
		}
	};
}
