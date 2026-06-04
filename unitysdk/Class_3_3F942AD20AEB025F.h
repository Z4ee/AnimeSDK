#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyCurvePropGroupObjectState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3F942AD20AEB025F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142ECD10)
#define CLASS_3_3F942AD20AEB025F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x142ECD50)
#define CLASS_3_3F942AD20AEB025F__CTOR_OFFSET UNITYSDK_OFFSET(0x142ECCE0)
#define CLASS_3_3F942AD20AEB025F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142ED3F0)

inline static constexpr unsigned int Class_3_3F942AD20AEB025F_TypeDefinitionIndex = 54409;

class Class_3_3F942AD20AEB025F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyCurvePropGroupObjectState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyCurvePropGroupObjectState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyCurvePropGroupObjectState*))((::PBYTE)hIl2Cpp + CLASS_3_3F942AD20AEB025F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F942AD20AEB025F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F942AD20AEB025F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F942AD20AEB025F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
