#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_METHOD_4_5EF29EC0E840D29B_OFFSET UNITYSDK_OFFSET(0x1D4F2C00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_METHOD_4_853D82E25B33941F_OFFSET UNITYSDK_OFFSET(0x1D4F2C50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F2C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByItemNumParam_TypeDefinitionIndex = 21521;

	class SetDynamicValueByItemNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5EF29EC0E840D29B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByItemNumParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByItemNumParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_METHOD_4_5EF29EC0E840D29B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_853D82E25B33941F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByItemNumParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByItemNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_METHOD_4_853D82E25B33941F_OFFSET))(a1, a2);
		}
	};
}
