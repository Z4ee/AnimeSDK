#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueByHPRatio.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_METHOD_5_A29DC4029F26C3D3_OFFSET UNITYSDK_OFFSET(0x1E81E350)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_METHOD_5_AFD3B4DEDC0F3162_OFFSET UNITYSDK_OFFSET(0x1E81E510)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81E340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByHPRatioClientOnly_TypeDefinitionIndex = 23314;

	class SetDynamicValueByHPRatioClientOnly : public ::RPG::GameCore::SetDynamicValueByHPRatio
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_AFD3B4DEDC0F3162(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_METHOD_5_AFD3B4DEDC0F3162_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A29DC4029F26C3D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_METHOD_5_A29DC4029F26C3D3_OFFSET))(a1, a2);
		}
	};
}
