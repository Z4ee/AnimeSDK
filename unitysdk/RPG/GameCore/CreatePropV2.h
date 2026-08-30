#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GroupEntityInfo; }

#define RPG_GAMECORE_CREATEPROPV2_METHOD_3_2A0F066A2B38E058_OFFSET UNITYSDK_OFFSET(0x1D800830)
#define RPG_GAMECORE_CREATEPROPV2_METHOD_3_BD1348EF4D58021D_OFFSET UNITYSDK_OFFSET(0x1D800870)
#define RPG_GAMECORE_CREATEPROPV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D800860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreatePropV2_TypeDefinitionIndex = 21700;

	class CreatePropV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupPropID; // 0x20
		::Il2CppArray<::RPG::GameCore::GroupEntityInfo*>* CreateList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2A0F066A2B38E058(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreatePropV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreatePropV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPV2_METHOD_3_2A0F066A2B38E058_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD1348EF4D58021D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreatePropV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreatePropV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPV2_METHOD_3_BD1348EF4D58021D_OFFSET))(a1, a2);
		}
	};
}
