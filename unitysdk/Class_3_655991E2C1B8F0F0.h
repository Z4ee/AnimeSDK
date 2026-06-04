#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_3948F09825CE1BA8;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryCancelEnterRegion; }

#define CLASS_3_655991E2C1B8F0F0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9F3A40)
#define CLASS_3_655991E2C1B8F0F0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9F3AD0)
#define CLASS_3_655991E2C1B8F0F0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9F3A80)
#define CLASS_3_655991E2C1B8F0F0__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F3A10)
#define CLASS_3_655991E2C1B8F0F0___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9F3B70)
#define CLASS_3_655991E2C1B8F0F0___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9F3BB0)

inline static constexpr unsigned int Class_3_655991E2C1B8F0F0_TypeDefinitionIndex = 54942;

class Class_3_655991E2C1B8F0F0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TryCancelEnterRegion*>
{
public:
	::Class_1_3948F09825CE1BA8* Field_3_0; // 0x28
	::RPG::GameCore::TaskContext* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryCancelEnterRegion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryCancelEnterRegion*))((::PBYTE)hIl2Cpp + CLASS_3_655991E2C1B8F0F0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_655991E2C1B8F0F0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_655991E2C1B8F0F0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_655991E2C1B8F0F0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_655991E2C1B8F0F0___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_655991E2C1B8F0F0___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
