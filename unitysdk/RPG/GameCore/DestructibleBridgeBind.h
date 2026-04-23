#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DESTRUCTIBLEBRIDGEBIND_METHOD_2_366C085530B3EE77_OFFSET UNITYSDK_OFFSET(0x1885C5D0)
#define RPG_GAMECORE_DESTRUCTIBLEBRIDGEBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1885C6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestructibleBridgeBind_TypeDefinitionIndex = 16671;

	class DestructibleBridgeBind : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DestructibleChild1; // 0x10
		::System::UInt32 DestructibleChild2; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTRUCTIBLEBRIDGEBIND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_366C085530B3EE77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestructibleBridgeBind*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestructibleBridgeBind*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTRUCTIBLEBRIDGEBIND_METHOD_2_366C085530B3EE77_OFFSET))(a1, a2);
		}
	};
}
