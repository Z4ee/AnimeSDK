#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ANIMWEIGHTED_METHOD_2_17FAAD58C0CC0EAA_OFFSET UNITYSDK_OFFSET(0x1C56C120)
#define RPG_GAMECORE_ANIMWEIGHTED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56C2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimWeighted_TypeDefinitionIndex = 16111;

	class AnimWeighted : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateName; // 0x10
		::System::Single Weight; // 0x18
		::System::Single NormalizedTransitionDuration; // 0x1C
		::System::Single NormalizedOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMWEIGHTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_17FAAD58C0CC0EAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimWeighted*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimWeighted*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMWEIGHTED_METHOD_2_17FAAD58C0CC0EAA_OFFSET))(a1, a2);
		}
	};
}
