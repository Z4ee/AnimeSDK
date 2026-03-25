#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
class Class_3_7E25C9E6907AC48F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7A31F3D3B39DA032_EXECUTE_OFFSET UNITYSDK_OFFSET(0x169F6030)
#define CLASS_1_7A31F3D3B39DA032_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x169F5760)
#define CLASS_1_7A31F3D3B39DA032_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x169F9430)
#define CLASS_1_7A31F3D3B39DA032__CTOR_OFFSET UNITYSDK_OFFSET(0x169F5700)

inline static constexpr unsigned int Class_1_7A31F3D3B39DA032_TypeDefinitionIndex = 32864;

class Class_1_7A31F3D3B39DA032 : public ::System::Object
{
public:
	::Class_3_7E25C9E6907AC48F* Field_1_1; // 0x10
	::Class_1_867B6CE75953535A* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_7A31F3D3B39DA032__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A31F3D3B39DA032_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A31F3D3B39DA032_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A31F3D3B39DA032_TEARDOWN_OFFSET))(this);
	}
};
