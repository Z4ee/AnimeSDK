#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_199.h"

class Class_1_F9FBCC956DFCF137_25;
class Class_1_FD611945730E269E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EADE8748FB2D5544_METHOD_2_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x181A76F0)
#define CLASS_2_EADE8748FB2D5544__CTOR_OFFSET UNITYSDK_OFFSET(0x181A76D0)

inline static constexpr unsigned int Class_2_EADE8748FB2D5544_TypeDefinitionIndex = 73720;

class Class_2_EADE8748FB2D5544 : public ::Class_1_43BD383C98B4C0C5_199
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20
	::System::UInt32 Field_2_3; // 0x24

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_EADE8748FB2D5544__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_FD611945730E269E* Method_2_16E792B668863BDD(::Class_1_F9FBCC956DFCF137_25* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*))((::PBYTE)hIl2Cpp + CLASS_2_EADE8748FB2D5544_METHOD_2_16E792B668863BDD_OFFSET))(this, a1);
	}
};
