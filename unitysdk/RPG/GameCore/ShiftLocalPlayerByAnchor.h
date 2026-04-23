#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR_METHOD_3_3331416DF5C4EDBB_OFFSET UNITYSDK_OFFSET(0x18E52DF0)
#define RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR_METHOD_3_74B49DC8D6FCD00A_OFFSET UNITYSDK_OFFSET(0x18E52D70)
#define RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18E52DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShiftLocalPlayerByAnchor_TypeDefinitionIndex = 20184;

	class ShiftLocalPlayerByAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* PreAreaName; // 0x18
		::RPG::GameCore::DynamicString* PreAnchorName; // 0x20
		::RPG::GameCore::DynamicString* PreLevelAreaKey; // 0x28
		::RPG::GameCore::DynamicString* AreaName; // 0x30
		::RPG::GameCore::DynamicString* AnchorName; // 0x38
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_74B49DC8D6FCD00A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShiftLocalPlayerByAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShiftLocalPlayerByAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR_METHOD_3_74B49DC8D6FCD00A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3331416DF5C4EDBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShiftLocalPlayerByAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShiftLocalPlayerByAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHIFTLOCALPLAYERBYANCHOR_METHOD_3_3331416DF5C4EDBB_OFFSET))(a1, a2);
		}
	};
}
