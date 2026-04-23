#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddBattleExtraPropertyAddition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_C333C3CFAFDD04CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1247DEA0)
#define CLASS_3_C333C3CFAFDD04CE_METHOD_3_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x1247DE00)
#define CLASS_3_C333C3CFAFDD04CE_METHOD_3_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0x1247DA80)
#define CLASS_3_C333C3CFAFDD04CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1247D680)
#define CLASS_3_C333C3CFAFDD04CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1247D650)
#define CLASS_3_C333C3CFAFDD04CE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1247DFA0)

inline static constexpr unsigned int Class_3_C333C3CFAFDD04CE_TypeDefinitionIndex = 50569;

class Class_3_C333C3CFAFDD04CE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddBattleExtraPropertyAddition*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddBattleExtraPropertyAddition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddBattleExtraPropertyAddition*))((::PBYTE)hIl2Cpp + CLASS_3_C333C3CFAFDD04CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C333C3CFAFDD04CE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C333C3CFAFDD04CE_METHOD_3_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_3_CC15D6CD4D3CC816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C333C3CFAFDD04CE_METHOD_3_CC15D6CD4D3CC816_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C333C3CFAFDD04CE_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C333C3CFAFDD04CE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
