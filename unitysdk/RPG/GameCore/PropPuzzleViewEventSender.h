#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleViewEvent.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_METHOD_3_593E79CBE5296D3D_OFFSET UNITYSDK_OFFSET(0x17522EE0)
#define RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_METHOD_3_E00F1A40B5C8D8CE_OFFSET UNITYSDK_OFFSET(0x17522F70)
#define RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17522F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropPuzzleViewEventSender_TypeDefinitionIndex = 20163;

	class PropPuzzleViewEventSender : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PuzzleViewEvent ViewEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_593E79CBE5296D3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleViewEventSender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleViewEventSender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_METHOD_3_593E79CBE5296D3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E00F1A40B5C8D8CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropPuzzleViewEventSender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropPuzzleViewEventSender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPPUZZLEVIEWEVENTSENDER_METHOD_3_E00F1A40B5C8D8CE_OFFSET))(a1, a2);
		}
	};
}
