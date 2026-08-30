#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RequestPassByValueSourceType.h"
#include "unitysdk/RPG/GameCore/RequestPassByValueTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER_METHOD_3_04796BC54F726CD8_OFFSET UNITYSDK_OFFSET(0x1CDD45E0)
#define RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER_METHOD_3_0B35E6AF6010E561_OFFSET UNITYSDK_OFFSET(0x1CDD4620)
#define RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD4610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPassByValueClientServer_TypeDefinitionIndex = 20292;

	class AdvPassByValueClientServer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RequestPassByValueSourceType SourceType; // 0x18
		::RPG::GameCore::DynamicFloat* SourceInstanceID; // 0x20
		::RPG::GameCore::DynamicString* SourceKey; // 0x28
		::RPG::GameCore::RequestPassByValueTargetType TargetType; // 0x30
		::RPG::GameCore::DynamicString* TargetKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04796BC54F726CD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPassByValueClientServer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPassByValueClientServer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER_METHOD_3_04796BC54F726CD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B35E6AF6010E561(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPassByValueClientServer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPassByValueClientServer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER_METHOD_3_0B35E6AF6010E561_OFFSET))(a1, a2);
		}
	};
}
