#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13256E311AF13FFD.h"
#include "unitysdk/Struct_2_35A988BF5E50EA31.h"
#include "unitysdk/Struct_2_B679E4D914A10080_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_424;
class Class_0_16E4307DCC419505_425;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_0DF64AA079F3D5E5_METHOD_1_1F5B6C0FE99675B4_OFFSET UNITYSDK_OFFSET(0x12B9A5A0)
#define CLASS_1_0DF64AA079F3D5E5_METHOD_1_D5031458C22A17FC_1_OFFSET UNITYSDK_OFFSET(0x12B9A870)
#define CLASS_1_0DF64AA079F3D5E5_METHOD_1_D5031458C22A17FC_OFFSET UNITYSDK_OFFSET(0x12B9A0F0)

inline static constexpr unsigned int Class_1_0DF64AA079F3D5E5_TypeDefinitionIndex = 48671;

class Class_1_0DF64AA079F3D5E5 : public ::System::Object
{
public:
	static ::Enum_3_13256E311AF13FFD Method_1_D5031458C22A17FC(::Struct_2_35A988BF5E50EA31 a1, ::Struct_2_B679E4D914A10080_2 a2, ::Class_0_16E4307DCC419505_424* a3, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_425*>* a4)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::Struct_2_35A988BF5E50EA31, ::Struct_2_B679E4D914A10080_2, ::Class_0_16E4307DCC419505_424*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_425*>*))((::PBYTE)hIl2Cpp + CLASS_1_0DF64AA079F3D5E5_METHOD_1_D5031458C22A17FC_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Battle::Entity* Method_1_1F5B6C0FE99675B4(::Struct_2_B679E4D914A10080_2 a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Struct_2_B679E4D914A10080_2))((::PBYTE)hIl2Cpp + CLASS_1_0DF64AA079F3D5E5_METHOD_1_1F5B6C0FE99675B4_OFFSET))(a1);
	}

	static ::Enum_3_13256E311AF13FFD Method_1_D5031458C22A17FC_1(::Struct_2_35A988BF5E50EA31 a1, ::Struct_2_B679E4D914A10080_2 a2, ::Class_0_16E4307DCC419505_424* a3, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_425*>* a4)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::Struct_2_35A988BF5E50EA31, ::Struct_2_B679E4D914A10080_2, ::Class_0_16E4307DCC419505_424*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_425*>*))((::PBYTE)hIl2Cpp + CLASS_1_0DF64AA079F3D5E5_METHOD_1_D5031458C22A17FC_1_OFFSET))(a1, a2, a3, a4);
	}
};
