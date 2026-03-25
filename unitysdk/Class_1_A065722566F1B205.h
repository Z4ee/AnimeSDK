#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_29D63C42EA6535E9;
class Class_1_6ABE227FEB7213A4;
class Class_1_87C11F1B598BA500;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A065722566F1B205_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x8D34CB0)
#define CLASS_1_A065722566F1B205_METHOD_1_BD484F9137D8673A_OFFSET UNITYSDK_OFFSET(0x8D34D90)
#define CLASS_1_A065722566F1B205_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x8D34CC0)
#define CLASS_1_A065722566F1B205__CTOR_OFFSET UNITYSDK_OFFSET(0x8D34CD0)

inline static constexpr unsigned int Class_1_A065722566F1B205_TypeDefinitionIndex = 50952;

class Class_1_A065722566F1B205 : public ::System::Object
{
public:
	::Class_1_6ABE227FEB7213A4* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Struct_2_BC950E36747FB4C9, ::System::UInt32>, ::Class_1_87C11F1B598BA500*>* Field_1_1; // 0x18
	::Class_1_29D63C42EA6535E9* _Factory_k__BackingField; // 0x20

	::System::Void _ctor(::Class_1_6ABE227FEB7213A4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6ABE227FEB7213A4*))((::PBYTE)hIl2Cpp + CLASS_1_A065722566F1B205__CTOR_OFFSET))(this, a1);
	}

	::Class_1_29D63C42EA6535E9* get_Factory()
	{
		return ((::Class_1_29D63C42EA6535E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A065722566F1B205_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_29D63C42EA6535E9* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29D63C42EA6535E9*))((::PBYTE)hIl2Cpp + CLASS_1_A065722566F1B205_SET_FACTORY_OFFSET))(this, value);
	}

	::Class_1_87C11F1B598BA500* Method_1_BD484F9137D8673A(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::Class_1_87C11F1B598BA500*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A065722566F1B205_METHOD_1_BD484F9137D8673A_OFFSET))(this, a1, a2);
	}
};
