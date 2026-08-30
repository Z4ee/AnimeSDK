#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_303D5A33D1401D59;
class Class_3_D21159AFA7765AC6;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B90A261CD9B86718_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156931F0)
#define CLASS_2_B90A261CD9B86718_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15692C10)
#define CLASS_2_B90A261CD9B86718_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15693100)
#define CLASS_2_B90A261CD9B86718_TICK_OFFSET UNITYSDK_OFFSET(0x15693240)
#define CLASS_2_B90A261CD9B86718__CTOR_OFFSET UNITYSDK_OFFSET(0x15692B90)

inline static constexpr unsigned int Class_2_B90A261CD9B86718_TypeDefinitionIndex = 58328;

class Class_2_B90A261CD9B86718 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::Stage* PKLNPNKEJOO; // 0x20
	::System::String* FKFFINDOLOJ; // 0x28
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* PCDIEBGDABE; // 0x30
	::Class_3_D21159AFA7765AC6* OFKGLJOAMLD; // 0x38

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
