#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_A8076FB29E874BEA_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x14CBC9F0)
#define CLASS_4_A8076FB29E874BEA_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14CBC6B0)
#define CLASS_4_A8076FB29E874BEA_METHOD_4_BB5DFAE4FCEC0C51_OFFSET UNITYSDK_OFFSET(0x14CBC790)
#define CLASS_4_A8076FB29E874BEA__CTOR_OFFSET UNITYSDK_OFFSET(0x14CBC900)

inline static constexpr unsigned int Class_4_A8076FB29E874BEA_TypeDefinitionIndex = 41748;

class Class_4_A8076FB29E874BEA : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_0; // 0x30
	::System::Action_1<::System::EventArgs*>* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A8076FB29E874BEA__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A8076FB29E874BEA_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_BB5DFAE4FCEC0C51(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_A8076FB29E874BEA_METHOD_4_BB5DFAE4FCEC0C51_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A8076FB29E874BEA_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
