#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/System/Object.h"

class Class_1_12210BFF9F8CB0CA;
class Class_1_D8203AFB32E9259C;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_26810D8FDC897D02_METHOD_1_6C5FAA36997AA199_OFFSET UNITYSDK_OFFSET(0x18DBCB40)
#define CLASS_1_26810D8FDC897D02_METHOD_1_A91AEBB57105F212_OFFSET UNITYSDK_OFFSET(0x18DBCAC0)
#define CLASS_1_26810D8FDC897D02_METHOD_1_C269CCA5765CA0B8_OFFSET UNITYSDK_OFFSET(0x18DBCEB0)
#define CLASS_1_26810D8FDC897D02_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x18DBC950)
#define CLASS_1_26810D8FDC897D02_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x18DBC9F0)
#define CLASS_1_26810D8FDC897D02__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBD0B0)

inline static constexpr unsigned int Class_1_26810D8FDC897D02_TypeDefinitionIndex = 51662;

class Class_1_26810D8FDC897D02 : public ::System::Object
{
public:
	::Class_1_12210BFF9F8CB0CA* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_1_D8203AFB32E9259C*, ::RPG::GameCore::GameEntityList*>* Field_1_1; // 0x18
	::RPG::GameCore::GameWorld* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26810D8FDC897D02__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_26810D8FDC897D02_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26810D8FDC897D02_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_A91AEBB57105F212(::Class_1_D8203AFB32E9259C* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_1_26810D8FDC897D02_METHOD_1_A91AEBB57105F212_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6C5FAA36997AA199(::Class_1_D8203AFB32E9259C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*))((::PBYTE)hIl2Cpp + CLASS_1_26810D8FDC897D02_METHOD_1_6C5FAA36997AA199_OFFSET))(this, a1);
	}

	::System::Void Method_1_C269CCA5765CA0B8(::Class_1_D8203AFB32E9259C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8203AFB32E9259C*))((::PBYTE)hIl2Cpp + CLASS_1_26810D8FDC897D02_METHOD_1_C269CCA5765CA0B8_OFFSET))(this, a1);
	}
};
