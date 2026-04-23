#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMMANDPARTNER_METHOD_3_3BAB360B61A771DF_OFFSET UNITYSDK_OFFSET(0x18826460)
#define RPG_GAMECORE_COMMANDPARTNER_METHOD_3_C70F11EC73D4C6EB_OFFSET UNITYSDK_OFFSET(0x188264E0)
#define RPG_GAMECORE_COMMANDPARTNER__CTOR_OFFSET UNITYSDK_OFFSET(0x188264B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommandPartner_TypeDefinitionIndex = 21593;

	class CommandPartner : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MemberName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMANDPARTNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3BAB360B61A771DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommandPartner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommandPartner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMANDPARTNER_METHOD_3_3BAB360B61A771DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C70F11EC73D4C6EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommandPartner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommandPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMANDPARTNER_METHOD_3_C70F11EC73D4C6EB_OFFSET))(a1, a2);
		}
	};
}
