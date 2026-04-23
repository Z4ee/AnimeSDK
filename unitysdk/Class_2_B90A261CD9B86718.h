#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_303D5A33D1401D59;
class Class_3_032754C131C9ABAA;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B90A261CD9B86718_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123C8F30)
#define CLASS_2_B90A261CD9B86718_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x123C8A60)
#define CLASS_2_B90A261CD9B86718_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x123C8EB0)
#define CLASS_2_B90A261CD9B86718_TICK_OFFSET UNITYSDK_OFFSET(0x123C8FD0)
#define CLASS_2_B90A261CD9B86718__CTOR_OFFSET UNITYSDK_OFFSET(0x123C89E0)

inline static constexpr unsigned int Class_2_B90A261CD9B86718_TypeDefinitionIndex = 53661;

class Class_2_B90A261CD9B86718 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_2_3; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::System::String* Field_2_2; // 0x28
	::RPG::Client::Stage* Field_2_4; // 0x30
	::Class_3_032754C131C9ABAA* Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_032754C131C9ABAA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_032754C131C9ABAA*))((::PBYTE)hIl2Cpp + CLASS_2_B90A261CD9B86718__CTOR_OFFSET))(this, a1, a2);
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
