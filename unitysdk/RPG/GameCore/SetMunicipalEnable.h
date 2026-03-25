#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMUNICIPALENABLE_METHOD_3_76B5ACE800B903D4_OFFSET UNITYSDK_OFFSET(0x176D8CE0)
#define RPG_GAMECORE_SETMUNICIPALENABLE_METHOD_3_89876657E1CA9DC5_OFFSET UNITYSDK_OFFSET(0x176D8D60)
#define RPG_GAMECORE_SETMUNICIPALENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D8D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMunicipalEnable_TypeDefinitionIndex = 18610;

	class SetMunicipalEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76B5ACE800B903D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMunicipalEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMunicipalEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALENABLE_METHOD_3_76B5ACE800B903D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89876657E1CA9DC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMunicipalEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMunicipalEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALENABLE_METHOD_3_89876657E1CA9DC5_OFFSET))(a1, a2);
		}
	};
}
