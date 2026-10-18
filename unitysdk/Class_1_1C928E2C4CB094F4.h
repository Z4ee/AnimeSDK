#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_1C928E2C4CB094F4_METHOD_1_17194374584B58E4_OFFSET UNITYSDK_OFFSET(0xBED7CF0)
#define CLASS_1_1C928E2C4CB094F4_METHOD_1_19ABD9E1AC54BD2A_OFFSET UNITYSDK_OFFSET(0xBED7E70)
#define CLASS_1_1C928E2C4CB094F4_METHOD_1_5E58A01B8AA578E0_OFFSET UNITYSDK_OFFSET(0xBED7BF0)

inline static constexpr unsigned int Class_1_1C928E2C4CB094F4_TypeDefinitionIndex = 74861;

class Class_1_1C928E2C4CB094F4 : public ::System::Object
{
public:
	static ::System::Void Method_1_5E58A01B8AA578E0(::System::String* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1C928E2C4CB094F4_METHOD_1_5E58A01B8AA578E0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_17194374584B58E4(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*))((::PBYTE)hIl2Cpp + CLASS_1_1C928E2C4CB094F4_METHOD_1_17194374584B58E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_19ABD9E1AC54BD2A(::System::String* a1, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a2)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + CLASS_1_1C928E2C4CB094F4_METHOD_1_19ABD9E1AC54BD2A_OFFSET))(a1, a2);
	}
};
