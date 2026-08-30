#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A659F66D9D759CF8_METHOD_1_B5912C653CE7E9C8_OFFSET UNITYSDK_OFFSET(0xB9567F0)

inline static constexpr unsigned int Class_1_A659F66D9D759CF8_TypeDefinitionIndex = 74948;

class Class_1_A659F66D9D759CF8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_B5912C653CE7E9C8(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_A659F66D9D759CF8_METHOD_1_B5912C653CE7E9C8_OFFSET))(a1, a2);
	}
};
