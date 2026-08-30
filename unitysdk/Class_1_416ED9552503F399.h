#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D_11.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemCostCalculateResult; }
namespace RPG::Client { class ItemCostCalculator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_416ED9552503F399_METHOD_1_16BD115D596240FF_OFFSET UNITYSDK_OFFSET(0x14C54B50)
#define CLASS_1_416ED9552503F399_METHOD_1_308A73B5AFED9089_OFFSET UNITYSDK_OFFSET(0x14C54C20)
#define CLASS_1_416ED9552503F399_METHOD_1_D6AF3D5647297AEB_OFFSET UNITYSDK_OFFSET(0x14C54E40)
#define CLASS_1_416ED9552503F399__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C54F80)

inline static constexpr unsigned int Class_1_416ED9552503F399_TypeDefinitionIndex = 65796;

class Class_1_416ED9552503F399 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_GDDICPCFJON()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_416ED9552503F399_TypeDefinitionIndex)->GetStaticField(0xFF40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_416ED9552503F399__CCTOR_OFFSET))();
	}

	static ::Struct_2_884CDB9D0FDFAF0D_11 Method_1_16BD115D596240FF(::RPG::Client::ItemCostCalculator* a1)
	{
		return ((::Struct_2_884CDB9D0FDFAF0D_11(*)(::RPG::Client::ItemCostCalculator*))((::PBYTE)hIl2Cpp + CLASS_1_416ED9552503F399_METHOD_1_16BD115D596240FF_OFFSET))(a1);
	}

	static ::System::Void Method_1_308A73B5AFED9089(::Struct_2_884CDB9D0FDFAF0D_11& a1, ::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>* a2)
	{
		return ((::System::Void(*)(::Struct_2_884CDB9D0FDFAF0D_11&, ::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>*))((::PBYTE)hIl2Cpp + CLASS_1_416ED9552503F399_METHOD_1_308A73B5AFED9089_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D6AF3D5647297AEB(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_416ED9552503F399_METHOD_1_D6AF3D5647297AEB_OFFSET))(a1);
	}
};
