#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class SummerEventMonsterSpawnConfig; }
namespace System { class Action; }

#define CLASS_1_BFE6568A7584B0E1_CLASS_1_72481DB845550A5F_METHOD_1_EE36A0F111EA4FDE_OFFSET UNITYSDK_OFFSET(0x13A38810)
#define CLASS_1_BFE6568A7584B0E1_CLASS_1_72481DB845550A5F__CTOR_OFFSET UNITYSDK_OFFSET(0x13A38800)

inline static constexpr unsigned int Class_1_BFE6568A7584B0E1_Class_1_72481DB845550A5F_TypeDefinitionIndex = 66373;

class Class_1_BFE6568A7584B0E1_Class_1_72481DB845550A5F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE6568A7584B0E1_CLASS_1_72481DB845550A5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EE36A0F111EA4FDE(::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::SummerEventMonsterSpawnConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BFE6568A7584B0E1_CLASS_1_72481DB845550A5F_METHOD_1_EE36A0F111EA4FDE_OFFSET))(this, a1);
	}
};
