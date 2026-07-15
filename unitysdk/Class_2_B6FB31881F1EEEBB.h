#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_424D497930AB4C44.h"

namespace RPG::Client::PixAir { class PixAirEquipItemChangeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B6FB31881F1EEEBB_METHOD_2_7340F7689DD17B08_OFFSET UNITYSDK_OFFSET(0x18B33B20)
#define CLASS_2_B6FB31881F1EEEBB_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x18B33BB0)
#define CLASS_2_B6FB31881F1EEEBB__CTOR_OFFSET UNITYSDK_OFFSET(0x18B33BA0)

inline static constexpr unsigned int Class_2_B6FB31881F1EEEBB_TypeDefinitionIndex = 75248;

class Class_2_B6FB31881F1EEEBB : public ::Class_1_424D497930AB4C44
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6FB31881F1EEEBB__CTOR_OFFSET))(this);
	}

	static ::Class_2_B6FB31881F1EEEBB* Method_2_7340F7689DD17B08(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>* a1)
	{
		return ((::Class_2_B6FB31881F1EEEBB*(*)(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>*))((::PBYTE)hIl2Cpp + CLASS_2_B6FB31881F1EEEBB_METHOD_2_7340F7689DD17B08_OFFSET))(a1);
	}

	::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6FB31881F1EEEBB_METHOD_2_BA1BB49741CFDFE1_OFFSET))(this);
	}
};
