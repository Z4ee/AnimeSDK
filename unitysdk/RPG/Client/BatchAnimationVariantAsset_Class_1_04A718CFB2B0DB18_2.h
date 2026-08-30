#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18_2_RESET_OFFSET UNITYSDK_OFFSET(0x19F20B10)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19F20B60)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18_2_TypeDefinitionIndex = 69490;

	class BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18_2 : public ::System::Object
	{
	public:
		::System::Int32 IIELGFGEDPG; // 0x10
		::System::Int32 NOIEMNLMACN; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18_2__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18_2_RESET_OFFSET))(this);
		}
	};
}
