#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/ReactiveSystem_1.h"

class Class_0_16E4307DCC419505_203;
class Class_1_867B6CE75953535A;
class Class_2_0F2988457304ACEC;
class Class_2_6660DE6E19DC27BF;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AD646F1084425F78_EXECUTE_OFFSET UNITYSDK_OFFSET(0x167AE1B0)
#define CLASS_2_AD646F1084425F78_FILTER_OFFSET UNITYSDK_OFFSET(0x167AE0E0)
#define CLASS_2_AD646F1084425F78_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x167ADF40)
#define CLASS_2_AD646F1084425F78__CTOR_OFFSET UNITYSDK_OFFSET(0x167ADED0)

inline static constexpr unsigned int Class_2_AD646F1084425F78_TypeDefinitionIndex = 32682;

class Class_2_AD646F1084425F78 : public ::Entitas::ReactiveSystem_1<::Class_2_6660DE6E19DC27BF*>
{
public:
	::Class_1_867B6CE75953535A* Field_2_0; // 0x28
	::Class_0_16E4307DCC419505_203* Field_2_1; // 0x30

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_2_0F2988457304ACEC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_2_0F2988457304ACEC*))((::PBYTE)hIl2Cpp + CLASS_2_AD646F1084425F78__CTOR_OFFSET))(this, a1, a2);
	}

	::Entitas::ICollector_1<::Class_2_6660DE6E19DC27BF*>* GetTrigger(::Entitas::IContext_1<::Class_2_6660DE6E19DC27BF*>* a1)
	{
		return ((::Entitas::ICollector_1<::Class_2_6660DE6E19DC27BF*>*(*)(::PVOID, ::Entitas::IContext_1<::Class_2_6660DE6E19DC27BF*>*))((::PBYTE)hIl2Cpp + CLASS_2_AD646F1084425F78_GETTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Filter(::Class_2_6660DE6E19DC27BF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6660DE6E19DC27BF*))((::PBYTE)hIl2Cpp + CLASS_2_AD646F1084425F78_FILTER_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Collections::Generic::List_1<::Class_2_6660DE6E19DC27BF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_6660DE6E19DC27BF*>*))((::PBYTE)hIl2Cpp + CLASS_2_AD646F1084425F78_EXECUTE_OFFSET))(this, a1);
	}
};
