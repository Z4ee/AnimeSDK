#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_8A0CB52AB22E28DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2D19D0)
#define CLASS_2_8A0CB52AB22E28DB_METHOD_2_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0xA2D2060)
#define CLASS_2_8A0CB52AB22E28DB_METHOD_2_53404204717493A0_OFFSET UNITYSDK_OFFSET(0xA2D1EF0)
#define CLASS_2_8A0CB52AB22E28DB_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA2D2120)
#define CLASS_2_8A0CB52AB22E28DB_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA2D2000)
#define CLASS_2_8A0CB52AB22E28DB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA2D1A40)
#define CLASS_2_8A0CB52AB22E28DB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA2D1F50)
#define CLASS_2_8A0CB52AB22E28DB_TICK_OFFSET UNITYSDK_OFFSET(0xA2D1FA0)
#define CLASS_2_8A0CB52AB22E28DB__CTOR_OFFSET UNITYSDK_OFFSET(0xA2D19C0)

inline static constexpr unsigned int Class_2_8A0CB52AB22E28DB_TypeDefinitionIndex = 53743;

class Class_2_8A0CB52AB22E28DB : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::PlayNPCBubbleTalk* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayNPCBubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_8A0CB52AB22E28DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A0CB52AB22E28DB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A0CB52AB22E28DB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A0CB52AB22E28DB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8A0CB52AB22E28DB_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8A0CB52AB22E28DB_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8A0CB52AB22E28DB_METHOD_2_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A0CB52AB22E28DB_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_53404204717493A0(::RPG::GameCore::BubbleTalkInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + CLASS_2_8A0CB52AB22E28DB_METHOD_2_53404204717493A0_OFFSET))(this, a1);
	}
};
