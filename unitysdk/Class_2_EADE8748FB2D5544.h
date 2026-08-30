#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_213.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EADE8748FB2D5544_METHOD_2_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x14C2FDE0)
#define CLASS_2_EADE8748FB2D5544__CTOR_OFFSET UNITYSDK_OFFSET(0x14C2FDC0)

inline static constexpr unsigned int Class_2_EADE8748FB2D5544_TypeDefinitionIndex = 77204;

class Class_2_EADE8748FB2D5544 : public ::Class_1_43BD383C98B4C0C5_213
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* GLHBNGAJAMK; // 0x18
	::System::Boolean ADMNLDMFGKK; // 0x20
	::System::UInt32 ECDGGFANCFL; // 0x24

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_EADE8748FB2D5544__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_FD611945730E269E* Method_2_16E792B668863BDD(::Class_1_F9FBCC956DFCF137_27* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*))((::PBYTE)hIl2Cpp + CLASS_2_EADE8748FB2D5544_METHOD_2_16E792B668863BDD_OFFSET))(this, a1);
	}
};
