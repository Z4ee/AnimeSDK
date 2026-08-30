#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20E36FD2269615D8;
namespace RPG::GameCore { class FiveDimLightningConfig; }

#define CLASS_1_F939197C243AEA34_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C424ED0)
#define CLASS_1_F939197C243AEA34__CTOR_OFFSET UNITYSDK_OFFSET(0x1C424F50)

inline static constexpr unsigned int Class_1_F939197C243AEA34_TypeDefinitionIndex = 41877;

class Class_1_F939197C243AEA34 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimLightningConfig* EABKOHGCHFP; // 0x10
	::Class_1_20E36FD2269615D8* BPAPBAFOMCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F939197C243AEA34__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F939197C243AEA34_CLEAR_OFFSET))(this);
	}
};
