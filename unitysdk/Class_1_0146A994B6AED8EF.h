#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetKind.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_0146A994B6AED8EF_METHOD_1_589CFA414F0DC422_OFFSET UNITYSDK_OFFSET(0x15E19F00)
#define CLASS_1_0146A994B6AED8EF_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x15E1A700)
#define CLASS_1_0146A994B6AED8EF_METHOD_1_6A613C6E3B961566_OFFSET UNITYSDK_OFFSET(0x15E19DF0)
#define CLASS_1_0146A994B6AED8EF_METHOD_1_9A3F0FCDBFE48792_OFFSET UNITYSDK_OFFSET(0x15E19FF0)
#define CLASS_1_0146A994B6AED8EF__CTOR_OFFSET UNITYSDK_OFFSET(0x15E19AB0)

inline static constexpr unsigned int Class_1_0146A994B6AED8EF_TypeDefinitionIndex = 74905;

class Class_1_0146A994B6AED8EF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Pet::BlindBox::BlindBoxPetKind, ::System::Boolean>* KNCDOAKBFJH; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::Pet::BlindBox::BlindBoxPetKind, ::System::UInt32>* KCKKPNGFKGO; // 0x18
	::System::UInt32 NPOOJAEMDLJ; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0146A994B6AED8EF__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6A613C6E3B961566(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + CLASS_1_0146A994B6AED8EF_METHOD_1_6A613C6E3B961566_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_589CFA414F0DC422(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + CLASS_1_0146A994B6AED8EF_METHOD_1_589CFA414F0DC422_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_9A3F0FCDBFE48792(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*))((::PBYTE)hIl2Cpp + CLASS_1_0146A994B6AED8EF_METHOD_1_9A3F0FCDBFE48792_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0146A994B6AED8EF_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}
};
