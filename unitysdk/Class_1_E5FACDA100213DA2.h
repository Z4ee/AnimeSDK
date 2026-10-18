#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_4;
namespace Proto { class Item; }
namespace RPG::Client::BlindBox::Pool { class BlindBoxOpenResultPet; }
namespace RPG::Client::BlindBox::Pool { class IBlindBoxOpenResult; }
namespace RPG::Client::Pet { class IPetInstanceRepository; }

#define CLASS_1_E5FACDA100213DA2_METHOD_1_27949F35F505C2BA_OFFSET UNITYSDK_OFFSET(0xD213950)
#define CLASS_1_E5FACDA100213DA2_METHOD_1_4A5A56FA8D297036_OFFSET UNITYSDK_OFFSET(0xD212F10)
#define CLASS_1_E5FACDA100213DA2__CTOR_OFFSET UNITYSDK_OFFSET(0xD212EC0)

inline static constexpr unsigned int Class_1_E5FACDA100213DA2_TypeDefinitionIndex = 74954;

class Class_1_E5FACDA100213DA2 : public ::System::Object
{
public:
	::RPG::Client::Pet::IPetInstanceRepository* EBDCGPKDBIK; // 0x10
	::System::Single DPFFHBGECKM; // 0x18
	::System::Single GJLPMPKOCBB; // 0x1C

	::System::Void _ctor(::RPG::Client::Pet::IPetInstanceRepository* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPetInstanceRepository*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5FACDA100213DA2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::BlindBox::Pool::IBlindBoxOpenResult* Method_1_4A5A56FA8D297036(::Class_1_F3CA30716D4FAF92_4* a1)
	{
		return ((::RPG::Client::BlindBox::Pool::IBlindBoxOpenResult*(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_4*))((::PBYTE)hIl2Cpp + CLASS_1_E5FACDA100213DA2_METHOD_1_4A5A56FA8D297036_OFFSET))(this, a1);
	}

	::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet* Method_1_27949F35F505C2BA(::Proto::Item* a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet*(*)(::PVOID, ::Proto::Item*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5FACDA100213DA2_METHOD_1_27949F35F505C2BA_OFFSET))(this, a1, a2);
	}
};
