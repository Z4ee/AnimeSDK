#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_413ABC1894817F1B.h"

namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C64B0D5502576BBF_METHOD_2_3C01BCF07AF85E8C_OFFSET UNITYSDK_OFFSET(0x15834DA0)
#define CLASS_2_C64B0D5502576BBF_METHOD_2_B7070232125649E6_OFFSET UNITYSDK_OFFSET(0x158350F0)
#define CLASS_2_C64B0D5502576BBF_METHOD_2_E9A129E0C8207233_OFFSET UNITYSDK_OFFSET(0x15834C00)
#define CLASS_2_C64B0D5502576BBF__CTOR_OFFSET UNITYSDK_OFFSET(0x158351B0)

inline static constexpr unsigned int Class_2_C64B0D5502576BBF_TypeDefinitionIndex = 80868;

class Class_2_C64B0D5502576BBF : public ::Class_1_413ABC1894817F1B
{
public:
	::Il2CppArray<::System::Int32>* KJMDDAHEODL; // 0x28
	::Il2CppArray<::System::Int32>* FIIKLMKCFNB; // 0x30
	::Il2CppArray<::System::Boolean>* OLMHNPNMACN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C64B0D5502576BBF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A129E0C8207233(::System::Collections::Generic::List_1<::System::Version*>* a1, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Version*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_2_C64B0D5502576BBF_METHOD_2_E9A129E0C8207233_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Int32>* Method_2_3C01BCF07AF85E8C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C64B0D5502576BBF_METHOD_2_3C01BCF07AF85E8C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B7070232125649E6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C64B0D5502576BBF_METHOD_2_B7070232125649E6_OFFSET))(this);
	}
};
