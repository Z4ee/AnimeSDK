#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B4138D32F75250D2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_299;
class Class_2_CEC585D0736F3660;
namespace Nap::NapECS { class EcsEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_2E68421C054C19B7_METHOD_1_667FEF37E856C091_OFFSET UNITYSDK_OFFSET(0x1A8BBDD0)
#define CLASS_1_2E68421C054C19B7_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1A8BBD90)
#define CLASS_1_2E68421C054C19B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BBD60)

inline static constexpr unsigned int Class_1_2E68421C054C19B7_TypeDefinitionIndex = 87422;

class Class_1_2E68421C054C19B7 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::Action* Field_1_4; // 0x18
	::Nap::NapECS::EcsEntity* Field_1_7; // 0x20
	::System::Action_1<::Class_2_CEC585D0736F3660*>* Field_1_10; // 0x28
	::System::Action* Field_1_11; // 0x30
	::System::Int32 Field_1_0; // 0x38
	::Enum_3_B4138D32F75250D2 Field_1_6; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::Nap::NapECS::EcsEntity* a2, ::Enum_3_B4138D32F75250D2 a3, ::System::String* a4, ::System::Action* a5, ::System::Action* a6, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::EcsEntity*, ::Enum_3_B4138D32F75250D2, ::System::String*, ::System::Action*, ::System::Action*, ::System::Action_1<::Class_2_CEC585D0736F3660*>*))((::PBYTE)hIl2Cpp + CLASS_1_2E68421C054C19B7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E68421C054C19B7_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_299* Method_1_667FEF37E856C091()
	{
		return ((::Class_0_16E4307DCC419505_299*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E68421C054C19B7_METHOD_1_667FEF37E856C091_OFFSET))(this);
	}
};
