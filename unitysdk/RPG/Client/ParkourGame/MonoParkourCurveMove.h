#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BGCurveExtention;
namespace RPG::Client::ParkourGame { class MonoParkourCurveMoveItem; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC333F40)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE_METHOD_5_5EA00B7C45AF82A4_OFFSET UNITYSDK_OFFSET(0xC333FE0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0xC334410)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourCurveMove_TypeDefinitionIndex = 69215;

	class MonoParkourCurveMove : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::ParkourGame::MonoParkourCurveMoveItem*>* Items; // 0x18
		::BGCurveExtention* Curve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_5EA00B7C45AF82A4(::RPG::Client::ParkourGame::MonoParkourCurveMoveItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCurveMoveItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCURVEMOVE_METHOD_5_5EA00B7C45AF82A4_OFFSET))(this, a1);
		}
	};
}
