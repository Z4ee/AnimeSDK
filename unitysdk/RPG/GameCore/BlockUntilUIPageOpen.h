#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN_METHOD_3_1F33B28703249F53_OFFSET UNITYSDK_OFFSET(0x1B30EC30)
#define RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN_METHOD_3_91CBCAF1F01CFB90_OFFSET UNITYSDK_OFFSET(0x1B30EC70)
#define RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30EC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockUntilUIPageOpen_TypeDefinitionIndex = 24011;

	class BlockUntilUIPageOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PageName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F33B28703249F53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockUntilUIPageOpen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockUntilUIPageOpen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN_METHOD_3_1F33B28703249F53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91CBCAF1F01CFB90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockUntilUIPageOpen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockUntilUIPageOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN_METHOD_3_91CBCAF1F01CFB90_OFFSET))(a1, a2);
		}
	};
}
