#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_3948F09825CE1BA8;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryRequestEnterRegion; }

#define CLASS_3_FBAB9B763355A599_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF23350)
#define CLASS_3_FBAB9B763355A599_METHOD_3_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0xAF23A90)
#define CLASS_3_FBAB9B763355A599_METHOD_3_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0xAF238C0)
#define CLASS_3_FBAB9B763355A599_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF23500)
#define CLASS_3_FBAB9B763355A599_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF23440)
#define CLASS_3_FBAB9B763355A599__CTOR_OFFSET UNITYSDK_OFFSET(0xAF232B0)
#define CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF23B90)
#define CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF23BA0)

inline static constexpr unsigned int Class_3_FBAB9B763355A599_TypeDefinitionIndex = 54943;

class Class_3_FBAB9B763355A599 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TryRequestEnterRegion*>
{
public:
	::RPG::GameCore::TryRequestEnterRegion* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30
	::Class_1_3948F09825CE1BA8* Field_3_2; // 0x38
	::RPG::GameCore::TaskContext* Field_3_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryRequestEnterRegion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryRequestEnterRegion*))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_METHOD_3_D1305BC17A89C222_OFFSET))(this);
	}

	::System::Void Method_3_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_METHOD_3_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
