#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP_METHOD_3_36A6F02CD836E4DE_OFFSET UNITYSDK_OFFSET(0x1D328AD0)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP_METHOD_3_557B2C94F2DA5F13_OFFSET UNITYSDK_OFFSET(0x1D328B90)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D328B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContaierProp_TypeDefinitionIndex = 17320;

	class PhotoGraphAimContaierProp : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::RPG::GameCore::DynamicFloat* AimPropID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36A6F02CD836E4DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContaierProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContaierProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP_METHOD_3_36A6F02CD836E4DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_557B2C94F2DA5F13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContaierProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContaierProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERPROP_METHOD_3_557B2C94F2DA5F13_OFFSET))(a1, a2);
		}
	};
}
