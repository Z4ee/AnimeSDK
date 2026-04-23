#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_933C07741192A471.h"

class Class_0_16E4307DCC419505_1141;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_0BF0926D4A749938_GETPROXIES_OFFSET UNITYSDK_OFFSET(0x128AFCB0)
#define CLASS_2_0BF0926D4A749938_GETPROXY_OFFSET UNITYSDK_OFFSET(0x128AFDB0)
#define CLASS_2_0BF0926D4A749938_REMOVEPROXY_OFFSET UNITYSDK_OFFSET(0x128AFED0)
#define CLASS_2_0BF0926D4A749938__CTOR_OFFSET UNITYSDK_OFFSET(0x128AFC20)

inline static constexpr unsigned int Class_2_0BF0926D4A749938_TypeDefinitionIndex = 71729;

class Class_2_0BF0926D4A749938 : public ::Class_1_933C07741192A471
{
public:
	::Class_0_16E4307DCC419505_1141* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1141* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1141*))((::PBYTE)hIl2Cpp + CLASS_2_0BF0926D4A749938__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>* GetProxies()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BF0926D4A749938_GETPROXIES_OFFSET))(this);
	}

	::RPG::Client::Prop::DuelChimeraProxy* GetProxy(::System::Int32 a1)
	{
		return ((::RPG::Client::Prop::DuelChimeraProxy*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0BF0926D4A749938_GETPROXY_OFFSET))(this, a1);
	}

	::System::Void RemoveProxy(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0BF0926D4A749938_REMOVEPROXY_OFFSET))(this, a1);
	}
};
