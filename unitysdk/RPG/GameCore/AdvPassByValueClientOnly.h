#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PassByValueSourceType.h"
#include "unitysdk/RPG/GameCore/PassByValueTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY_METHOD_3_6F00DF0A82BDCE51_OFFSET UNITYSDK_OFFSET(0x16F3A980)
#define RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY_METHOD_3_DB86610623CF3639_OFFSET UNITYSDK_OFFSET(0x16F3A900)
#define RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3A950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPassByValueClientOnly_TypeDefinitionIndex = 18831;

	class AdvPassByValueClientOnly : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PassByValueSourceType SourceType; // 0x18
		::RPG::GameCore::DynamicFloat* SourceInstanceID; // 0x20
		::RPG::GameCore::DynamicString* SourceKey; // 0x28
		::RPG::GameCore::PassByValueTargetType TargetType; // 0x30
		::RPG::GameCore::DynamicFloat* TargetInstanceID; // 0x38
		::RPG::GameCore::DynamicString* TargetKey; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DB86610623CF3639(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPassByValueClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPassByValueClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY_METHOD_3_DB86610623CF3639_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F00DF0A82BDCE51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPassByValueClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPassByValueClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY_METHOD_3_6F00DF0A82BDCE51_OFFSET))(a1, a2);
		}
	};
}
