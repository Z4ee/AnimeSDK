#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5112518BD1B5B872.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
class Class_4_3793F4EB675CED8F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_938ECD8075C48B9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B857C0)
#define CLASS_3_938ECD8075C48B9B_METHOD_3_1E1FFD875CA8014A_1_OFFSET UNITYSDK_OFFSET(0x13B85BE0)
#define CLASS_3_938ECD8075C48B9B_METHOD_3_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0x13B86170)
#define CLASS_3_938ECD8075C48B9B_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13B86D40)
#define CLASS_3_938ECD8075C48B9B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B858A0)
#define CLASS_3_938ECD8075C48B9B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13B860F0)
#define CLASS_3_938ECD8075C48B9B__CTOR_OFFSET UNITYSDK_OFFSET(0x13B85670)
#define CLASS_3_938ECD8075C48B9B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B86BF0)
#define CLASS_3_938ECD8075C48B9B___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B86C80)
#define CLASS_3_938ECD8075C48B9B___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13B86CE0)

inline static constexpr unsigned int Class_3_938ECD8075C48B9B_TypeDefinitionIndex = 51679;

class Class_3_938ECD8075C48B9B : public ::Class_2_5112518BD1B5B872
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_1; // 0x38
	::Class_1_5F51D4049EA87B7B* Field_3_2; // 0x40
	::Class_4_3793F4EB675CED8F* Field_3_3; // 0x48
	::System::Single Field_3_4; // 0x50
	::System::Boolean Field_3_5; // 0x54
	::System::Int32 Field_3_6; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3793F4EB675CED8F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3793F4EB675CED8F*))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_METHOD_3_1E1FFD875CA8014A_OFFSET))(this);
	}

	::System::Void Method_3_1E1FFD875CA8014A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_METHOD_3_1E1FFD875CA8014A_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
