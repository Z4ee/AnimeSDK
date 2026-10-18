#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Main_DoSkill; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_7536AF58A3D68283_METHOD_3_449A7DD0254C81A3_OFFSET UNITYSDK_OFFSET(0x13A5E9B0)
#define CLASS_3_7536AF58A3D68283_METHOD_3_886D94432EA94614_1_OFFSET UNITYSDK_OFFSET(0x13A5ED00)
#define CLASS_3_7536AF58A3D68283_METHOD_3_886D94432EA94614_OFFSET UNITYSDK_OFFSET(0x13A5EBB0)
#define CLASS_3_7536AF58A3D68283_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A5E2F0)
#define CLASS_3_7536AF58A3D68283_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A5EAB0)
#define CLASS_3_7536AF58A3D68283__CTOR_OFFSET UNITYSDK_OFFSET(0x13A5E1E0)

inline static constexpr unsigned int Class_3_7536AF58A3D68283_TypeDefinitionIndex = 52203;

class Class_3_7536AF58A3D68283 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_DoSkill*>
{
public:
	::System::Single AKCEJGFIJJF; // 0x28
	::System::Int32 LDJMILLLCAE; // 0x2C
	::System::Single ELEGFCENBGP; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_DoSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_DoSkill*))((::PBYTE)hIl2Cpp + CLASS_3_7536AF58A3D68283__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7536AF58A3D68283_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7536AF58A3D68283_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_886D94432EA94614(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_7536AF58A3D68283_METHOD_3_886D94432EA94614_OFFSET))(this, a1);
	}

	::System::Void Method_3_886D94432EA94614_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_7536AF58A3D68283_METHOD_3_886D94432EA94614_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_449A7DD0254C81A3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7536AF58A3D68283_METHOD_3_449A7DD0254C81A3_OFFSET))(this);
	}
};
