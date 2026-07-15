#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueValueChangeType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEVALUECHANGEINFO_METHOD_2_C62EBC2D96118321_OFFSET UNITYSDK_OFFSET(0x1BB81760)
#define RPG_GAMECORE_ROGUEVALUECHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB818A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueValueChangeInfo_TypeDefinitionIndex = 10241;

	class RogueValueChangeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RogueValueChangeType ChangeType; // 0x10
		::System::Double ChangeValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUECHANGEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C62EBC2D96118321(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueValueChangeInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueValueChangeInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUECHANGEINFO_METHOD_2_C62EBC2D96118321_OFFSET))(a1, a2);
		}
	};
}
