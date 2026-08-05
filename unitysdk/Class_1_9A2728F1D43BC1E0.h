#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13256E311AF13FFD.h"
#include "unitysdk/Struct_2_B679E4D914A10080_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_424;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9A2728F1D43BC1E0_METHOD_1_7F078611F8CA86DA_OFFSET UNITYSDK_OFFSET(0x158F8E00)
#define CLASS_1_9A2728F1D43BC1E0_METHOD_1_C66F733D8D73A486_OFFSET UNITYSDK_OFFSET(0x158F8A30)
#define CLASS_1_9A2728F1D43BC1E0_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x158F8A20)
#define CLASS_1_9A2728F1D43BC1E0__CTOR_OFFSET UNITYSDK_OFFSET(0x158F94C0)

inline static constexpr unsigned int Class_1_9A2728F1D43BC1E0_TypeDefinitionIndex = 87907;

class Class_1_9A2728F1D43BC1E0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A2728F1D43BC1E0__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A2728F1D43BC1E0_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::Enum_3_13256E311AF13FFD Method_1_C66F733D8D73A486(::MoleMole::Battle::Entity* a1, ::Struct_2_B679E4D914A10080_2 a2, ::Class_0_16E4307DCC419505_424* a3)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_B679E4D914A10080_2, ::Class_0_16E4307DCC419505_424*))((::PBYTE)hIl2Cpp + CLASS_1_9A2728F1D43BC1E0_METHOD_1_C66F733D8D73A486_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_13256E311AF13FFD Method_1_7F078611F8CA86DA(::MoleMole::Battle::Entity* a1, ::Struct_2_B679E4D914A10080_2 a2, ::Class_0_16E4307DCC419505_424* a3)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_B679E4D914A10080_2, ::Class_0_16E4307DCC419505_424*))((::PBYTE)hIl2Cpp + CLASS_1_9A2728F1D43BC1E0_METHOD_1_7F078611F8CA86DA_OFFSET))(this, a1, a2, a3);
	}
};
