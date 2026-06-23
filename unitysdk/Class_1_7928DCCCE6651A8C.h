#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13256E311AF13FFD.h"
#include "unitysdk/Struct_2_794DA620EA232BC8.h"
#include "unitysdk/Struct_2_7BD06DA7B946DCA5.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_418;
class Class_0_16E4307DCC419505_484;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_7928DCCCE6651A8C_METHOD_1_1F5B6C0FE99675B4_OFFSET UNITYSDK_OFFSET(0x14384680)
#define CLASS_1_7928DCCCE6651A8C_METHOD_1_B1C71CDDC469151D_1_OFFSET UNITYSDK_OFFSET(0x14384950)
#define CLASS_1_7928DCCCE6651A8C_METHOD_1_B1C71CDDC469151D_OFFSET UNITYSDK_OFFSET(0x143841E0)

inline static constexpr unsigned int Class_1_7928DCCCE6651A8C_TypeDefinitionIndex = 54660;

class Class_1_7928DCCCE6651A8C : public ::System::Object
{
public:
	static ::Enum_3_13256E311AF13FFD Method_1_B1C71CDDC469151D(::Struct_2_794DA620EA232BC8 a1, ::Struct_2_7BD06DA7B946DCA5 a2, ::Class_0_16E4307DCC419505_484* a3, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_418*>* a4)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::Struct_2_794DA620EA232BC8, ::Struct_2_7BD06DA7B946DCA5, ::Class_0_16E4307DCC419505_484*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_418*>*))((::PBYTE)hIl2Cpp + CLASS_1_7928DCCCE6651A8C_METHOD_1_B1C71CDDC469151D_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Battle::Entity* Method_1_1F5B6C0FE99675B4(::Struct_2_7BD06DA7B946DCA5 a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Struct_2_7BD06DA7B946DCA5))((::PBYTE)hIl2Cpp + CLASS_1_7928DCCCE6651A8C_METHOD_1_1F5B6C0FE99675B4_OFFSET))(a1);
	}

	static ::Enum_3_13256E311AF13FFD Method_1_B1C71CDDC469151D_1(::Struct_2_794DA620EA232BC8 a1, ::Struct_2_7BD06DA7B946DCA5 a2, ::Class_0_16E4307DCC419505_484* a3, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_418*>* a4)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::Struct_2_794DA620EA232BC8, ::Struct_2_7BD06DA7B946DCA5, ::Class_0_16E4307DCC419505_484*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_418*>*))((::PBYTE)hIl2Cpp + CLASS_1_7928DCCCE6651A8C_METHOD_1_B1C71CDDC469151D_1_OFFSET))(a1, a2, a3, a4);
	}
};
