#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzlePadBase.h"

#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_INITSTATE_OFFSET UNITYSDK_OFFSET(0xA10BC60)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xA10BCC0)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xA10BD60)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xA10BD10)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA10BE10)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_INITSTATE_OFFSET UNITYSDK_OFFSET(0xA10BE20)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xA10BE30)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xA10BE50)
#define RPG_CLIENT_PROP_PADSPUZZLEOBSTACLE___IFIXBASEPROXY_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xA10BE40)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleObstacle_TypeDefinitionIndex = 64195;

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
