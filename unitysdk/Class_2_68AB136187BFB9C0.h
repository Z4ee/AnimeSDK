#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OpenTimeRewindPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_68AB136187BFB9C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176347A0)
#define CLASS_2_68AB136187BFB9C0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17634A10)
#define CLASS_2_68AB136187BFB9C0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176347F0)
#define CLASS_2_68AB136187BFB9C0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17634960)
#define CLASS_2_68AB136187BFB9C0_TICK_OFFSET UNITYSDK_OFFSET(0x176349B0)
#define CLASS_2_68AB136187BFB9C0__CTOR_OFFSET UNITYSDK_OFFSET(0x17634790)

inline static constexpr unsigned int Class_2_68AB136187BFB9C0_TypeDefinitionIndex = 50948;

class Class_2_68AB136187BFB9C0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::OpenTimeRewindPage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTimeRewindPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTimeRewindPage*))((::PBYTE)hIl2Cpp + CLASS_2_68AB136187BFB9C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68AB136187BFB9C0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68AB136187BFB9C0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68AB136187BFB9C0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_68AB136187BFB9C0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68AB136187BFB9C0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
