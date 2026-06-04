#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG_METHOD_4_2F453A2B930008BB_OFFSET UNITYSDK_OFFSET(0x199E5980)
#define RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG_METHOD_4_EC9BF41640BBDD52_OFFSET UNITYSDK_OFFSET(0x199E5780)
#define RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199E5900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamGetBlackboardValueConfig_TypeDefinitionIndex = 16222;

	class ParamGetBlackboardValueConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::String* Key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EC9BF41640BBDD52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamGetBlackboardValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamGetBlackboardValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG_METHOD_4_EC9BF41640BBDD52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2F453A2B930008BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamGetBlackboardValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamGetBlackboardValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMGETBLACKBOARDVALUECONFIG_METHOD_4_2F453A2B930008BB_OFFSET))(a1, a2);
		}
	};
}
