#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1BA6282D7CB2D528_METHOD_1_59C315C949C64D86_OFFSET UNITYSDK_OFFSET(0x12A9BAC0)

inline static constexpr unsigned int Class_1_1BA6282D7CB2D528_TypeDefinitionIndex = 69306;

class Class_1_1BA6282D7CB2D528 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_59C315C949C64D86(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_1BA6282D7CB2D528_METHOD_1_59C315C949C64D86_OFFSET))(a1, a2);
	}
};
