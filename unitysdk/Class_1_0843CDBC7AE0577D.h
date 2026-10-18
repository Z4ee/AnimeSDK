#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1502;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_0843CDBC7AE0577D_ADD_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0xB5821C0)
#define CLASS_1_0843CDBC7AE0577D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB582340)
#define CLASS_1_0843CDBC7AE0577D_METHOD_1_49C24C37B2432A9F_OFFSET UNITYSDK_OFFSET(0xB5823C0)
#define CLASS_1_0843CDBC7AE0577D_METHOD_1_95288ADC9C10D154_OFFSET UNITYSDK_OFFSET(0xB582660)
#define CLASS_1_0843CDBC7AE0577D_REMOVE_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0xB582220)
#define CLASS_1_0843CDBC7AE0577D__CTOR_OFFSET UNITYSDK_OFFSET(0xB582280)

inline static constexpr unsigned int Class_1_0843CDBC7AE0577D_TypeDefinitionIndex = 79677;

class Class_1_0843CDBC7AE0577D : public ::System::Object
{
public:
	::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>* EOPAAKIBIEP; // 0x10
	::Class_0_16E4307DCC419505_1502* OJDFLANLCEF; // 0x18
	::System::Action* OnMaybeChanged; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_1502* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1502*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_0843CDBC7AE0577D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void add_OnMaybeChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0843CDBC7AE0577D_ADD_ONMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnMaybeChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0843CDBC7AE0577D_REMOVE_ONMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0843CDBC7AE0577D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_49C24C37B2432A9F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0843CDBC7AE0577D_METHOD_1_49C24C37B2432A9F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_95288ADC9C10D154()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0843CDBC7AE0577D_METHOD_1_95288ADC9C10D154_OFFSET))(this);
	}
};
