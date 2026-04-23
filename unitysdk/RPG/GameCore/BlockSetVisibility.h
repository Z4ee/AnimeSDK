#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_BLOCKSETVISIBILITY_METHOD_3_3295AC0BC820463B_OFFSET UNITYSDK_OFFSET(0x1870D320)
#define RPG_GAMECORE_BLOCKSETVISIBILITY_METHOD_3_61DD4F9D8E0BACE2_OFFSET UNITYSDK_OFFSET(0x1870D3A0)
#define RPG_GAMECORE_BLOCKSETVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1870D370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockSetVisibility_TypeDefinitionIndex = 20159;

	class BlockSetVisibility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* BlockTags; // 0x18
		::RPG::GameCore::HoyoTagContainer* BlockHoyoTags; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicString*>* BlockAlias; // 0x28
		::System::Boolean Visible; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSETVISIBILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3295AC0BC820463B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockSetVisibility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockSetVisibility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSETVISIBILITY_METHOD_3_3295AC0BC820463B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61DD4F9D8E0BACE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockSetVisibility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockSetVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSETVISIBILITY_METHOD_3_61DD4F9D8E0BACE2_OFFSET))(a1, a2);
		}
	};
}
