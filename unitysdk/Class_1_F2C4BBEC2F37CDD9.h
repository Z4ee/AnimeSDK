#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F2C4BBEC2F37CDD9_Struct_2_BBD456EBC9087BC2_17.h"
#include "unitysdk/System/Object.h"

class Class_1_23565752B60BE2F3;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_1406E58AA9664077_OFFSET UNITYSDK_OFFSET(0x14DD54A0)
#define CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_FCF71CCBDA08A1E0_OFFSET UNITYSDK_OFFSET(0x14DD5430)
#define CLASS_1_F2C4BBEC2F37CDD9__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD53D0)

inline static constexpr unsigned int Class_1_F2C4BBEC2F37CDD9_TypeDefinitionIndex = 73540;

class Class_1_F2C4BBEC2F37CDD9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F2C4BBEC2F37CDD9_Struct_2_BBD456EBC9087BC2_17>* Field_1_7; // 0x10
	::Class_1_23565752B60BE2F3* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C4BBEC2F37CDD9__CTOR_OFFSET))(this);
	}

	static ::Class_1_F2C4BBEC2F37CDD9* Method_1_FCF71CCBDA08A1E0(::Class_1_23565752B60BE2F3* a1, ::System::Int32 a2)
	{
		return ((::Class_1_F2C4BBEC2F37CDD9*(*)(::Class_1_23565752B60BE2F3*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_FCF71CCBDA08A1E0_OFFSET))(a1, a2);
	}

	static ::Class_1_F2C4BBEC2F37CDD9* Method_1_1406E58AA9664077(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::Class_1_F2C4BBEC2F37CDD9*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2C4BBEC2F37CDD9_METHOD_1_1406E58AA9664077_OFFSET))(a1, a2);
	}
};
