#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281_TaskExecutorOpType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5F51D4049EA87B7B;
class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define STRUCT_2_D3027B1CDFF61281_METHOD_2_107247B6331E64C6_OFFSET UNITYSDK_OFFSET(0x3949E30)
#define STRUCT_2_D3027B1CDFF61281_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x3949CB0)
#define STRUCT_2_D3027B1CDFF61281_METHOD_2_64FC96223388C2D1_OFFSET UNITYSDK_OFFSET(0x3949E90)
#define STRUCT_2_D3027B1CDFF61281_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x3949D00)
#define STRUCT_2_D3027B1CDFF61281_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x3949E20)
#define STRUCT_2_D3027B1CDFF61281_METHOD_2_FBF2CB29FD3B55E6_1_OFFSET UNITYSDK_OFFSET(0x3949E00)
#define STRUCT_2_D3027B1CDFF61281_METHOD_2_FBF2CB29FD3B55E6_2_OFFSET UNITYSDK_OFFSET(0x3949E10)
#define STRUCT_2_D3027B1CDFF61281_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x3949DF0)
#define STRUCT_2_D3027B1CDFF61281_TICK_OFFSET UNITYSDK_OFFSET(0x3949D50)
#define STRUCT_2_D3027B1CDFF61281__CTOR_OFFSET UNITYSDK_OFFSET(0x3949C00)

inline static constexpr unsigned int Struct_2_D3027B1CDFF61281_TypeDefinitionIndex = 52290;

struct alignas(8) Struct_2_D3027B1CDFF61281
{
	::Class_1_F3391C70DC37088D* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x19
	::System::Boolean Field_2_3; // 0x1A
	::System::Collections::Generic::Queue_1<::Struct_2_D3027B1CDFF61281_TaskExecutorOpType>* Field_2_4; // 0x20
	::System::Boolean Field_2_5; // 0x28
	::System::Boolean Field_2_6; // 0x29
	::System::Boolean Field_2_7; // 0x2A
	::RPG::GameCore::TaskContext* Field_2_8; // 0x30
	::Class_1_5F51D4049EA87B7B* Field_2_9; // 0x38

	::System::Void _ctor(::Class_1_5F51D4049EA87B7B* a1, ::RPG::GameCore::TaskContext* a2, ::Class_1_5F51D4049EA87B7B* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*, ::RPG::GameCore::TaskContext*, ::Class_1_5F51D4049EA87B7B*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_D3027B1CDFF61281__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D3027B1CDFF61281_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D3027B1CDFF61281_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D3027B1CDFF61281_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D3027B1CDFF61281_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Void Method_2_FBF2CB29FD3B55E6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D3027B1CDFF61281_METHOD_2_FBF2CB29FD3B55E6_1_OFFSET))(this);
	}

	::System::Void Method_2_FBF2CB29FD3B55E6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D3027B1CDFF61281_METHOD_2_FBF2CB29FD3B55E6_2_OFFSET))(this);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D3027B1CDFF61281_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Boolean Method_2_107247B6331E64C6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D3027B1CDFF61281_METHOD_2_107247B6331E64C6_OFFSET))(this);
	}

	::RPG::GameCore::TaskState Method_2_64FC96223388C2D1()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D3027B1CDFF61281_METHOD_2_64FC96223388C2D1_OFFSET))(this);
	}
};
