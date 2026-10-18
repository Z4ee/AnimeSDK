#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D_12.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemCostCalculateResult; }
namespace RPG::Client { class ItemCostCalculator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD7760F381EB6CEC_METHOD_1_16BD115D596240FF_OFFSET UNITYSDK_OFFSET(0xB469F50)
#define CLASS_1_BD7760F381EB6CEC_METHOD_1_BDB244DED3336321_OFFSET UNITYSDK_OFFSET(0xB46A020)
#define CLASS_1_BD7760F381EB6CEC_METHOD_1_D6AF3D5647297AEB_OFFSET UNITYSDK_OFFSET(0xB46A240)
#define CLASS_1_BD7760F381EB6CEC__CCTOR_OFFSET UNITYSDK_OFFSET(0xB46A380)

inline static constexpr unsigned int Class_1_BD7760F381EB6CEC_TypeDefinitionIndex = 65732;

class Class_1_BD7760F381EB6CEC : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_GDDICPCFJON()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD7760F381EB6CEC_TypeDefinitionIndex)->GetStaticField(0x151F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD7760F381EB6CEC__CCTOR_OFFSET))();
	}

	static ::Struct_2_884CDB9D0FDFAF0D_12 Method_1_16BD115D596240FF(::RPG::Client::ItemCostCalculator* a1)
	{
		return ((::Struct_2_884CDB9D0FDFAF0D_12(*)(::RPG::Client::ItemCostCalculator*))((::PBYTE)hIl2Cpp + CLASS_1_BD7760F381EB6CEC_METHOD_1_16BD115D596240FF_OFFSET))(a1);
	}

	static ::System::Void Method_1_BDB244DED3336321(::Struct_2_884CDB9D0FDFAF0D_12& a1, ::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>* a2)
	{
		return ((::System::Void(*)(::Struct_2_884CDB9D0FDFAF0D_12&, ::System::Collections::Generic::List_1<::RPG::Client::ItemCostCalculateResult*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD7760F381EB6CEC_METHOD_1_BDB244DED3336321_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D6AF3D5647297AEB(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BD7760F381EB6CEC_METHOD_1_D6AF3D5647297AEB_OFFSET))(a1);
	}
};
