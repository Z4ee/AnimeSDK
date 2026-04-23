#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17D64AC4446CD8E;
namespace RPG::GameCore { class FiveDimLightningConfig; }

#define CLASS_1_F939197C243AEA34_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EE58F0)
#define CLASS_1_F939197C243AEA34__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE5970)

inline static constexpr unsigned int Class_1_F939197C243AEA34_TypeDefinitionIndex = 39336;

class Class_1_F939197C243AEA34 : public ::System::Object
{
public:
	::Class_1_D17D64AC4446CD8E* Field_1_1; // 0x10
	::RPG::GameCore::FiveDimLightningConfig* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F939197C243AEA34__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F939197C243AEA34_CLEAR_OFFSET))(this);
	}
};
