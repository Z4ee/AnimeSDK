#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4E1DB51D0780DCEB_Enum_3_CA7C9A6C1BE1373B.h"
#include "unitysdk/Enum_3_0A43EA4B15EC3408.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_4E1DB51D0780DCEB_CLASS_1_A9DF9F4312C529DF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12069330)
#define CLASS_1_4E1DB51D0780DCEB_CLASS_1_A9DF9F4312C529DF__CTOR_2_OFFSET UNITYSDK_OFFSET(0x12069340)
#define CLASS_1_4E1DB51D0780DCEB_CLASS_1_A9DF9F4312C529DF__CTOR_OFFSET UNITYSDK_OFFSET(0x12069320)

inline static constexpr unsigned int Class_1_4E1DB51D0780DCEB_Class_1_A9DF9F4312C529DF_TypeDefinitionIndex = 65373;

class Class_1_4E1DB51D0780DCEB_Class_1_A9DF9F4312C529DF : public ::System::Object
{
public:
	::System::Func_1<::Class_1_4E1DB51D0780DCEB_Enum_3_CA7C9A6C1BE1373B>* Field_1_0; // 0x10
	::System::Action_1<::System::Int32>* Field_1_1; // 0x18
	::MoleMole::InputLogicEventType Field_1_4; // 0x20
	::System::Int32 Field_1_2; // 0x24
	::Enum_3_0A43EA4B15EC3408 Field_1_3; // 0x28

	::System::Void _ctor(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_CLASS_1_A9DF9F4312C529DF__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Action_1<::System::Int32>* a1, ::System::Int32 a2, ::Enum_3_0A43EA4B15EC3408 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::System::Int32, ::Enum_3_0A43EA4B15EC3408))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_CLASS_1_A9DF9F4312C529DF__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_2(::System::Action_1<::System::Int32>* a1, ::System::Int32 a2, ::Enum_3_0A43EA4B15EC3408 a3, ::MoleMole::InputLogicEventType a4, ::System::Func_1<::Class_1_4E1DB51D0780DCEB_Enum_3_CA7C9A6C1BE1373B>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::System::Int32, ::Enum_3_0A43EA4B15EC3408, ::MoleMole::InputLogicEventType, ::System::Func_1<::Class_1_4E1DB51D0780DCEB_Enum_3_CA7C9A6C1BE1373B>*))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_CLASS_1_A9DF9F4312C529DF__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
