#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotMailData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_TAROTBOOKMAILMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9DBA20)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC9DBA60)
#define RPG_CLIENT_TAROTBOOKMAILMANAGER___C__MARKSEENANDGETALLDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0xC9DBA70)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookMailManager___c_TypeDefinitionIndex = 63666;

	class TarotBookMailManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::TarotMailData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::TarotMailData*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookMailManager___c_TypeDefinitionIndex)->GetStaticField(0x4F740);
		}
		static ::RPG::Client::TarotBookMailManager___c** StaticGet___9()
		{
			return (::RPG::Client::TarotBookMailManager___c**)Il2CppClass::FromTypeDefinitionIndex(TarotBookMailManager___c_TypeDefinitionIndex)->GetStaticField(0x4F748);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _MarkSeenAndGetAllData_b__9_0(::RPG::Client::TarotMailData* a1, ::RPG::Client::TarotMailData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotMailData*, ::RPG::Client::TarotMailData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMAILMANAGER___C__MARKSEENANDGETALLDATA_B__9_0_OFFSET))(this, a1, a2);
		}
	};
}
