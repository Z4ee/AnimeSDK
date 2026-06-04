#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_METHOD_4_853D82E25B33941F_OFFSET UNITYSDK_OFFSET(0x19C42210)
#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_METHOD_4_FB15AC8F7BFF8C8F_OFFSET UNITYSDK_OFFSET(0x19C42180)
#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19C421E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByItemNumParam_TypeDefinitionIndex = 20548;

	class SetDynamicValueByItemNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FB15AC8F7BFF8C8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByItemNumParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByItemNumParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_METHOD_4_FB15AC8F7BFF8C8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_853D82E25B33941F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByItemNumParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByItemNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_METHOD_4_853D82E25B33941F_OFFSET))(a1, a2);
		}
	};
}
