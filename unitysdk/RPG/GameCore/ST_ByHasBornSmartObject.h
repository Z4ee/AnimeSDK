#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_90E233486B204D5F_OFFSET UNITYSDK_OFFSET(0x18DEDA00)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_F04A42BC3CAF86B5_OFFSET UNITYSDK_OFFSET(0x18DEDAD0)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEDA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasBornSmartObject_TypeDefinitionIndex = 19005;

	class ST_ByHasBornSmartObject : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_90E233486B204D5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasBornSmartObject*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasBornSmartObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_90E233486B204D5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F04A42BC3CAF86B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_METHOD_4_F04A42BC3CAF86B5_OFFSET))(a1, a2);
		}
	};
}
