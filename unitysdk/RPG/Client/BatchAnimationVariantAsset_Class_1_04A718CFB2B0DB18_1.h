#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18_1_RESET_OFFSET UNITYSDK_OFFSET(0xB3B95B0)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B9600)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18_1_TypeDefinitionIndex = 64992;

	class BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18_1 : public ::System::Object
	{
	public:
		::System::Int32 Field_1_0; // 0x10
		::System::Int32 Field_1_1; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18_1__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18_1_RESET_OFFSET))(this);
		}
	};
}
