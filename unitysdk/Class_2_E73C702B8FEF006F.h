#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class PropPuzzleMissionResetEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E73C702B8FEF006F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176EBDC0)
#define CLASS_2_E73C702B8FEF006F_METHOD_2_3F5DC960A2A68BBD_OFFSET UNITYSDK_OFFSET(0x176EC140)
#define CLASS_2_E73C702B8FEF006F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176EBF30)
#define CLASS_2_E73C702B8FEF006F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x176EBFF0)
#define CLASS_2_E73C702B8FEF006F_TICK_OFFSET UNITYSDK_OFFSET(0x176EC0B0)
#define CLASS_2_E73C702B8FEF006F__CTOR_OFFSET UNITYSDK_OFFSET(0x176EBD00)

inline static constexpr unsigned int Class_2_E73C702B8FEF006F_TypeDefinitionIndex = 53435;

class Class_2_E73C702B8FEF006F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::PropPuzzleMissionResetEventListener* OFKGLJOAMLD; // 0x20
	::Class_1_F3391C70DC37088D* KGGDNBBFDDB; // 0x28
	::Class_3_07C3C4D2990C49EE* FGFFJBEKHBO; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleMissionResetEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleMissionResetEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F5DC960A2A68BBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F_METHOD_2_3F5DC960A2A68BBD_OFFSET))(this, a1);
	}
};
