#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4531A0)
#define RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE4531E0)
#define RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C__GET_QUESTDATALIST_B__6_0_OFFSET UNITYSDK_OFFSET(0xE4531F0)

namespace RPG::Client
{
	inline static constexpr unsigned int VoracityInvasionPersonalProgress___c_TypeDefinitionIndex = 68264;

	class VoracityInvasionPersonalProgress___c : public ::System::Object
	{
	public:
		static ::RPG::Client::VoracityInvasionPersonalProgress___c** StaticGet___9()
		{
			return (::RPG::Client::VoracityInvasionPersonalProgress___c**)Il2CppClass::FromTypeDefinitionIndex(VoracityInvasionPersonalProgress___c_TypeDefinitionIndex)->GetStaticField(0x3FB00);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(VoracityInvasionPersonalProgress___c_TypeDefinitionIndex)->GetStaticField(0x3FB08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_QuestDataList_b__6_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONPERSONALPROGRESS___C__GET_QUESTDATALIST_B__6_0_OFFSET))(this, a1);
		}
	};
}
