#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18_RESET_OFFSET UNITYSDK_OFFSET(0x9DE2640)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE2690)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18_TypeDefinitionIndex = 64071;

	class BatchAnimationVariantAsset_Class_1_04A718CFB2B0DB18 : public ::System::Object
	{
	public:
		::System::Int32 Field_1_1; // 0x10
		::System::Int32 Field_1_0; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_CLASS_1_04A718CFB2B0DB18_RESET_OFFSET))(this);
		}
	};
}
