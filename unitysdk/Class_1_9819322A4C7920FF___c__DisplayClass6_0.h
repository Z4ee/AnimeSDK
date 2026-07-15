#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9819322A4C7920FF;
class Class_3_301DB96170A54A53;
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_9819322A4C7920FF___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABC220)
#define CLASS_1_9819322A4C7920FF___C__DISPLAYCLASS6_0__LOADBLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x14ABC520)
#define CLASS_1_9819322A4C7920FF___C__DISPLAYCLASS6_0__LOADBLOCK_B__1_OFFSET UNITYSDK_OFFSET(0x14ABC690)
#define CLASS_1_9819322A4C7920FF___C__DISPLAYCLASS6_0__LOADBLOCK_B__2_OFFSET UNITYSDK_OFFSET(0x14ABC6D0)

inline static constexpr unsigned int Class_1_9819322A4C7920FF___c__DisplayClass6_0_TypeDefinitionIndex = 47235;

class Class_1_9819322A4C7920FF___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::String* name; // 0x10
	::Class_3_301DB96170A54A53* loadingTask; // 0x18
	::Class_1_9819322A4C7920FF* __4__this; // 0x20
	::System::Int32 blockResHandle; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _LoadBlock_b__0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF___C__DISPLAYCLASS6_0__LOADBLOCK_B__0_OFFSET))(this, a1);
	}

	::System::Void _LoadBlock_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF___C__DISPLAYCLASS6_0__LOADBLOCK_B__1_OFFSET))(this);
	}

	::System::Void _LoadBlock_b__2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF___C__DISPLAYCLASS6_0__LOADBLOCK_B__2_OFFSET))(this, a1);
	}
};
