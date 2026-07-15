#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CRPVirtualCameraConfig; }
namespace RPG::GameCore { class VCameraConfig; }

#define CLASS_1_DA0C7637591FF0E1_METHOD_1_2ADA203DD0E27EBA_OFFSET UNITYSDK_OFFSET(0x15580620)
#define CLASS_1_DA0C7637591FF0E1_METHOD_1_3C79AD06B2F036BE_OFFSET UNITYSDK_OFFSET(0x15580690)
#define CLASS_1_DA0C7637591FF0E1_METHOD_1_4DD0D637556DFBB0_OFFSET UNITYSDK_OFFSET(0x15580470)
#define CLASS_1_DA0C7637591FF0E1_METHOD_1_F66623BB977C613B_OFFSET UNITYSDK_OFFSET(0x15580320)
#define CLASS_1_DA0C7637591FF0E1_METHOD_1_FE05CC77EDCFDF51_OFFSET UNITYSDK_OFFSET(0x15580530)
#define CLASS_1_DA0C7637591FF0E1__CTOR_OFFSET UNITYSDK_OFFSET(0x15580700)

inline static constexpr unsigned int Class_1_DA0C7637591FF0E1_TypeDefinitionIndex = 49697;

class Class_1_DA0C7637591FF0E1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA0C7637591FF0E1__CTOR_OFFSET))(this);
	}

	static ::RPG::GameCore::VCameraConfig* Method_1_F66623BB977C613B(::System::Single a1)
	{
		return ((::RPG::GameCore::VCameraConfig*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DA0C7637591FF0E1_METHOD_1_F66623BB977C613B_OFFSET))(a1);
	}

	static ::RPG::GameCore::VCameraConfig* Method_1_4DD0D637556DFBB0()
	{
		return ((::RPG::GameCore::VCameraConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA0C7637591FF0E1_METHOD_1_4DD0D637556DFBB0_OFFSET))();
	}

	static ::RPG::GameCore::VCameraConfig* Method_1_FE05CC77EDCFDF51()
	{
		return ((::RPG::GameCore::VCameraConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA0C7637591FF0E1_METHOD_1_FE05CC77EDCFDF51_OFFSET))();
	}

	static ::System::Void Method_1_2ADA203DD0E27EBA(::RPG::GameCore::VCameraConfig* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DA0C7637591FF0E1_METHOD_1_2ADA203DD0E27EBA_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C79AD06B2F036BE(::RPG::GameCore::CRPVirtualCameraConfig* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CRPVirtualCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DA0C7637591FF0E1_METHOD_1_3C79AD06B2F036BE_OFFSET))(a1);
	}
};
