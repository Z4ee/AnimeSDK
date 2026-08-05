#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"
#include "unitysdk/Struct_2_C70A12CE5BBC6553.h"
#include "unitysdk/System/Object.h"

class Class_1_18B5C63655A4A803;
class Class_1_BA03E529635EF083_Class_1_EC905AE436B97AD0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9518B5776748B41E_METHOD_1_0D20AC2760D59C01_OFFSET UNITYSDK_OFFSET(0x161885C0)
#define CLASS_1_9518B5776748B41E_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16188520)
#define CLASS_1_9518B5776748B41E_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x161885D0)
#define CLASS_1_9518B5776748B41E_METHOD_1_9CD75C3C016FB4E6_OFFSET UNITYSDK_OFFSET(0x16188620)
#define CLASS_1_9518B5776748B41E_METHOD_1_9E972577C5305966_OFFSET UNITYSDK_OFFSET(0x16188570)
#define CLASS_1_9518B5776748B41E_METHOD_1_AEA769B4E1573E8E_OFFSET UNITYSDK_OFFSET(0x16188610)
#define CLASS_1_9518B5776748B41E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16188810)
#define CLASS_1_9518B5776748B41E__CTOR_OFFSET UNITYSDK_OFFSET(0x16188510)

inline static constexpr unsigned int Class_1_9518B5776748B41E_TypeDefinitionIndex = 73562;

class Class_1_9518B5776748B41E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_18B5C63655A4A803*>* Field_1_0; // 0x10
	::Foundation::Unreal::FGameplayTag Field_1_1; // 0x18
	::System::Boolean Field_1_7; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_18B5C63655A4A803*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_18B5C63655A4A803*>*))((::PBYTE)hIl2Cpp + CLASS_1_9518B5776748B41E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9518B5776748B41E_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E972577C5305966(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_9518B5776748B41E_METHOD_1_9E972577C5305966_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D20AC2760D59C01(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_9518B5776748B41E_METHOD_1_0D20AC2760D59C01_OFFSET))(this, a1);
	}

	static ::Class_1_9518B5776748B41E* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_9518B5776748B41E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9518B5776748B41E_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	::Foundation::Unreal::FGameplayTag Method_1_AEA769B4E1573E8E()
	{
		return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9518B5776748B41E_METHOD_1_AEA769B4E1573E8E_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::EffectResult Method_1_9CD75C3C016FB4E6(::Struct_2_C70A12CE5BBC6553& a1, ::Struct_2_C70A12CE5BBC6553& a2, ::Class_1_BA03E529635EF083_Class_1_EC905AE436B97AD0* a3)
	{
		return ((::MoleMole::HollowChessboard::EffectResult(*)(::PVOID, ::Struct_2_C70A12CE5BBC6553&, ::Struct_2_C70A12CE5BBC6553&, ::Class_1_BA03E529635EF083_Class_1_EC905AE436B97AD0*))((::PBYTE)hIl2Cpp + CLASS_1_9518B5776748B41E_METHOD_1_9CD75C3C016FB4E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9518B5776748B41E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
