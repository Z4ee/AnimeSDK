#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class SO_Sequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9A5248E43B21372C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181A5950)
#define CLASS_3_9A5248E43B21372C_METHOD_3_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x18892CA0)
#define CLASS_3_9A5248E43B21372C_METHOD_3_48A85C2067A778AB_OFFSET UNITYSDK_OFFSET(0x18892C50)
#define CLASS_3_9A5248E43B21372C_METHOD_3_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x181A5B30)
#define CLASS_3_9A5248E43B21372C_METHOD_3_C638E91FC0D3A13A_1_OFFSET UNITYSDK_OFFSET(0x181A6C90)
#define CLASS_3_9A5248E43B21372C_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x181A6790)
#define CLASS_3_9A5248E43B21372C_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18892DE0)
#define CLASS_3_9A5248E43B21372C_METHOD_3_CC52AB26BAA6F60F_OFFSET UNITYSDK_OFFSET(0x181A5D60)
#define CLASS_3_9A5248E43B21372C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181A5BB0)
#define CLASS_3_9A5248E43B21372C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x181A68F0)
#define CLASS_3_9A5248E43B21372C_TICK_OFFSET UNITYSDK_OFFSET(0x181A6DF0)
#define CLASS_3_9A5248E43B21372C__CTOR_OFFSET UNITYSDK_OFFSET(0x181A5560)

inline static constexpr unsigned int Class_3_9A5248E43B21372C_TypeDefinitionIndex = 52411;

class Class_3_9A5248E43B21372C : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_Sequence*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* IFMDBDJCCCI; // 0x40
	::System::Boolean OMHBEGLDMAM; // 0x48
	::System::Boolean HGEHNAOPPNO; // 0x49
	::System::Boolean POFNNELPPLA; // 0x4A
	::System::Int32 NCDEGDCPCHN; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_Sequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_Sequence*))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_3_AECF8BEC293ED42A()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C_METHOD_3_AECF8BEC293ED42A_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskState Method_3_CC52AB26BAA6F60F(::System::Single a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C_METHOD_3_CC52AB26BAA6F60F_OFFSET))(this, a1);
	}

	::System::Void Method_3_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_3_C638E91FC0D3A13A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C_METHOD_3_C638E91FC0D3A13A_1_OFFSET))(this);
	}

	::System::Void Method_3_48A85C2067A778AB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C_METHOD_3_48A85C2067A778AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C_METHOD_3_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A5248E43B21372C_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}
};
