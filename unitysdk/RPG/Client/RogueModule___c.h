#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueEndlessAreaData; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3495B0)
#define RPG_CLIENT_ROGUEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3495F0)
#define RPG_CLIENT_ROGUEMODULE___C__HASROGUEENDLESSINDOING_B__25_0_OFFSET UNITYSDK_OFFSET(0xA349600)
#define RPG_CLIENT_ROGUEMODULE___C___SHOWBUFFAEONFIRSTTALK_B__132_0_OFFSET UNITYSDK_OFFSET(0xA349660)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueModule___c_TypeDefinitionIndex = 54965;

	class RogueModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueModule___c** StaticGet___9()
		{
			return (::RPG::Client::RogueModule___c**)Il2CppClass::FromTypeDefinitionIndex(RogueModule___c_TypeDefinitionIndex)->GetStaticField(0x18950);
		}
		static ::System::Action** StaticGet___9__132_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueModule___c_TypeDefinitionIndex)->GetStaticField(0x18958);
		}
		static ::System::Func_2<::RPG::Client::RogueEndlessAreaData*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::RPG::Client::RogueEndlessAreaData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueModule___c_TypeDefinitionIndex)->GetStaticField(0x18960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasRogueEndlessInDoing_b__25_0(::RPG::Client::RogueEndlessAreaData* areaData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueEndlessAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__HASROGUEENDLESSINDOING_B__25_0_OFFSET))(this, areaData);
		}

		::System::Void __ShowBuffAeonFirstTalk_b__132_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C___SHOWBUFFAEONFIRSTTALK_B__132_0_OFFSET))(this);
		}
	};
}
