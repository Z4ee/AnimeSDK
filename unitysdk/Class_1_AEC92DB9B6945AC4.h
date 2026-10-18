#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1396;
namespace RPG::Client::Pet { class IPetInstanceRepository; }
namespace RPG::Client::Pet { class IPetLineup; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_1_AEC92DB9B6945AC4_METHOD_1_2417335889B1F2F2_OFFSET UNITYSDK_OFFSET(0x15F015F0)
#define CLASS_1_AEC92DB9B6945AC4_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x15F012E0)
#define CLASS_1_AEC92DB9B6945AC4_METHOD_1_F84EA5D30DEF00CF_OFFSET UNITYSDK_OFFSET(0x15F01350)
#define CLASS_1_AEC92DB9B6945AC4__CTOR_OFFSET UNITYSDK_OFFSET(0x15F01230)

inline static constexpr unsigned int Class_1_AEC92DB9B6945AC4_TypeDefinitionIndex = 75709;

class Class_1_AEC92DB9B6945AC4 : public ::System::Object
{
public:
	::System::WeakReference_1<::RPG::Client::Pet::IPetInstanceRepository*>* NMPIJGKPFIK; // 0x10

	::System::Void _ctor(::RPG::Client::Pet::IPetInstanceRepository* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPetInstanceRepository*))((::PBYTE)hIl2Cpp + CLASS_1_AEC92DB9B6945AC4__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1396* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_1396*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEC92DB9B6945AC4_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1396* Method_1_F84EA5D30DEF00CF(::RPG::Client::Pet::PetInstanceIdentifier a1)
	{
		return ((::Class_0_16E4307DCC419505_1396*(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_AEC92DB9B6945AC4_METHOD_1_F84EA5D30DEF00CF_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1396* Method_1_2417335889B1F2F2(::RPG::Client::Pet::IPetLineup* a1)
	{
		return ((::Class_0_16E4307DCC419505_1396*(*)(::PVOID, ::RPG::Client::Pet::IPetLineup*))((::PBYTE)hIl2Cpp + CLASS_1_AEC92DB9B6945AC4_METHOD_1_2417335889B1F2F2_OFFSET))(this, a1);
	}
};
