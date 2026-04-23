#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTDAMAGEEXTRADATABASE_METHOD_2_7472E53B74CDDBC5_OFFSET UNITYSDK_OFFSET(0x18DCD690)
#define RPG_GAMECORE_RTDAMAGEEXTRADATABASE_METHOD_2_EE74DBF244932ED3_OFFSET UNITYSDK_OFFSET(0x18DC2560)
#define RPG_GAMECORE_RTDAMAGEEXTRADATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC5210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDamageExtraDataBase_TypeDefinitionIndex = 23159;

	class RtDamageExtraDataBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGEEXTRADATABASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EE74DBF244932ED3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDamageExtraDataBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDamageExtraDataBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGEEXTRADATABASE_METHOD_2_EE74DBF244932ED3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_7472E53B74CDDBC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDamageExtraDataBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDamageExtraDataBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGEEXTRADATABASE_METHOD_2_7472E53B74CDDBC5_OFFSET))(a1, a2);
		}
	};
}
