#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class CollectionPlayBubbleTalk; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_DD3EBF962BAE48E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152DB360)
#define CLASS_2_DD3EBF962BAE48E1_METHOD_2_80FB77A0BF7D64EE_OFFSET UNITYSDK_OFFSET(0x152DBED0)
#define CLASS_2_DD3EBF962BAE48E1_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x152DC300)
#define CLASS_2_DD3EBF962BAE48E1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x152DC3D0)
#define CLASS_2_DD3EBF962BAE48E1_METHOD_2_D98BA75FC67827C5_OFFSET UNITYSDK_OFFSET(0x152DC150)
#define CLASS_2_DD3EBF962BAE48E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152DB400)
#define CLASS_2_DD3EBF962BAE48E1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152DC250)
#define CLASS_2_DD3EBF962BAE48E1_TICK_OFFSET UNITYSDK_OFFSET(0x152DC2A0)
#define CLASS_2_DD3EBF962BAE48E1__CTOR_OFFSET UNITYSDK_OFFSET(0x152DB350)

inline static constexpr unsigned int Class_2_DD3EBF962BAE48E1_TypeDefinitionIndex = 55452;

class Class_2_DD3EBF962BAE48E1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::PlayNPCBubbleTalk* Field_2_3; // 0x20
	::RPG::GameCore::CollectionPlayBubbleTalk* Field_2_4; // 0x28
	::System::UInt32 Field_2_5; // 0x30

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
