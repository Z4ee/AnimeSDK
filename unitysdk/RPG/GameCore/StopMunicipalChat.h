#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_STOPMUNICIPALCHAT_METHOD_3_6FFC9DC6130F5EDB_OFFSET UNITYSDK_OFFSET(0x1D56FC20)
#define RPG_GAMECORE_STOPMUNICIPALCHAT_METHOD_3_C62659B0FE9E0A7C_OFFSET UNITYSDK_OFFSET(0x1D56FC60)
#define RPG_GAMECORE_STOPMUNICIPALCHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D56FC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopMunicipalChat_TypeDefinitionIndex = 20531;

	class StopMunicipalChat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MunicipalChatName; // 0x18
		::RPG::GameCore::DynamicString* MunicipalChatNameDS; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPMUNICIPALCHAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FFC9DC6130F5EDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopMunicipalChat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopMunicipalChat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPMUNICIPALCHAT_METHOD_3_6FFC9DC6130F5EDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C62659B0FE9E0A7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopMunicipalChat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopMunicipalChat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPMUNICIPALCHAT_METHOD_3_C62659B0FE9E0A7C_OFFSET))(a1, a2);
		}
	};
}
