#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_933C07741192A471.h"

namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleBattleView; }
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_38BE07B1D66262C2_GETPROXIES_OFFSET UNITYSDK_OFFSET(0xC7D4B40)
#define CLASS_2_38BE07B1D66262C2_GETPROXY_OFFSET UNITYSDK_OFFSET(0xC7D4BE0)
#define CLASS_2_38BE07B1D66262C2_METHOD_2_5C5D2DD68C518DB9_OFFSET UNITYSDK_OFFSET(0xC7D4950)
#define CLASS_2_38BE07B1D66262C2_REMOVEPROXY_OFFSET UNITYSDK_OFFSET(0xC7D4C40)
#define CLASS_2_38BE07B1D66262C2__CTOR_OFFSET UNITYSDK_OFFSET(0xC7D4CB0)

inline static constexpr unsigned int Class_2_38BE07B1D66262C2_TypeDefinitionIndex = 77761;

class Class_2_38BE07B1D66262C2 : public ::Class_1_933C07741192A471
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38BE07B1D66262C2__CTOR_OFFSET))(this);
	}

	::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView* Method_2_5C5D2DD68C518DB9()
	{
		return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38BE07B1D66262C2_METHOD_2_5C5D2DD68C518DB9_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>* GetProxies()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38BE07B1D66262C2_GETPROXIES_OFFSET))(this);
	}

	::RPG::Client::Prop::DuelChimeraProxy* GetProxy(::System::Int32 a1)
	{
		return ((::RPG::Client::Prop::DuelChimeraProxy*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_38BE07B1D66262C2_GETPROXY_OFFSET))(this, a1);
	}

	::System::Void RemoveProxy(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_38BE07B1D66262C2_REMOVEPROXY_OFFSET))(this, a1);
	}
};
