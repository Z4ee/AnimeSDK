#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzlePadBase.h"

#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_INITSTATE_OFFSET UNITYSDK_OFFSET(0xAE8C1B0)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xAE8C210)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xAE8C2B0)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xAE8C260)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAE8C360)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_INITSTATE_OFFSET UNITYSDK_OFFSET(0xAE8C370)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xAE8C380)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xAE8C3A0)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xAE8C390)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleObstacle_TypeDefinitionIndex = 72242;

	class PadsPuzzleObstacle : public ::RPG::Client::Prop::PadsPuzzlePadBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE__CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLERESET_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_INITSTATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_PUZZLERESET_OFFSET))(this);
		}
	};
}
