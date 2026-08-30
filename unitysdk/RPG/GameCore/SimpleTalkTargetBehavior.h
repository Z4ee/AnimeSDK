#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SIMPLETALKTARGETBEHAVIOR_METHOD_2_F2A4BF2EEBA41412_OFFSET UNITYSDK_OFFSET(0x1D0A0180)
#define RPG_GAMECORE_SIMPLETALKTARGETBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A02B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleTalkTargetBehavior_TypeDefinitionIndex = 20876;

	class SimpleTalkTargetBehavior : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Boolean UseMouthTalk; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKTARGETBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F2A4BF2EEBA41412(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SimpleTalkTargetBehavior*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SimpleTalkTargetBehavior*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKTARGETBEHAVIOR_METHOD_2_F2A4BF2EEBA41412_OFFSET))(a1, a2);
		}
	};
}
