#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ElfTriggerShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_398A3F8E1AEA1265_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17284DB0)
#define CLASS_2_398A3F8E1AEA1265_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17285570)
#define CLASS_2_398A3F8E1AEA1265_METHOD_2_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x17285410)
#define CLASS_2_398A3F8E1AEA1265_METHOD_2_ADE9D8FC5BDB6D08_OFFSET UNITYSDK_OFFSET(0x172850F0)
#define CLASS_2_398A3F8E1AEA1265_METHOD_2_C15D3DC756EBDDA4_OFFSET UNITYSDK_OFFSET(0x17285310)
#define CLASS_2_398A3F8E1AEA1265_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x172850A0)
#define CLASS_2_398A3F8E1AEA1265_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17284E00)
#define CLASS_2_398A3F8E1AEA1265_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17284D60)
#define CLASS_2_398A3F8E1AEA1265_TICK_OFFSET UNITYSDK_OFFSET(0x17285040)
#define CLASS_2_398A3F8E1AEA1265__CTOR_OFFSET UNITYSDK_OFFSET(0x17284D50)

inline static constexpr unsigned int Class_2_398A3F8E1AEA1265_TypeDefinitionIndex = 58251;

class Class_2_398A3F8E1AEA1265 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* KJBMODOOOPC; // 0x0
	::RPG::GameCore::ElfTriggerShowUI* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfTriggerShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfTriggerShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_2_ADE9D8FC5BDB6D08(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265_METHOD_2_ADE9D8FC5BDB6D08_OFFSET))(a1);
	}

	static ::System::Void Method_2_C15D3DC756EBDDA4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265_METHOD_2_C15D3DC756EBDDA4_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_8F059A365E90744C()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265_METHOD_2_8F059A365E90744C_OFFSET))();
	}

	static ::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265_METHOD_2_6B72D4EE8C6E907F_OFFSET))();
	}
};
