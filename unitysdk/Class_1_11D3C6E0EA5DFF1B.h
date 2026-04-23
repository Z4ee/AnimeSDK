#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11D3C6E0EA5DFF1B_CLEANUP_OFFSET UNITYSDK_OFFSET(0x17E3FA30)
#define CLASS_1_11D3C6E0EA5DFF1B_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17E40260)
#define CLASS_1_11D3C6E0EA5DFF1B__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3FA20)

inline static constexpr unsigned int Class_1_11D3C6E0EA5DFF1B_TypeDefinitionIndex = 38066;

class Class_1_11D3C6E0EA5DFF1B : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B_CLEANUP_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11D3C6E0EA5DFF1B_INITIALIZE_OFFSET))(this);
	}
};
