#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class ResetAllPuzzleStatesClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1AA64176FDAE30EB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD23300)
#define CLASS_3_1AA64176FDAE30EB_METHOD_3_E465AA180F56F823_OFFSET UNITYSDK_OFFSET(0xAD238F0)
#define CLASS_3_1AA64176FDAE30EB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD23350)
#define CLASS_3_1AA64176FDAE30EB__CTOR_OFFSET UNITYSDK_OFFSET(0xAD232D0)
#define CLASS_3_1AA64176FDAE30EB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD23BD0)

inline static constexpr unsigned int Class_3_1AA64176FDAE30EB_TypeDefinitionIndex = 54584;

class Class_3_1AA64176FDAE30EB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetAllPuzzleStatesClientOnly*>
{
public:
	::RPG::Client::RuntimeGroupManager* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetAllPuzzleStatesClientOnly*))((::PBYTE)hIl2Cpp + CLASS_3_1AA64176FDAE30EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AA64176FDAE30EB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AA64176FDAE30EB_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* Method_3_E465AA180F56F823(::RPG::GameCore::DynamicString* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3, ::System::UInt32& a4, ::System::UInt32& a5)
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID, ::RPG::GameCore::DynamicString*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_1AA64176FDAE30EB_METHOD_3_E465AA180F56F823_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AA64176FDAE30EB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
