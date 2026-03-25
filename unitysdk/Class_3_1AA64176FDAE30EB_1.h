#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class ResetAllPuzzleStatesClientOnlyV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1AA64176FDAE30EB_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x881C1A0)
#define CLASS_3_1AA64176FDAE30EB_1_METHOD_3_E465AA180F56F823_OFFSET UNITYSDK_OFFSET(0x881C6D0)
#define CLASS_3_1AA64176FDAE30EB_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x881C1F0)
#define CLASS_3_1AA64176FDAE30EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x881C170)
#define CLASS_3_1AA64176FDAE30EB_1__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x881CB20)
#define CLASS_3_1AA64176FDAE30EB_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x881CB30)

inline static constexpr unsigned int Class_3_1AA64176FDAE30EB_1_TypeDefinitionIndex = 47128;

class Class_3_1AA64176FDAE30EB_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2*>
{
public:
	::RPG::Client::RuntimeGroupManager* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnlyV2*))((::PBYTE)hIl2Cpp + CLASS_3_1AA64176FDAE30EB_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AA64176FDAE30EB_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AA64176FDAE30EB_1_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* Method_3_E465AA180F56F823(::RPG::GameCore::DynamicString* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3, ::System::UInt32& a4, ::System::UInt32& a5)
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID, ::RPG::GameCore::DynamicString*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_1AA64176FDAE30EB_1_METHOD_3_E465AA180F56F823_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AA64176FDAE30EB_1__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AA64176FDAE30EB_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
