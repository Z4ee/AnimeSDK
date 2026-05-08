#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F2C4BBEC2F37CDD9_Struct_2_BBD456EBC9087BC2_8.h"
#include "unitysdk/System/Object.h"

class Class_1_BBD5871BDCC78D93;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_1406E58AA9664077_OFFSET UNITYSDK_OFFSET(0x15932750)
#define CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_FCF71CCBDA08A1E0_OFFSET UNITYSDK_OFFSET(0x15932CD0)
#define CLASS_1_F2C4BBEC2F37CDD9__CTOR_OFFSET UNITYSDK_OFFSET(0x159326F0)

inline static constexpr unsigned int Class_1_F2C4BBEC2F37CDD9_TypeDefinitionIndex = 62260;

class Class_1_F2C4BBEC2F37CDD9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F2C4BBEC2F37CDD9_Struct_2_BBD456EBC9087BC2_8>* Field_1_1; // 0x10
	::Class_1_BBD5871BDCC78D93* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C4BBEC2F37CDD9__CTOR_OFFSET))(this);
	}

	static ::Class_1_F2C4BBEC2F37CDD9* Method_1_1406E58AA9664077(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::Class_1_F2C4BBEC2F37CDD9*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_1406E58AA9664077_OFFSET))(a1, a2);
	}

	static ::Class_1_F2C4BBEC2F37CDD9* Method_1_FCF71CCBDA08A1E0(::Class_1_BBD5871BDCC78D93* a1, ::System::Int32 a2)
	{
		return ((::Class_1_F2C4BBEC2F37CDD9*(*)(::Class_1_BBD5871BDCC78D93*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_FCF71CCBDA08A1E0_OFFSET))(a1, a2);
	}
};
