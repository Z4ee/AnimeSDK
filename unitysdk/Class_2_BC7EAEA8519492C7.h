#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayMessage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_BC7EAEA8519492C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154FD1F0)
#define CLASS_2_BC7EAEA8519492C7_METHOD_2_5934C7451F9426C2_OFFSET UNITYSDK_OFFSET(0x154FD540)
#define CLASS_2_BC7EAEA8519492C7_METHOD_2_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x154FD350)
#define CLASS_2_BC7EAEA8519492C7_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x154FD610)
#define CLASS_2_BC7EAEA8519492C7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154FD230)
#define CLASS_2_BC7EAEA8519492C7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x154FD490)
#define CLASS_2_BC7EAEA8519492C7_TICK_OFFSET UNITYSDK_OFFSET(0x154FD4E0)
#define CLASS_2_BC7EAEA8519492C7__CTOR_OFFSET UNITYSDK_OFFSET(0x154FD1E0)

inline static constexpr unsigned int Class_2_BC7EAEA8519492C7_TypeDefinitionIndex = 58417;

class Class_2_BC7EAEA8519492C7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayMessage* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMessage*))((::PBYTE)hIl2Cpp + CLASS_2_BC7EAEA8519492C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC7EAEA8519492C7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC7EAEA8519492C7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC7EAEA8519492C7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BC7EAEA8519492C7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BC7EAEA8519492C7_METHOD_2_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Void Method_2_5934C7451F9426C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC7EAEA8519492C7_METHOD_2_5934C7451F9426C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC7EAEA8519492C7_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
