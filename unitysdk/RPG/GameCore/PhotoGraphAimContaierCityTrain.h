#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN_METHOD_3_05381F0761249630_OFFSET UNITYSDK_OFFSET(0x19A02FB0)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN_METHOD_3_EC54420CBD7AF571_OFFSET UNITYSDK_OFFSET(0x19A03070)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19A03030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContaierCityTrain_TypeDefinitionIndex = 16657;

	class PhotoGraphAimContaierCityTrain : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05381F0761249630(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContaierCityTrain*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContaierCityTrain*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN_METHOD_3_05381F0761249630_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC54420CBD7AF571(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContaierCityTrain* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContaierCityTrain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERCITYTRAIN_METHOD_3_EC54420CBD7AF571_OFFSET))(a1, a2);
		}
	};
}
