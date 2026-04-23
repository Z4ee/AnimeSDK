#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_677CCFB5331CFA80_OFFSET UNITYSDK_OFFSET(0x18723FB0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_F165D56D331D2338_OFFSET UNITYSDK_OFFSET(0x18724080)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18724030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackName_TypeDefinitionIndex = 21967;

	class ByCheckModifierCallBackName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_677CCFB5331CFA80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_677CCFB5331CFA80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F165D56D331D2338(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKNAME_METHOD_4_F165D56D331D2338_OFFSET))(a1, a2);
		}
	};
}
