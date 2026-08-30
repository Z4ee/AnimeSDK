#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GroupEntityInfo; }

#define RPG_GAMECORE_CREATEPROP_METHOD_3_0DD96093B32ECE7C_OFFSET UNITYSDK_OFFSET(0x1D9BFE10)
#define RPG_GAMECORE_CREATEPROP_METHOD_3_BB02D4F6A39BC5A9_OFFSET UNITYSDK_OFFSET(0x1D7FFF30)
#define RPG_GAMECORE_CREATEPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D800160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateProp_TypeDefinitionIndex = 21699;

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

		static ::System::Void Method_3_0DD96093B32ECE7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROP_METHOD_3_0DD96093B32ECE7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB02D4F6A39BC5A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROP_METHOD_3_BB02D4F6A39BC5A9_OFFSET))(a1, a2);
		}
	};
}
