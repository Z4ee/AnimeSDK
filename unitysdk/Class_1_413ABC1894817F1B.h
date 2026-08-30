#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_413ABC1894817F1B_METHOD_1_4B1F13E1D3BC4E3D_OFFSET UNITYSDK_OFFSET(0x162D8AE0)
#define CLASS_1_413ABC1894817F1B_METHOD_1_A54D7A0BDF187BA4_OFFSET UNITYSDK_OFFSET(0x162D8A70)
#define CLASS_1_413ABC1894817F1B__CTOR_OFFSET UNITYSDK_OFFSET(0x162D8B30)

inline static constexpr unsigned int Class_1_413ABC1894817F1B_TypeDefinitionIndex = 80866;

class Class_1_413ABC1894817F1B : public ::System::Object
{
public:
	::Il2CppArray<::Il2CppArray<::System::Int32>*>* EFHHHMFJOOA; // 0x10
	::System::Collections::Generic::List_1<::System::Version*>* BLICIKDLKOC; // 0x18
	::System::Int32 JDIIOGHKECL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_413ABC1894817F1B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A54D7A0BDF187BA4(::System::Collections::Generic::List_1<::System::Version*>* a1, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Version*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_413ABC1894817F1B_METHOD_1_A54D7A0BDF187BA4_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Int32>* Method_1_4B1F13E1D3BC4E3D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_413ABC1894817F1B_METHOD_1_4B1F13E1D3BC4E3D_OFFSET))(this, a1, a2);
	}
};
