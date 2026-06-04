#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_METHOD_6_2AD68DA3E5CB6119_OFFSET UNITYSDK_OFFSET(0x197F84D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_METHOD_6_AA46681BEB923BDF_OFFSET UNITYSDK_OFFSET(0x197F8780)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197F8650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetHistoryAllCoinInterestConfig_TypeDefinitionIndex = 18524;

	class GridFightParamGetHistoryAllCoinInterestConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2AD68DA3E5CB6119(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_METHOD_6_2AD68DA3E5CB6119_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AA46681BEB923BDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetHistoryAllCoinInterestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETHISTORYALLCOININTERESTCONFIG_METHOD_6_AA46681BEB923BDF_OFFSET))(a1, a2);
		}
	};
}
