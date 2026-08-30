#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRouteState.h"
#include "unitysdk/System/Object.h"

class Class_1_0AD6ED58055B81A2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C63851A857333E18_METHOD_1_8B8C0F9E0A2DF3EB_OFFSET UNITYSDK_OFFSET(0xBCCDEB0)
#define CLASS_1_C63851A857333E18_METHOD_1_9ECBCDB1EA8AA0BC_OFFSET UNITYSDK_OFFSET(0xBCCE370)
#define CLASS_1_C63851A857333E18_METHOD_1_A3426EC4F55B041D_OFFSET UNITYSDK_OFFSET(0xBCCE0C0)
#define CLASS_1_C63851A857333E18__CTOR_OFFSET UNITYSDK_OFFSET(0xBCCE8D0)

inline static constexpr unsigned int Class_1_C63851A857333E18_TypeDefinitionIndex = 63956;

class Class_1_C63851A857333E18 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C63851A857333E18__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8B8C0F9E0A2DF3EB(::Class_1_0AD6ED58055B81A2* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6ED58055B81A2*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>*))((::PBYTE)hIl2Cpp + CLASS_1_C63851A857333E18_METHOD_1_8B8C0F9E0A2DF3EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3426EC4F55B041D(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>*))((::PBYTE)hIl2Cpp + CLASS_1_C63851A857333E18_METHOD_1_A3426EC4F55B041D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_9ECBCDB1EA8AA0BC(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>*))((::PBYTE)hIl2Cpp + CLASS_1_C63851A857333E18_METHOD_1_9ECBCDB1EA8AA0BC_OFFSET))(this, a1);
	}
};
