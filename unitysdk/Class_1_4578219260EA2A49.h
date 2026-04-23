#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B_1;
class Class_2_921296CE04546AF9;
class Class_3_99BC749707F2A8AC;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4578219260EA2A49_EXECUTE_OFFSET UNITYSDK_OFFSET(0x125546E0)
#define CLASS_1_4578219260EA2A49_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x125545B0)
#define CLASS_1_4578219260EA2A49_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12554550)
#define CLASS_1_4578219260EA2A49_METHOD_1_2E4E1B46FA623587_OFFSET UNITYSDK_OFFSET(0x125549B0)
#define CLASS_1_4578219260EA2A49_METHOD_1_5E9D292062722EE1_OFFSET UNITYSDK_OFFSET(0x125548E0)
#define CLASS_1_4578219260EA2A49__CTOR_OFFSET UNITYSDK_OFFSET(0x12554540)

inline static constexpr unsigned int Class_1_4578219260EA2A49_TypeDefinitionIndex = 70417;

class Class_1_4578219260EA2A49 : public ::System::Object
{
public:
	::Class_1_B4357A1C72BABC6B_1* Field_1_0; // 0x10
	::Class_3_99BC749707F2A8AC* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_921296CE04546AF9*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B_1* a1, ::Class_3_99BC749707F2A8AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B_1*, ::Class_3_99BC749707F2A8AC*))((::PBYTE)hIl2Cpp + CLASS_1_4578219260EA2A49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4578219260EA2A49_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4578219260EA2A49_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4578219260EA2A49_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_5E9D292062722EE1(::Class_2_921296CE04546AF9* a1, ::System::Collections::Generic::List_1<::Class_2_921296CE04546AF9*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::System::Collections::Generic::List_1<::Class_2_921296CE04546AF9*>*))((::PBYTE)hIl2Cpp + CLASS_1_4578219260EA2A49_METHOD_1_5E9D292062722EE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2E4E1B46FA623587(::Class_2_921296CE04546AF9* a1, ::System::Collections::Generic::List_1<::Class_2_921296CE04546AF9*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_921296CE04546AF9*, ::System::Collections::Generic::List_1<::Class_2_921296CE04546AF9*>*))((::PBYTE)hIl2Cpp + CLASS_1_4578219260EA2A49_METHOD_1_2E4E1B46FA623587_OFFSET))(this, a1, a2);
	}
};
