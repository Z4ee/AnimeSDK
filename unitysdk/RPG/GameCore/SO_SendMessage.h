#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SO_SENDMESSAGE_METHOD_4_46C48CBA06B4E9F6_OFFSET UNITYSDK_OFFSET(0x18DE0D10)
#define RPG_GAMECORE_SO_SENDMESSAGE_METHOD_4_FE35FABD832CA2A7_OFFSET UNITYSDK_OFFSET(0x18DE05E0)
#define RPG_GAMECORE_SO_SENDMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE05B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_SendMessage_TypeDefinitionIndex = 18989;

	class SO_SendMessage : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::System::String* Message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SENDMESSAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_46C48CBA06B4E9F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_SendMessage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_SendMessage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SENDMESSAGE_METHOD_4_46C48CBA06B4E9F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE35FABD832CA2A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_SendMessage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_SendMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SENDMESSAGE_METHOD_4_FE35FABD832CA2A7_OFFSET))(a1, a2);
		}
	};
}
