#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_D17272E82AE804C2_625;
class Class_3_7AA0663B46C8586F_6;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define CLASS_2_53B84F02646FBC19_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178A0670)
#define CLASS_2_53B84F02646FBC19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x178A0230)
#define CLASS_2_53B84F02646FBC19_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x178A0620)
#define CLASS_2_53B84F02646FBC19_TICK_OFFSET UNITYSDK_OFFSET(0x178A06B0)
#define CLASS_2_53B84F02646FBC19__CTOR_OFFSET UNITYSDK_OFFSET(0x178A0220)
#define CLASS_2_53B84F02646FBC19__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x178A0710)
#define CLASS_2_53B84F02646FBC19__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x178A0790)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_TypeDefinitionIndex = 47562;

class Class_2_53B84F02646FBC19 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_7AA0663B46C8586F_6* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_6*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1_0(::Class_1_D17272E82AE804C2_625* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_625*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
	}
};
