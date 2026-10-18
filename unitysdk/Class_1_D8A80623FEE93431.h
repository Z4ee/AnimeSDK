#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetSummonStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class IPetInstanceRepository; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_D8A80623FEE93431_METHOD_1_8D22543E566E71F4_OFFSET UNITYSDK_OFFSET(0x15F249A0)
#define CLASS_1_D8A80623FEE93431_METHOD_1_8FEE0CD04093E1CC_OFFSET UNITYSDK_OFFSET(0x15F247E0)
#define CLASS_1_D8A80623FEE93431_METHOD_1_B286F077E68D7A11_OFFSET UNITYSDK_OFFSET(0x15F24790)
#define CLASS_1_D8A80623FEE93431__CTOR_OFFSET UNITYSDK_OFFSET(0x15F01530)

inline static constexpr unsigned int Class_1_D8A80623FEE93431_TypeDefinitionIndex = 75711;

class Class_1_D8A80623FEE93431 : public ::System::Object
{
public:
	::System::WeakReference_1<::RPG::Client::Pet::IPetInstanceRepository*>* NMPIJGKPFIK; // 0x10
	::RPG::Client::Pet::PetInstanceIdentifier LNPLJMDCPEP; // 0x18

	::System::Void _ctor(::RPG::Client::Pet::PetInstanceIdentifier a1, ::RPG::Client::Pet::IPetInstanceRepository* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier, ::RPG::Client::Pet::IPetInstanceRepository*))((::PBYTE)hIl2Cpp + CLASS_1_D8A80623FEE93431__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Pet::PetSummonStateType Method_1_B286F077E68D7A11()
	{
		return ((::RPG::Client::Pet::PetSummonStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8A80623FEE93431_METHOD_1_B286F077E68D7A11_OFFSET))(this);
	}

	::RPG::Client::Pet::IPetInstance* Method_1_8FEE0CD04093E1CC()
	{
		return ((::RPG::Client::Pet::IPetInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8A80623FEE93431_METHOD_1_8FEE0CD04093E1CC_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* Method_1_8D22543E566E71F4()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8A80623FEE93431_METHOD_1_8D22543E566E71F4_OFFSET))(this);
	}
};
