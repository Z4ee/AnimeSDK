#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetSummonStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class IPetLineup; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_D314C0432C1A908E_METHOD_1_02D5EDCA031BE343_OFFSET UNITYSDK_OFFSET(0xBED47D0)
#define CLASS_1_D314C0432C1A908E_METHOD_1_1BD8808636F6DA34_OFFSET UNITYSDK_OFFSET(0xBED4780)
#define CLASS_1_D314C0432C1A908E_METHOD_1_B286F077E68D7A11_OFFSET UNITYSDK_OFFSET(0xBED4730)
#define CLASS_1_D314C0432C1A908E__CTOR_OFFSET UNITYSDK_OFFSET(0xBED4660)

inline static constexpr unsigned int Class_1_D314C0432C1A908E_TypeDefinitionIndex = 75711;

class Class_1_D314C0432C1A908E : public ::System::Object
{
public:
	::System::WeakReference_1<::RPG::Client::Pet::IPetLineup*>* AEGNGAOGDIN; // 0x10

	::System::Void _ctor(::RPG::Client::Pet::IPetLineup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPetLineup*))((::PBYTE)hIl2Cpp + CLASS_1_D314C0432C1A908E__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Pet::PetSummonStateType Method_1_B286F077E68D7A11()
	{
		return ((::RPG::Client::Pet::PetSummonStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D314C0432C1A908E_METHOD_1_B286F077E68D7A11_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* Method_1_1BD8808636F6DA34()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D314C0432C1A908E_METHOD_1_1BD8808636F6DA34_OFFSET))(this);
	}

	::RPG::Client::Pet::IPetLineup* Method_1_02D5EDCA031BE343()
	{
		return ((::RPG::Client::Pet::IPetLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D314C0432C1A908E_METHOD_1_02D5EDCA031BE343_OFFSET))(this);
	}
};
