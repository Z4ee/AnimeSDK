#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class SO_Sequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_323BC61B7C9CAC0F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114B9F70)
#define CLASS_3_323BC61B7C9CAC0F_METHOD_3_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x114BAD70)
#define CLASS_3_323BC61B7C9CAC0F_METHOD_3_159AA9F70B7AB725_OFFSET UNITYSDK_OFFSET(0x114BA3A0)
#define CLASS_3_323BC61B7C9CAC0F_METHOD_3_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x114BA0D0)
#define CLASS_3_323BC61B7C9CAC0F_METHOD_3_48A85C2067A778AB_OFFSET UNITYSDK_OFFSET(0x114BB430)
#define CLASS_3_323BC61B7C9CAC0F_METHOD_3_C638E91FC0D3A13A_1_OFFSET UNITYSDK_OFFSET(0x114BB1D0)
#define CLASS_3_323BC61B7C9CAC0F_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x114BAC20)
#define CLASS_3_323BC61B7C9CAC0F_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x114BB480)
#define CLASS_3_323BC61B7C9CAC0F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x114BA140)
#define CLASS_3_323BC61B7C9CAC0F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x114BAEB0)
#define CLASS_3_323BC61B7C9CAC0F_TICK_OFFSET UNITYSDK_OFFSET(0x114BB320)
#define CLASS_3_323BC61B7C9CAC0F__CTOR_OFFSET UNITYSDK_OFFSET(0x114B9C10)
#define CLASS_3_323BC61B7C9CAC0F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114BB490)
#define CLASS_3_323BC61B7C9CAC0F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x114BB4A0)

inline static constexpr unsigned int Class_3_323BC61B7C9CAC0F_TypeDefinitionIndex = 42147;

class Class_3_323BC61B7C9CAC0F : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_Sequence*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_3_0; // 0x40
	::System::Boolean Field_3_2; // 0x48
	::System::Boolean Field_3_3; // 0x49
	::System::Boolean Field_3_4; // 0x4A
	::System::Int32 Field_3_1; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_Sequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_Sequence*))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_3_358A144584A5DBFC()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F_METHOD_3_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskState Method_3_159AA9F70B7AB725(::System::Single a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F_METHOD_3_159AA9F70B7AB725_OFFSET))(this, a1);
	}

	::System::Void Method_3_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_3_C638E91FC0D3A13A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F_METHOD_3_C638E91FC0D3A13A_1_OFFSET))(this);
	}

	::System::Void Method_3_48A85C2067A778AB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F_METHOD_3_48A85C2067A778AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F_METHOD_3_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_323BC61B7C9CAC0F___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
