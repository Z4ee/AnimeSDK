#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_3_55CC0EE55645EF46;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_20F9A14A7D382A7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC526400)
#define CLASS_2_20F9A14A7D382A7F_METHOD_2_755870B55A8B3AFF_1_OFFSET UNITYSDK_OFFSET(0xC5268C0)
#define CLASS_2_20F9A14A7D382A7F_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0xC526730)
#define CLASS_2_20F9A14A7D382A7F_METHOD_2_A43D587A89E24E29_OFFSET UNITYSDK_OFFSET(0xC526BC0)
#define CLASS_2_20F9A14A7D382A7F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC5265A0)
#define CLASS_2_20F9A14A7D382A7F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC5264A0)
#define CLASS_2_20F9A14A7D382A7F_TICK_OFFSET UNITYSDK_OFFSET(0xC526A50)
#define CLASS_2_20F9A14A7D382A7F__CTOR_OFFSET UNITYSDK_OFFSET(0xC5263F0)

inline static constexpr unsigned int Class_2_20F9A14A7D382A7F_TypeDefinitionIndex = 52885;

class Class_2_20F9A14A7D382A7F : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* MNGCMKOMHNP; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Struct_2_D3027B1CDFF61281 OLMFJLICIIA; // 0x20
	::Class_3_55CC0EE55645EF46* OFKGLJOAMLD; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_55CC0EE55645EF46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_55CC0EE55645EF46*))((::PBYTE)hIl2Cpp + CLASS_2_20F9A14A7D382A7F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20F9A14A7D382A7F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20F9A14A7D382A7F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20F9A14A7D382A7F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20F9A14A7D382A7F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20F9A14A7D382A7F_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20F9A14A7D382A7F_METHOD_2_755870B55A8B3AFF_1_OFFSET))(this);
	}

	::System::Void Method_2_A43D587A89E24E29(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_20F9A14A7D382A7F_METHOD_2_A43D587A89E24E29_OFFSET))(this, a1);
	}
};
