#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SwitchCase; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_896128BAAAAB6A7C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EB5D50)
#define CLASS_2_896128BAAAAB6A7C_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x17EB6B90)
#define CLASS_2_896128BAAAAB6A7C_METHOD_2_CCF7A015FEFCDABD_1_OFFSET UNITYSDK_OFFSET(0x17EB6960)
#define CLASS_2_896128BAAAAB6A7C_METHOD_2_CCF7A015FEFCDABD_OFFSET UNITYSDK_OFFSET(0x17EB5FF0)
#define CLASS_2_896128BAAAAB6A7C_ONSKIP_OFFSET UNITYSDK_OFFSET(0x17EB6400)
#define CLASS_2_896128BAAAAB6A7C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EB5FA0)
#define CLASS_2_896128BAAAAB6A7C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17EB61F0)
#define CLASS_2_896128BAAAAB6A7C_TICK_OFFSET UNITYSDK_OFFSET(0x17EB6750)
#define CLASS_2_896128BAAAAB6A7C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB5AD0)

inline static constexpr unsigned int Class_2_896128BAAAAB6A7C_TypeDefinitionIndex = 56648;

class Class_2_896128BAAAAB6A7C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* IFMDBDJCCCI; // 0x20
	::Class_3_07C3C4D2990C49EE* APMBCDPOPAJ; // 0x28
	::RPG::GameCore::SwitchCase* OFKGLJOAMLD; // 0x30
	::System::Int32 FBKFMMLDJAE; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCase*))((::PBYTE)hIl2Cpp + CLASS_2_896128BAAAAB6A7C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_896128BAAAAB6A7C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_896128BAAAAB6A7C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_896128BAAAAB6A7C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_896128BAAAAB6A7C_ONSKIP_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_896128BAAAAB6A7C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCF7A015FEFCDABD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_896128BAAAAB6A7C_METHOD_2_CCF7A015FEFCDABD_OFFSET))(this);
	}

	::System::Void Method_2_CCF7A015FEFCDABD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_896128BAAAAB6A7C_METHOD_2_CCF7A015FEFCDABD_1_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_896128BAAAAB6A7C_GET_FORCESKIP_OFFSET))(this);
	}
};
