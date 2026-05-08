#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_18022CE16F7A069A_CLASS_1_A3D745FFB9FB9E8F__CTOR_OFFSET UNITYSDK_OFFSET(0x11022AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndexContainer_Class_1_18022CE16F7A069A_Class_1_A3D745FFB9FB9E8F_TypeDefinitionIndex = 55238;

	class AssetIndexContainer_Class_1_18022CE16F7A069A_Class_1_A3D745FFB9FB9E8F : public ::System::Object
	{
	public:
		::System::Int64 Field_1_2; // 0x10
		::System::Int64 Field_1_0; // 0x18
		::System::Int64 Field_1_4; // 0x20
		::System::Int64 Field_1_3; // 0x28
		::System::Int64 Field_1_1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_18022CE16F7A069A_CLASS_1_A3D745FFB9FB9E8F__CTOR_OFFSET))(this);
		}
	};
}
