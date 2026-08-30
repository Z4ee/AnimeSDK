#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_BFB46C0684D0BE36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CDFC30)
#define CLASS_2_BFB46C0684D0BE36_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x18CDFA60)
#define CLASS_2_BFB46C0684D0BE36_METHOD_2_8A3D91A38AD395C0_OFFSET UNITYSDK_OFFSET(0x18CDFCF0)
#define CLASS_2_BFB46C0684D0BE36_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x18CDFD50)
#define CLASS_2_BFB46C0684D0BE36_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CDF810)
#define CLASS_2_BFB46C0684D0BE36_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18CDFB80)
#define CLASS_2_BFB46C0684D0BE36_TICK_OFFSET UNITYSDK_OFFSET(0x18CDFBD0)
#define CLASS_2_BFB46C0684D0BE36__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDF800)

inline static constexpr unsigned int Class_2_BFB46C0684D0BE36_TypeDefinitionIndex = 58613;

class Class_2_BFB46C0684D0BE36 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueFinish* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueFinish*))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8A3D91A38AD395C0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_METHOD_2_8A3D91A38AD395C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BFB46C0684D0BE36_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}
};
