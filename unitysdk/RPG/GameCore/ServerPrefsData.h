#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SERVERPREFSDATA_METHOD_2_DF08BE0ED7138082_OFFSET UNITYSDK_OFFSET(0x1C2CF8E0)
#define RPG_GAMECORE_SERVERPREFSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CF9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerPrefsData_TypeDefinitionIndex = 23552;

	class ServerPrefsData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MaxLength; // 0x10
		::System::String* ValueType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERPREFSDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DF08BE0ED7138082(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerPrefsData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerPrefsData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERPREFSDATA_METHOD_2_DF08BE0ED7138082_OFFSET))(a1, a2);
		}
	};
}
