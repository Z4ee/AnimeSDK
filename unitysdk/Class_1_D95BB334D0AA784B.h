#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D95BB334D0AA784B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1280AD20)
#define CLASS_1_D95BB334D0AA784B__CTOR_OFFSET UNITYSDK_OFFSET(0x1280A950)

inline static constexpr unsigned int Class_1_D95BB334D0AA784B_TypeDefinitionIndex = 64671;

class Class_1_D95BB334D0AA784B : public ::System::Object
{
public:
	::Il2CppArray<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>* Field_1_0; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x20

	::System::Void _ctor(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95BB334D0AA784B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D95BB334D0AA784B_DISPOSE_OFFSET))(this);
	}
};
