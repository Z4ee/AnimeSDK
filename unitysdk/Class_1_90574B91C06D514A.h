#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_90574B91C06D514A_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x117CF780)
#define CLASS_1_90574B91C06D514A_METHOD_1_106D675CC66101BE_OFFSET UNITYSDK_OFFSET(0x117CFCC0)
#define CLASS_1_90574B91C06D514A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x117CFBB0)
#define CLASS_1_90574B91C06D514A_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x117CFC60)
#define CLASS_1_90574B91C06D514A_METHOD_1_BB63911B3591DFC5_OFFSET UNITYSDK_OFFSET(0x117CFD80)
#define CLASS_1_90574B91C06D514A_METHOD_1_F04C04E6DB6D6224_OFFSET UNITYSDK_OFFSET(0x117CF830)
#define CLASS_1_90574B91C06D514A_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x117CF790)
#define CLASS_1_90574B91C06D514A__CTOR_OFFSET UNITYSDK_OFFSET(0x117CF7A0)

inline static constexpr unsigned int Class_1_90574B91C06D514A_TypeDefinitionIndex = 59377;

class Class_1_90574B91C06D514A : public ::System::Object
{
public:
	static ::Class_1_90574B91C06D514A** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_90574B91C06D514A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90574B91C06D514A_TypeDefinitionIndex)->GetStaticField(0x125B0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A__CTOR_OFFSET))(this);
	}

	static ::Class_1_90574B91C06D514A* get_Instance()
	{
		return ((::Class_1_90574B91C06D514A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_90574B91C06D514A* value)
	{
		return ((::System::Void(*)(::Class_1_90574B91C06D514A*))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_SET_INSTANCE_OFFSET))(value);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_106D675CC66101BE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_METHOD_1_106D675CC66101BE_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_BB63911B3591DFC5(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_METHOD_1_BB63911B3591DFC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F04C04E6DB6D6224()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90574B91C06D514A_METHOD_1_F04C04E6DB6D6224_OFFSET))(this);
	}
};
