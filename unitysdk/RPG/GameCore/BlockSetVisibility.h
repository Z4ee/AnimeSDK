#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_BLOCKSETVISIBILITY_METHOD_3_319A762FD2120A6A_OFFSET UNITYSDK_OFFSET(0x1B30E880)
#define RPG_GAMECORE_BLOCKSETVISIBILITY_METHOD_3_AB9FE4988FA63B33_OFFSET UNITYSDK_OFFSET(0x1B30E840)
#define RPG_GAMECORE_BLOCKSETVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30E870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockSetVisibility_TypeDefinitionIndex = 20940;

	class BlockSetVisibility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* BlockTags; // 0x18
		::RPG::GameCore::HoyoTagContainer* BlockHoyoTags; // 0x20
		::RPG::GameCore::HoyoTagContainer* BlockAllHoyoTags; // 0x28
		::Il2CppArray<::RPG::GameCore::DynamicString*>* BlockAlias; // 0x30
		::System::Boolean Visible; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSETVISIBILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB9FE4988FA63B33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockSetVisibility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockSetVisibility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSETVISIBILITY_METHOD_3_AB9FE4988FA63B33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_319A762FD2120A6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockSetVisibility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockSetVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSETVISIBILITY_METHOD_3_319A762FD2120A6A_OFFSET))(a1, a2);
		}
	};
}
