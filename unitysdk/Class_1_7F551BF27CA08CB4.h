#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7F551BF27CA08CB4_PropVersion.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class IMatchThreePropData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7F551BF27CA08CB4_METHOD_1_5CADD7C710295911_OFFSET UNITYSDK_OFFSET(0x180CBA50)
#define CLASS_1_7F551BF27CA08CB4_METHOD_1_7D8269A6956AA4C4_OFFSET UNITYSDK_OFFSET(0x180CB590)
#define CLASS_1_7F551BF27CA08CB4_METHOD_1_7F7FABD8EEA470FF_OFFSET UNITYSDK_OFFSET(0x180CBB80)
#define CLASS_1_7F551BF27CA08CB4_METHOD_1_8226378A675FC51C_OFFSET UNITYSDK_OFFSET(0x180CB650)
#define CLASS_1_7F551BF27CA08CB4_METHOD_1_A8799FF683AD74CF_OFFSET UNITYSDK_OFFSET(0x180CB850)

inline static constexpr unsigned int Class_1_7F551BF27CA08CB4_TypeDefinitionIndex = 66061;

class Class_1_7F551BF27CA08CB4 : public ::System::Object
{
public:
	static ::RPG::Client::IMatchThreePropData* Method_1_7D8269A6956AA4C4(::Class_1_7F551BF27CA08CB4_PropVersion a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::Client::IMatchThreePropData*(*)(::Class_1_7F551BF27CA08CB4_PropVersion, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7F551BF27CA08CB4_METHOD_1_7D8269A6956AA4C4_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* Method_1_8226378A675FC51C(::Class_1_7F551BF27CA08CB4_PropVersion a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*(*)(::Class_1_7F551BF27CA08CB4_PropVersion, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_7F551BF27CA08CB4_METHOD_1_8226378A675FC51C_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* Method_1_A8799FF683AD74CF(::Class_1_7F551BF27CA08CB4_PropVersion a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*(*)(::Class_1_7F551BF27CA08CB4_PropVersion, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7F551BF27CA08CB4_METHOD_1_A8799FF683AD74CF_OFFSET))(a1, a2);
	}

	static ::Class_1_7F551BF27CA08CB4_PropVersion Method_1_5CADD7C710295911(::RPG::Client::IMatchThreePropData* a1)
	{
		return ((::Class_1_7F551BF27CA08CB4_PropVersion(*)(::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + CLASS_1_7F551BF27CA08CB4_METHOD_1_5CADD7C710295911_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7F7FABD8EEA470FF(::RPG::Client::IMatchThreePropData* a1, ::Class_1_7F551BF27CA08CB4_PropVersion a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::IMatchThreePropData*, ::Class_1_7F551BF27CA08CB4_PropVersion))((::PBYTE)hIl2Cpp + CLASS_1_7F551BF27CA08CB4_METHOD_1_7F7FABD8EEA470FF_OFFSET))(a1, a2);
	}
};
