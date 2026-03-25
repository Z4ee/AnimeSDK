#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_METHOD_2_63AFAE3AE438D013_OFFSET UNITYSDK_OFFSET(0x17075390)
#define RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170754B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckFloorSavedValueConfig_TypeDefinitionIndex = 17425;

	class CheckFloorSavedValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Int16 CompareValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_63AFAE3AE438D013(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckFloorSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckFloorSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_METHOD_2_63AFAE3AE438D013_OFFSET))(a1, a2);
		}
	};
}
