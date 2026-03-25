#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueStart; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_9805D2E5B5583050_DISPOSE_OFFSET UNITYSDK_OFFSET(0x104E6D00)
#define CLASS_2_9805D2E5B5583050_METHOD_2_62487804F7DB80E9_OFFSET UNITYSDK_OFFSET(0x104E77F0)
#define CLASS_2_9805D2E5B5583050_METHOD_2_98AFAC3EEBE75F67_OFFSET UNITYSDK_OFFSET(0x104E7120)
#define CLASS_2_9805D2E5B5583050_METHOD_2_B1E6B383797FA63D_OFFSET UNITYSDK_OFFSET(0x104E7210)
#define CLASS_2_9805D2E5B5583050_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x104E6DD0)
#define CLASS_2_9805D2E5B5583050_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x104E7070)
#define CLASS_2_9805D2E5B5583050_TICK_OFFSET UNITYSDK_OFFSET(0x104E70C0)
#define CLASS_2_9805D2E5B5583050__CTOR_OFFSET UNITYSDK_OFFSET(0x104E6CF0)

inline static constexpr unsigned int Class_2_9805D2E5B5583050_TypeDefinitionIndex = 47174;

class Class_2_9805D2E5B5583050 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueStart* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueStart*))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_98AFAC3EEBE75F67(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_METHOD_2_98AFAC3EEBE75F67_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1E6B383797FA63D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_METHOD_2_B1E6B383797FA63D_OFFSET))(this);
	}

	::System::Void Method_2_62487804F7DB80E9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9805D2E5B5583050_METHOD_2_62487804F7DB80E9_OFFSET))(this, a1, a2);
	}
};
