#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GroupEntityInfo; }

#define RPG_GAMECORE_CREATEPROP_METHOD_3_0355A215AB2C7D91_OFFSET UNITYSDK_OFFSET(0x19683DF0)
#define RPG_GAMECORE_CREATEPROP_METHOD_3_91D785871090E5E0_OFFSET UNITYSDK_OFFSET(0x19683E70)
#define RPG_GAMECORE_CREATEPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x19683E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateProp_TypeDefinitionIndex = 20725;

	class CreateProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupPropID; // 0x20
		::Il2CppArray<::RPG::GameCore::GroupEntityInfo*>* CreateList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0355A215AB2C7D91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROP_METHOD_3_0355A215AB2C7D91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91D785871090E5E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROP_METHOD_3_91D785871090E5E0_OFFSET))(a1, a2);
		}
	};
}
