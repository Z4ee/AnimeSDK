#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_GROUPENTITYINFO_METHOD_2_0AC0F644E9C65E8C_OFFSET UNITYSDK_OFFSET(0x189E02D0)
#define RPG_GAMECORE_GROUPENTITYINFO_METHOD_2_6CFD44C339508CDE_OFFSET UNITYSDK_OFFSET(0x189E0430)
#define RPG_GAMECORE_GROUPENTITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x189E0420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupEntityInfo_TypeDefinitionIndex = 19229;

	class GroupEntityInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* GroupInstanceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPENTITYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0AC0F644E9C65E8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupEntityInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupEntityInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPENTITYINFO_METHOD_2_0AC0F644E9C65E8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6CFD44C339508CDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupEntityInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupEntityInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPENTITYINFO_METHOD_2_6CFD44C339508CDE_OFFSET))(a1, a2);
		}
	};
}
