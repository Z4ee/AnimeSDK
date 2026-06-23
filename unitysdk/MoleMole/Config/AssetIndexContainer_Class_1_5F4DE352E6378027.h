#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_5F4DE352E6378027_METHOD_1_EC90259991730611_OFFSET UNITYSDK_OFFSET(0x144D22B0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_5F4DE352E6378027__CTOR_OFFSET UNITYSDK_OFFSET(0x144D22A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndexContainer_Class_1_5F4DE352E6378027_TypeDefinitionIndex = 40836;

	class AssetIndexContainer_Class_1_5F4DE352E6378027 : public ::System::Object
	{
	public:
		::System::Int32 Field_1_5; // 0x10
		::System::Int32 Field_1_2; // 0x14
		::System::Int32 Field_1_3; // 0x18
		::System::Int32 Field_1_1; // 0x1C
		::System::Int32 Field_1_0; // 0x20
		::System::Int32 Field_1_4; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_5F4DE352E6378027__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_EC90259991730611(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_5F4DE352E6378027_METHOD_1_EC90259991730611_OFFSET))(this, a1);
		}
	};
}
