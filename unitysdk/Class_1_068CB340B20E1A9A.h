#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/RIStateSetReason.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class FiveDimRIStateEmissionAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_068CB340B20E1A9A_CLEAR_OFFSET UNITYSDK_OFFSET(0x1677CDC0)
#define CLASS_1_068CB340B20E1A9A_METHOD_1_521CB024F8C52E3B_OFFSET UNITYSDK_OFFSET(0x1677CE20)
#define CLASS_1_068CB340B20E1A9A_METHOD_1_9C6FAA2D9E6CBDB8_OFFSET UNITYSDK_OFFSET(0x1677CFC0)
#define CLASS_1_068CB340B20E1A9A_METHOD_1_CEC401124C789246_OFFSET UNITYSDK_OFFSET(0x1677D130)
#define CLASS_1_068CB340B20E1A9A_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1677CC10)
#define CLASS_1_068CB340B20E1A9A_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1677CD80)
#define CLASS_1_068CB340B20E1A9A__CTOR_OFFSET UNITYSDK_OFFSET(0x1677D270)

inline static constexpr unsigned int Class_1_068CB340B20E1A9A_TypeDefinitionIndex = 33343;

class Class_1_068CB340B20E1A9A : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimRIStateEmissionAction* Field_1_2; // 0x10
	::RPG::PoolDictionary_2<::System::String*, ::RPG::Client::LittleGame::FiveDim::RIStateSetReason>* Field_1_3; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::System::Single Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068CB340B20E1A9A__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068CB340B20E1A9A_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068CB340B20E1A9A_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_068CB340B20E1A9A_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_521CB024F8C52E3B(::System::String* a1, ::RPG::Client::LittleGame::FiveDim::RIStateSetReason a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGame::FiveDim::RIStateSetReason))((::PBYTE)hIl2Cpp + CLASS_1_068CB340B20E1A9A_METHOD_1_521CB024F8C52E3B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9C6FAA2D9E6CBDB8(::System::String* a1, ::RPG::Client::LittleGame::FiveDim::RIStateSetReason a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGame::FiveDim::RIStateSetReason))((::PBYTE)hIl2Cpp + CLASS_1_068CB340B20E1A9A_METHOD_1_9C6FAA2D9E6CBDB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CEC401124C789246(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_068CB340B20E1A9A_METHOD_1_CEC401124C789246_OFFSET))(this, a1);
	}
};
