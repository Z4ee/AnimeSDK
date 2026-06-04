#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddBattleExtraPropertyAddition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_C333C3CFAFDD04CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13554B10)
#define CLASS_3_C333C3CFAFDD04CE_METHOD_3_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x13554A60)
#define CLASS_3_C333C3CFAFDD04CE_METHOD_3_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x13554730)
#define CLASS_3_C333C3CFAFDD04CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13554320)
#define CLASS_3_C333C3CFAFDD04CE__CTOR_OFFSET UNITYSDK_OFFSET(0x135542F0)
#define CLASS_3_C333C3CFAFDD04CE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13554C50)

inline static constexpr unsigned int Class_3_C333C3CFAFDD04CE_TypeDefinitionIndex = 51236;

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

	::System::Void Method_3_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C333C3CFAFDD04CE_METHOD_3_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_3_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C333C3CFAFDD04CE_METHOD_3_BA1BB49741CFDFE1_OFFSET))(this);
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
