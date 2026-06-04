#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonopolyJackpotData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOPOLYJACKPOTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC17D710)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC17D750)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO___C__GETJACKPOTDATAS_B__8_0_OFFSET UNITYSDK_OFFSET(0xC17D760)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyJackpotInfo___c_TypeDefinitionIndex = 61953;

	class MonopolyJackpotInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonopolyJackpotData*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonopolyJackpotData*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyJackpotInfo___c_TypeDefinitionIndex)->GetStaticField(0x64930);
		}
		static ::RPG::Client::MonopolyJackpotInfo___c** StaticGet___9()
		{
			return (::RPG::Client::MonopolyJackpotInfo___c**)Il2CppClass::FromTypeDefinitionIndex(MonopolyJackpotInfo___c_TypeDefinitionIndex)->GetStaticField(0x64938);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetJackpotDatas_b__8_0(::RPG::Client::MonopolyJackpotData* a1, ::RPG::Client::MonopolyJackpotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonopolyJackpotData*, ::RPG::Client::MonopolyJackpotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO___C__GETJACKPOTDATAS_B__8_0_OFFSET))(this, a1, a2);
		}
	};
}
