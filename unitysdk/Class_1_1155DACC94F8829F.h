#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_928;
class Class_0_16E4307DCC419505_933;
class Class_0_16E4307DCC419505_935;
class Class_1_811C21B122C8082C;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_1155DACC94F8829F_METHOD_1_01B1B520DB1442C2_1_OFFSET UNITYSDK_OFFSET(0x157257E0)
#define CLASS_1_1155DACC94F8829F_METHOD_1_01B1B520DB1442C2_OFFSET UNITYSDK_OFFSET(0x15725500)
#define CLASS_1_1155DACC94F8829F_METHOD_1_DA91AA44E7DE3A11_OFFSET UNITYSDK_OFFSET(0x157255B0)
#define CLASS_1_1155DACC94F8829F__CTOR_OFFSET UNITYSDK_OFFSET(0x157254F0)

inline static constexpr unsigned int Class_1_1155DACC94F8829F_TypeDefinitionIndex = 63897;

class Class_1_1155DACC94F8829F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_928* HJOADEMMCLN; // 0x10
	::Class_0_16E4307DCC419505_935* AMJKPLAFION; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_928* a1, ::Class_0_16E4307DCC419505_935* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_928*, ::Class_0_16E4307DCC419505_935*))((::PBYTE)hIl2Cpp + CLASS_1_1155DACC94F8829F__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_933* Method_1_01B1B520DB1442C2(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_933*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*))((::PBYTE)hIl2Cpp + CLASS_1_1155DACC94F8829F_METHOD_1_01B1B520DB1442C2_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_933*>* Method_1_DA91AA44E7DE3A11(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* a3)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_933*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*))((::PBYTE)hIl2Cpp + CLASS_1_1155DACC94F8829F_METHOD_1_DA91AA44E7DE3A11_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_933* Method_1_01B1B520DB1442C2_1(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_933*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*))((::PBYTE)hIl2Cpp + CLASS_1_1155DACC94F8829F_METHOD_1_01B1B520DB1442C2_1_OFFSET))(this, a1, a2);
	}
};
