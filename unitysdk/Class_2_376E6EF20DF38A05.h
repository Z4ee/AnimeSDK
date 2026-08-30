#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_1_4BE3B8CB3ABA39BF;
class Class_3_07C3C4D2990C49EE;
class Class_3_B156A2C33CBA6272;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_376E6EF20DF38A05_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA3DCA0)
#define CLASS_2_376E6EF20DF38A05_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1AA3DEF0)
#define CLASS_2_376E6EF20DF38A05_METHOD_2_19DCD33B80D79A71_OFFSET UNITYSDK_OFFSET(0x1AA3D850)
#define CLASS_2_376E6EF20DF38A05_METHOD_2_295467A316FECF44_OFFSET UNITYSDK_OFFSET(0x1AA3DF30)
#define CLASS_2_376E6EF20DF38A05_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x1AA3D790)
#define CLASS_2_376E6EF20DF38A05_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1AA3DBF0)
#define CLASS_2_376E6EF20DF38A05_METHOD_2_D47981CD6F0E1F50_OFFSET UNITYSDK_OFFSET(0x1AA3DFC0)
#define CLASS_2_376E6EF20DF38A05_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AA3D690)
#define CLASS_2_376E6EF20DF38A05_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AA3DB60)
#define CLASS_2_376E6EF20DF38A05_TICK_OFFSET UNITYSDK_OFFSET(0x1AA3D960)
#define CLASS_2_376E6EF20DF38A05__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA3D500)

inline static constexpr unsigned int Class_2_376E6EF20DF38A05_TypeDefinitionIndex = 52809;

class Class_2_376E6EF20DF38A05 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* ANCNIBMHPLD; // 0x18
	::Class_3_B156A2C33CBA6272* IGHAHBNLIJA; // 0x20
	::Class_1_4BE3B8CB3ABA39BF* NJNNCOCIGCC; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::Struct_2_D3027B1CDFF61281 OLMFJLICIIA; // 0x38
	::System::Boolean GELAAMHNHPC; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B156A2C33CBA6272* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B156A2C33CBA6272*))((::PBYTE)hIl2Cpp + CLASS_2_376E6EF20DF38A05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_376E6EF20DF38A05_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_376E6EF20DF38A05_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_376E6EF20DF38A05_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_376E6EF20DF38A05_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_376E6EF20DF38A05_GETCONFIG_OFFSET))(this);
	}

	::System::Void Method_2_295467A316FECF44(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_376E6EF20DF38A05_METHOD_2_295467A316FECF44_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_376E6EF20DF38A05_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_19DCD33B80D79A71(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_376E6EF20DF38A05_METHOD_2_19DCD33B80D79A71_OFFSET))(this, a1);
	}

	::System::Void Method_2_D47981CD6F0E1F50(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_376E6EF20DF38A05_METHOD_2_D47981CD6F0E1F50_OFFSET))(this, a1);
	}

	::Class_1_4BE3B8CB3ABA39BF* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_4BE3B8CB3ABA39BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_376E6EF20DF38A05_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}
};
