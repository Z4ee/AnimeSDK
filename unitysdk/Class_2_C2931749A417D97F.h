#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_933C07741192A471.h"

namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleBattleView; }
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_C2931749A417D97F_GETPROXIES_OFFSET UNITYSDK_OFFSET(0x11BDD310)
#define CLASS_2_C2931749A417D97F_GETPROXY_OFFSET UNITYSDK_OFFSET(0x11BDD3B0)
#define CLASS_2_C2931749A417D97F_METHOD_2_582CFF02FD8B73C8_OFFSET UNITYSDK_OFFSET(0x11BDD140)
#define CLASS_2_C2931749A417D97F_REMOVEPROXY_OFFSET UNITYSDK_OFFSET(0x11BDD460)
#define CLASS_2_C2931749A417D97F__CTOR_OFFSET UNITYSDK_OFFSET(0x11BDD4D0)

inline static constexpr unsigned int Class_2_C2931749A417D97F_TypeDefinitionIndex = 71728;

class Class_2_C2931749A417D97F : public ::Class_1_933C07741192A471
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2931749A417D97F__CTOR_OFFSET))(this);
	}

	::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView* Method_2_582CFF02FD8B73C8()
	{
		return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2931749A417D97F_METHOD_2_582CFF02FD8B73C8_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>* GetProxies()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2931749A417D97F_GETPROXIES_OFFSET))(this);
	}

	::RPG::Client::Prop::DuelChimeraProxy* GetProxy(::System::Int32 a1)
	{
		return ((::RPG::Client::Prop::DuelChimeraProxy*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C2931749A417D97F_GETPROXY_OFFSET))(this, a1);
	}

	::System::Void RemoveProxy(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C2931749A417D97F_REMOVEPROXY_OFFSET))(this, a1);
	}
};
