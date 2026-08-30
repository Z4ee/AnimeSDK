#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class CollectionPlayBubbleTalk; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_DD3EBF962BAE48E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8EE380)
#define CLASS_2_DD3EBF962BAE48E1_METHOD_2_80FB77A0BF7D64EE_OFFSET UNITYSDK_OFFSET(0xB8EEEF0)
#define CLASS_2_DD3EBF962BAE48E1_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0xB8EF320)
#define CLASS_2_DD3EBF962BAE48E1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8EF3F0)
#define CLASS_2_DD3EBF962BAE48E1_METHOD_2_D98BA75FC67827C5_OFFSET UNITYSDK_OFFSET(0xB8EF170)
#define CLASS_2_DD3EBF962BAE48E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8EE420)
#define CLASS_2_DD3EBF962BAE48E1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8EF270)
#define CLASS_2_DD3EBF962BAE48E1_TICK_OFFSET UNITYSDK_OFFSET(0xB8EF2C0)
#define CLASS_2_DD3EBF962BAE48E1__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EE370)

inline static constexpr unsigned int Class_2_DD3EBF962BAE48E1_TypeDefinitionIndex = 58183;

class Class_2_DD3EBF962BAE48E1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* JPJAMENFBKD; // 0x0
	// static const ::System::String* NOIGFGJJDLB; // 0x0
	::RPG::GameCore::PlayNPCBubbleTalk* MEEENKPBHJK; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::CollectionPlayBubbleTalk* OFKGLJOAMLD; // 0x28
	::System::UInt32 LFECLIALKFB; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CollectionPlayBubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CollectionPlayBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_DD3EBF962BAE48E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD3EBF962BAE48E1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD3EBF962BAE48E1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::UInt32 Method_2_80FB77A0BF7D64EE(::RPG::GameCore::BubbleTalkInfo* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + CLASS_2_DD3EBF962BAE48E1_METHOD_2_80FB77A0BF7D64EE_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD3EBF962BAE48E1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DD3EBF962BAE48E1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DD3EBF962BAE48E1_METHOD_2_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD3EBF962BAE48E1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_D98BA75FC67827C5(::RPG::GameCore::BubbleTalkInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + CLASS_2_DD3EBF962BAE48E1_METHOD_2_D98BA75FC67827C5_OFFSET))(this, a1);
	}
};
