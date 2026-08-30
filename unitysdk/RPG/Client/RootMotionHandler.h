#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1025;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define RPG_CLIENT_ROOTMOTIONHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x16A1D040)
#define RPG_CLIENT_ROOTMOTIONHANDLER_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x16A1D1C0)
#define RPG_CLIENT_ROOTMOTIONHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16A1D520)
#define RPG_CLIENT_ROOTMOTIONHANDLER_REGISTERMOVEHANDLER_OFFSET UNITYSDK_OFFSET(0x16A1D5D0)
#define RPG_CLIENT_ROOTMOTIONHANDLER_START_OFFSET UNITYSDK_OFFSET(0x16A1D150)
#define RPG_CLIENT_ROOTMOTIONHANDLER_UNREGISTERMOVEHANDLER_OFFSET UNITYSDK_OFFSET(0x16A1D9B0)
#define RPG_CLIENT_ROOTMOTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1DA40)

namespace RPG::Client
{
	inline static constexpr unsigned int RootMotionHandler_TypeDefinitionIndex = 68788;

	class RootMotionHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean DIOEAJEHHND; // 0x18
		::System::Boolean EnableRootMotion; // 0x19
		::System::Boolean ApplyRootMotion; // 0x1A
		::UnityEngine::Animator* APPGGMLEPLN; // 0x20
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1025*>* DGFJPLIODDK; // 0x28
		::UnityEngine::RuntimeAnimatorController* OHBKPGJFBPN; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_START_OFFSET))(this);
		}

		::System::Void OnAnimatorMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_ONANIMATORMOVE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_ONDESTROY_OFFSET))(this);
		}

		::Struct_2_2B16FFFF87B43037 RegisterMoveHandler(::Class_0_16E4307DCC419505_1025* a1)
		{
			return ((::Struct_2_2B16FFFF87B43037(*)(::PVOID, ::Class_0_16E4307DCC419505_1025*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_REGISTERMOVEHANDLER_OFFSET))(this, a1);
		}

		::System::Void UnregisterMoveHandler(::Class_0_16E4307DCC419505_1025* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1025*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONHANDLER_UNREGISTERMOVEHANDLER_OFFSET))(this, a1);
		}
	};
}
