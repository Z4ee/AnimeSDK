#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_327797156B716E98.h"
#include "unitysdk/Enum_3_8252736F97D4CFA3.h"
#include "unitysdk/Enum_3_D9B1609F715078CB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_9CFB0DDEB5281E10;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class MonoUIMover; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIMOVERMODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1687A9E0)
#define MOLEMOLE_MONOUIMOVERMODE_CLEARHANDLER_OFFSET UNITYSDK_OFFSET(0x1687AE00)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1687B400)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x1687AB70)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_218124418542E081_OFFSET UNITYSDK_OFFSET(0x1687B040)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x1687B630)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x1687AED0)
#define MOLEMOLE_MONOUIMOVERMODE_METHOD_5_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x1687B090)
#define MOLEMOLE_MONOUIMOVERMODE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1687ABC0)
#define MOLEMOLE_MONOUIMOVERMODE_SETMOVETYPE_OFFSET UNITYSDK_OFFSET(0x1687ACE0)
#define MOLEMOLE_MONOUIMOVERMODE_SETPINGPONGTYPE_OFFSET UNITYSDK_OFFSET(0x1687AD70)
#define MOLEMOLE_MONOUIMOVERMODE_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x1687AC20)
#define MOLEMOLE_MONOUIMOVERMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1687AE60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIMoverMode_TypeDefinitionIndex = 73891;

	class MonoUIMoverMode : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* moveArea; // 0x18
		::Enum_3_D9B1609F715078CB moveMode; // 0x20
		::Enum_3_8252736F97D4CFA3 modePingPongDirection; // 0x24
		::Enum_3_327797156B716E98 pingPongTurn; // 0x28
		::System::Single turnTime; // 0x2C
		::UnityEngine::RectTransform* replaceReversalScaleTarget; // 0x30
		::UnityEngine::RectTransform* Field_5_11; // 0x38
		::MoleMole::MonoUIMover* Field_5_10; // 0x40
		::System::Boolean Field_5_9; // 0x48
		::UnityEngine::Vector2 Field_5_8; // 0x4C
		::UnityEngine::Vector2 Field_5_15; // 0x54
		::Class_1_9CFB0DDEB5281E10* Field_5_14; // 0x60
		::DG::Tweening::Tween* Field_5_13; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetMoveType(::Enum_3_D9B1609F715078CB a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D9B1609F715078CB))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_SETMOVETYPE_OFFSET))(this, a1);
		}

		::System::Void SetPingPongType(::Enum_3_8252736F97D4CFA3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_8252736F97D4CFA3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_SETPINGPONGTYPE_OFFSET))(this, a1);
		}

		::System::Void StopMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_STOPMOVE_OFFSET))(this);
		}

		::System::Void ClearHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_CLEARHANDLER_OFFSET))(this);
		}

		::System::Void Method_5_8CA88D55ECEFAD59()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_8CA88D55ECEFAD59_OFFSET))(this);
		}

		::System::Void Method_5_218124418542E081()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_218124418542E081_OFFSET))(this);
		}

		::System::Void Method_5_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_10054BB010E03EDD_OFFSET))(this);
		}

		::System::Void Method_5_29352E75304CF2A0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_29352E75304CF2A0_OFFSET))(this);
		}

		::System::Void Method_5_E69AA2E64A20143D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_E69AA2E64A20143D_OFFSET))(this);
		}

		::System::Void Method_5_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_METHOD_5_0FD0EC313FAAB75A_OFFSET))(this);
		}
	};
}
