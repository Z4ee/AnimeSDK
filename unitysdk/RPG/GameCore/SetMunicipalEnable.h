#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMUNICIPALENABLE_METHOD_3_191241DA845E9E06_OFFSET UNITYSDK_OFFSET(0x1D508B90)
#define RPG_GAMECORE_SETMUNICIPALENABLE_METHOD_3_89876657E1CA9DC5_OFFSET UNITYSDK_OFFSET(0x1D508BD0)
#define RPG_GAMECORE_SETMUNICIPALENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D508BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMunicipalEnable_TypeDefinitionIndex = 20086;

	class SetMunicipalEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_191241DA845E9E06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMunicipalEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMunicipalEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALENABLE_METHOD_3_191241DA845E9E06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89876657E1CA9DC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMunicipalEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMunicipalEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALENABLE_METHOD_3_89876657E1CA9DC5_OFFSET))(a1, a2);
		}
	};
}
