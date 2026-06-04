#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER_METHOD_3_8F1D386CD6CBD51D_OFFSET UNITYSDK_OFFSET(0x195E5F70)
#define RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER_METHOD_3_9B9D4DF679946E68_OFFSET UNITYSDK_OFFSET(0x195E7F20)
#define RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0x195E5F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionGodExchangeCatTransfer_TypeDefinitionIndex = 17453;

	class CakeRaceActionGodExchangeCatTransfer : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B9D4DF679946E68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionGodExchangeCatTransfer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionGodExchangeCatTransfer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER_METHOD_3_9B9D4DF679946E68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F1D386CD6CBD51D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionGodExchangeCatTransfer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionGodExchangeCatTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER_METHOD_3_8F1D386CD6CBD51D_OFFSET))(a1, a2);
		}
	};
}
