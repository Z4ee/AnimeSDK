#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SimpleTalkStyleType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SIMPLETALKSTYLE_METHOD_2_2CA82C2410BF0147_OFFSET UNITYSDK_OFFSET(0x18E6D5F0)
#define RPG_GAMECORE_SIMPLETALKSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6D730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleTalkStyle_TypeDefinitionIndex = 19825;

	class SimpleTalkStyle : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SimpleTalkStyleType StyleType; // 0x10
		::System::String* SpeakerID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKSTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2CA82C2410BF0147(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SimpleTalkStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SimpleTalkStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKSTYLE_METHOD_2_2CA82C2410BF0147_OFFSET))(a1, a2);
		}
	};
}
