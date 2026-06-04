#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_3_D4090F4E5BFA9C44;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_20F9A14A7D382A7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB28C780)
#define CLASS_2_20F9A14A7D382A7F_METHOD_2_755870B55A8B3AFF_1_OFFSET UNITYSDK_OFFSET(0xB28CBD0)
#define CLASS_2_20F9A14A7D382A7F_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0xB28CA40)
#define CLASS_2_20F9A14A7D382A7F_METHOD_2_7B12090AF6D76E60_OFFSET UNITYSDK_OFFSET(0xB28CED0)
#define CLASS_2_20F9A14A7D382A7F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB28C8E0)
#define CLASS_2_20F9A14A7D382A7F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB28C810)
#define CLASS_2_20F9A14A7D382A7F_TICK_OFFSET UNITYSDK_OFFSET(0xB28CD60)
#define CLASS_2_20F9A14A7D382A7F__CTOR_OFFSET UNITYSDK_OFFSET(0xB28C770)

inline static constexpr unsigned int Class_2_20F9A14A7D382A7F_TypeDefinitionIndex = 49207;

class Class_2_20F9A14A7D382A7F : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Struct_2_D3027B1CDFF61281 Field_2_1; // 0x18
	::Class_3_D4090F4E5BFA9C44* Field_2_2; // 0x48
	::RPG::GameCore::TaskContext* Field_2_3; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D4090F4E5BFA9C44* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D4090F4E5BFA9C44*))((::PBYTE)hIl2Cpp + CLASS_2_20F9A14A7D382A7F__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_7B12090AF6D76E60(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_20F9A14A7D382A7F_METHOD_2_7B12090AF6D76E60_OFFSET))(this, a1);
	}
};
