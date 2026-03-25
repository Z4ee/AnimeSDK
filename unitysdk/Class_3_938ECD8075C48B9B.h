#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6F81DCE38B0EBC4.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_5775A4FEC79026BC;
class Class_4_B1B95644AD770E5F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_938ECD8075C48B9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B57810)
#define CLASS_3_938ECD8075C48B9B_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10B58E50)
#define CLASS_3_938ECD8075C48B9B_METHOD_3_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x10B58280)
#define CLASS_3_938ECD8075C48B9B_METHOD_3_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x10B57CE0)
#define CLASS_3_938ECD8075C48B9B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B578F0)
#define CLASS_3_938ECD8075C48B9B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B58200)
#define CLASS_3_938ECD8075C48B9B__CTOR_OFFSET UNITYSDK_OFFSET(0x10B576C0)
#define CLASS_3_938ECD8075C48B9B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B58CE0)
#define CLASS_3_938ECD8075C48B9B___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B58D80)
#define CLASS_3_938ECD8075C48B9B___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B58DE0)

inline static constexpr unsigned int Class_3_938ECD8075C48B9B_TypeDefinitionIndex = 44295;

class Class_3_938ECD8075C48B9B : public ::Class_2_C6F81DCE38B0EBC4
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_3; // 0x30
	::Class_3_5775A4FEC79026BC* Field_3_1; // 0x38
	::Class_4_B1B95644AD770E5F* Field_3_2; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_0; // 0x48
	::System::Boolean Field_3_6; // 0x50
	::System::Single Field_3_5; // 0x54
	::System::Int32 Field_3_4; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_B1B95644AD770E5F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_B1B95644AD770E5F*))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_3_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_METHOD_3_8DF47EF45ABD2A6C_OFFSET))(this);
	}

	::System::Void Method_3_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_METHOD_3_AFC8215C57A0845A_OFFSET))(this);
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
