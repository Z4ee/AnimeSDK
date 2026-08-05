#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AssetIndexContainer_Class_1_18022CE16F7A069A_Class_1_A3D745FFB9FB9E8F; }
namespace MoleMole::Config { class IndexAssetRef; }
namespace MoleMole::Config { class IndexBlockRef; }
namespace MoleMole::Config { class IndexBundleRef; }

#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_18022CE16F7A069A__CTOR_OFFSET UNITYSDK_OFFSET(0x16C34860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndexContainer_Class_1_18022CE16F7A069A_TypeDefinitionIndex = 54204;

	class AssetIndexContainer_Class_1_18022CE16F7A069A : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* Field_1_7; // 0x10
		::Il2CppArray<::MoleMole::Config::IndexBlockRef*>* Field_1_5; // 0x18
		::Il2CppArray<::MoleMole::Config::IndexBundleRef*>* Field_1_4; // 0x20
		::Il2CppArray<::MoleMole::Config::IndexAssetRef*>* Field_1_6; // 0x28
		::MoleMole::Config::AssetIndexContainer_Class_1_18022CE16F7A069A_Class_1_A3D745FFB9FB9E8F* Field_1_11; // 0x30
		::System::Int32 Field_1_0; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_18022CE16F7A069A__CTOR_OFFSET))(this);
		}
	};
}
