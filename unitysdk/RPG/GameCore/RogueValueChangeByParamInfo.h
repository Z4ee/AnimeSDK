#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEVALUECHANGEBYPARAMINFO_METHOD_2_47776F64FA72684B_OFFSET UNITYSDK_OFFSET(0x1BB81710)
#define RPG_GAMECORE_ROGUEVALUECHANGEBYPARAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB81750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueValueChangeByParamInfo_TypeDefinitionIndex = 19094;

	class RogueValueChangeByParamInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUECHANGEBYPARAMINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_47776F64FA72684B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueValueChangeByParamInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueValueChangeByParamInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUECHANGEBYPARAMINFO_METHOD_2_47776F64FA72684B_OFFSET))(a1, a2);
		}
	};
}
