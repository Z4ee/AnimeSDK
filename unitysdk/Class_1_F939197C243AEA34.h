#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8754A51BC854E440;
namespace RPG::GameCore { class FiveDimLightningConfig; }

#define CLASS_1_F939197C243AEA34_CLEAR_OFFSET UNITYSDK_OFFSET(0x167806E0)
#define CLASS_1_F939197C243AEA34__CTOR_OFFSET UNITYSDK_OFFSET(0x16780760)

inline static constexpr unsigned int Class_1_F939197C243AEA34_TypeDefinitionIndex = 33537;

class Class_1_F939197C243AEA34 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimLightningConfig* Field_1_0; // 0x10
	::Class_1_8754A51BC854E440* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F939197C243AEA34__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F939197C243AEA34_CLEAR_OFFSET))(this);
	}
};
