#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_SEARCHSMARTOBJECT_METHOD_4_95730021841446A7_OFFSET UNITYSDK_OFFSET(0x17699DB0)
#define RPG_GAMECORE_ST_SIDE_SEARCHSMARTOBJECT_METHOD_4_AF5216FD351C88AD_OFFSET UNITYSDK_OFFSET(0x1768F6F0)
#define RPG_GAMECORE_ST_SIDE_SEARCHSMARTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1768F690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_SearchSmartObject_TypeDefinitionIndex = 18397;

	class ST_Side_SearchSmartObject : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Interval; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SEARCHSMARTOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_95730021841446A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_SearchSmartObject*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_SearchSmartObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SEARCHSMARTOBJECT_METHOD_4_95730021841446A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AF5216FD351C88AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_SearchSmartObject* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_SearchSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SEARCHSMARTOBJECT_METHOD_4_AF5216FD351C88AD_OFFSET))(a1, a2);
		}
	};
}
