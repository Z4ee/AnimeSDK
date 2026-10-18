#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPet; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6EC4285B171147D2_METHOD_1_389486378BEF2498_1_OFFSET UNITYSDK_OFFSET(0xC9F16A0)
#define CLASS_1_6EC4285B171147D2_METHOD_1_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0xC9F15C0)
#define CLASS_1_6EC4285B171147D2_METHOD_1_488FE4B64A30C557_OFFSET UNITYSDK_OFFSET(0xC9F13A0)
#define CLASS_1_6EC4285B171147D2_METHOD_1_75BCDA72025791C0_OFFSET UNITYSDK_OFFSET(0xC9F1430)
#define CLASS_1_6EC4285B171147D2_METHOD_1_F2A515699C24FF18_OFFSET UNITYSDK_OFFSET(0xC9F1490)

inline static constexpr unsigned int Class_1_6EC4285B171147D2_TypeDefinitionIndex = 75674;

class Class_1_6EC4285B171147D2 : public ::System::Object
{
public:
	static ::RPG::Client::Pet::IPet* Method_1_488FE4B64A30C557(::RPG::Client::Pet::PetIdentifier a1)
	{
		return ((::RPG::Client::Pet::IPet*(*)(::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_6EC4285B171147D2_METHOD_1_488FE4B64A30C557_OFFSET))(a1);
	}

	static ::System::Void Method_1_75BCDA72025791C0(::System::Action_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6EC4285B171147D2_METHOD_1_75BCDA72025791C0_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2A515699C24FF18(::System::Action_1<::RPG::Client::Pet::PetIdentifier>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::RPG::Client::Pet::PetIdentifier>*))((::PBYTE)hIl2Cpp + CLASS_1_6EC4285B171147D2_METHOD_1_F2A515699C24FF18_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EC4285B171147D2_METHOD_1_389486378BEF2498_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_389486378BEF2498_1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EC4285B171147D2_METHOD_1_389486378BEF2498_1_OFFSET))(a1);
	}
};
