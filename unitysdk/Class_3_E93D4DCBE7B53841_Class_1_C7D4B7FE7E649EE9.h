#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Struct_2_D89177B577188692.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_E93D4DCBE7B53841_CLASS_1_C7D4B7FE7E649EE9_METHOD_1_2CD98E928A4B8CAA_OFFSET UNITYSDK_OFFSET(0x142FCD20)
#define CLASS_3_E93D4DCBE7B53841_CLASS_1_C7D4B7FE7E649EE9_METHOD_1_5E19BB5F463EDA9E_OFFSET UNITYSDK_OFFSET(0x142FCB40)
#define CLASS_3_E93D4DCBE7B53841_CLASS_1_C7D4B7FE7E649EE9_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x142FD030)
#define CLASS_3_E93D4DCBE7B53841_CLASS_1_C7D4B7FE7E649EE9__CTOR_OFFSET UNITYSDK_OFFSET(0x142FCB30)

inline static constexpr unsigned int Class_3_E93D4DCBE7B53841_Class_1_C7D4B7FE7E649EE9_TypeDefinitionIndex = 72770;

class Class_3_E93D4DCBE7B53841_Class_1_C7D4B7FE7E649EE9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Field_1_0; // 0x10
	::Struct_2_D89177B577188692 Field_1_2; // 0x18
	::System::Int32 Field_1_6; // 0x38
	::System::Int32 Field_1_3; // 0x3C
	::System::Int32 Field_1_7; // 0x40
	::System::Boolean Field_1_4; // 0x44
	::System::Boolean Field_1_1; // 0x45
	::System::Int32 Field_1_9; // 0x48
	::System::Int32 Field_1_8; // 0x4C
	::System::Single Field_1_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E93D4DCBE7B53841_CLASS_1_C7D4B7FE7E649EE9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5E19BB5F463EDA9E(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + CLASS_3_E93D4DCBE7B53841_CLASS_1_C7D4B7FE7E649EE9_METHOD_1_5E19BB5F463EDA9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CD98E928A4B8CAA(::Class_1_D65512A83CF70AB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + CLASS_3_E93D4DCBE7B53841_CLASS_1_C7D4B7FE7E649EE9_METHOD_1_2CD98E928A4B8CAA_OFFSET))(this, a1);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E93D4DCBE7B53841_CLASS_1_C7D4B7FE7E649EE9_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}
};
