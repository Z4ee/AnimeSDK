#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueByHPRatio.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_METHOD_5_722CFC93A1916C9B_OFFSET UNITYSDK_OFFSET(0x19C41DB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_METHOD_5_A29DC4029F26C3D3_OFFSET UNITYSDK_OFFSET(0x19C3B4F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x19C3B4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByHPRatioClientOnly_TypeDefinitionIndex = 22296;

	class SetDynamicValueByHPRatioClientOnly : public ::RPG::GameCore::SetDynamicValueByHPRatio
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_722CFC93A1916C9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_METHOD_5_722CFC93A1916C9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A29DC4029F26C3D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHPRatioClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIOCLIENTONLY_METHOD_5_A29DC4029F26C3D3_OFFSET))(a1, a2);
		}
	};
}
