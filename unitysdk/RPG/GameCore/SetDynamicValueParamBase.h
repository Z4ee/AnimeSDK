#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE_METHOD_3_1C785B2217367844_OFFSET UNITYSDK_OFFSET(0x1D4F9EA0)
#define RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE_METHOD_3_649B80729416D0BD_OFFSET UNITYSDK_OFFSET(0x1D4FA210)
#define RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F2C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueParamBase_TypeDefinitionIndex = 21519;

	class SetDynamicValueParamBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C785B2217367844(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueParamBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueParamBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE_METHOD_3_1C785B2217367844_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_649B80729416D0BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueParamBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEPARAMBASE_METHOD_3_649B80729416D0BD_OFFSET))(a1, a2);
		}
	};
}
