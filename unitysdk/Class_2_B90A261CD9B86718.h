#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_303D5A33D1401D59;
class Class_3_D21159AFA7765AC6;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B90A261CD9B86718_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158A3EF0)
#define CLASS_2_B90A261CD9B86718_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158A3910)
#define CLASS_2_B90A261CD9B86718_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158A3E00)
#define CLASS_2_B90A261CD9B86718_TICK_OFFSET UNITYSDK_OFFSET(0x158A3F40)
#define CLASS_2_B90A261CD9B86718__CTOR_OFFSET UNITYSDK_OFFSET(0x158A3890)

inline static constexpr unsigned int Class_2_B90A261CD9B86718_TypeDefinitionIndex = 55597;

class Class_2_B90A261CD9B86718 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20
	::Class_3_D21159AFA7765AC6* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::RPG::Client::Stage* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D21159AFA7765AC6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D21159AFA7765AC6*))((::PBYTE)hIl2Cpp + CLASS_2_B90A261CD9B86718__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B90A261CD9B86718_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B90A261CD9B86718_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B90A261CD9B86718_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B90A261CD9B86718_TICK_OFFSET))(this, a1);
	}
};
