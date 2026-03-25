#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D22D26C61201935.h"
#include "unitysdk/RPG/GameCore/MarbleTargetType.h"

namespace RPG::GameCore { class ActiveMarbleVirtualCamera; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_9C05D2473BED75E6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111418C0)
#define CLASS_3_9C05D2473BED75E6_METHOD_3_EF2E655F74E7E8EA_OFFSET UNITYSDK_OFFSET(0x111417B0)
#define CLASS_3_9C05D2473BED75E6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11140A30)
#define CLASS_3_9C05D2473BED75E6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11141870)
#define CLASS_3_9C05D2473BED75E6_TICK_OFFSET UNITYSDK_OFFSET(0x11141900)
#define CLASS_3_9C05D2473BED75E6__CTOR_OFFSET UNITYSDK_OFFSET(0x11140A10)
#define CLASS_3_9C05D2473BED75E6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111419F0)
#define CLASS_3_9C05D2473BED75E6___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11141960)
#define CLASS_3_9C05D2473BED75E6___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11141970)
#define CLASS_3_9C05D2473BED75E6___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x11141A70)

inline static constexpr unsigned int Class_3_9C05D2473BED75E6_TypeDefinitionIndex = 42292;

class Class_3_9C05D2473BED75E6 : public ::Class_2_5D22D26C61201935
{
public:
	::RPG::GameCore::ActiveMarbleVirtualCamera* Field_3_1; // 0x78
	::RPG::GameCore::TaskContext* Field_3_0; // 0x80

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveMarbleVirtualCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveMarbleVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_3_9C05D2473BED75E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C05D2473BED75E6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C05D2473BED75E6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C05D2473BED75E6_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9C05D2473BED75E6_TICK_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_3_EF2E655F74E7E8EA(::RPG::GameCore::MarbleTargetType a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::MarbleTargetType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9C05D2473BED75E6_METHOD_3_EF2E655F74E7E8EA_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C05D2473BED75E6___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C05D2473BED75E6___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C05D2473BED75E6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9C05D2473BED75E6___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
