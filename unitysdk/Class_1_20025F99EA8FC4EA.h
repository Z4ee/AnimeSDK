#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4C3F9D9CF221EFEC;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCasterToTargetConfig; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_20025F99EA8FC4EA_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x158FB880)
#define CLASS_1_20025F99EA8FC4EA_INIT_OFFSET UNITYSDK_OFFSET(0x158FA9A0)
#define CLASS_1_20025F99EA8FC4EA_METHOD_1_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x158FB8C0)
#define CLASS_1_20025F99EA8FC4EA_METHOD_1_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x158FAAE0)
#define CLASS_1_20025F99EA8FC4EA_METHOD_1_E78A40FE178718CB_1_OFFSET UNITYSDK_OFFSET(0x158FD7A0)
#define CLASS_1_20025F99EA8FC4EA_METHOD_1_E78A40FE178718CB_OFFSET UNITYSDK_OFFSET(0x158FD5F0)
#define CLASS_1_20025F99EA8FC4EA_REFRESH_OFFSET UNITYSDK_OFFSET(0x158FB840)
#define CLASS_1_20025F99EA8FC4EA_RESET_OFFSET UNITYSDK_OFFSET(0x158FAA40)
#define CLASS_1_20025F99EA8FC4EA__CTOR_OFFSET UNITYSDK_OFFSET(0x158FD950)

inline static constexpr unsigned int Class_1_20025F99EA8FC4EA_TypeDefinitionIndex = 69557;

class Class_1_20025F99EA8FC4EA : public ::System::Object
{
public:
	::RPG::Client::CameraFightStateCasterToTargetConfig* MAFIONBKPIE; // 0x10
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x18
	::Class_2_4C3F9D9CF221EFEC* LEOGIKABIGF; // 0x20
	::UnityEngine::Vector3 OEGAAMGHNCP; // 0x28
	::UnityEngine::Vector3 EBJIPOAJLBG; // 0x34
	::System::Nullable_1<::UnityEngine::Vector3> HAKKPBCKEOM; // 0x40
	::System::Nullable_1<::UnityEngine::Vector3> OCBKABJKEHG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20025F99EA8FC4EA__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_4C3F9D9CF221EFEC* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C3F9D9CF221EFEC*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_20025F99EA8FC4EA_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20025F99EA8FC4EA_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20025F99EA8FC4EA_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20025F99EA8FC4EA_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Method_1_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20025F99EA8FC4EA_METHOD_1_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void Method_1_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20025F99EA8FC4EA_METHOD_1_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_E78A40FE178718CB(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20025F99EA8FC4EA_METHOD_1_E78A40FE178718CB_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_E78A40FE178718CB_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20025F99EA8FC4EA_METHOD_1_E78A40FE178718CB_1_OFFSET))(this, a1, a2, a3);
	}
};
