#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnablePlayerPlayIdleShow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_10193684185AE66A_METHOD_3_2472FC4695028AF0_OFFSET UNITYSDK_OFFSET(0x16B6EB20)
#define CLASS_3_10193684185AE66A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B6EA00)
#define CLASS_3_10193684185AE66A__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6E9D0)

inline static constexpr unsigned int Class_3_10193684185AE66A_TypeDefinitionIndex = 50357;

class Class_3_10193684185AE66A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnablePlayerPlayIdleShow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnablePlayerPlayIdleShow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnablePlayerPlayIdleShow*))((::PBYTE)hIl2Cpp + CLASS_3_10193684185AE66A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_10193684185AE66A_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_2472FC4695028AF0(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_10193684185AE66A_METHOD_3_2472FC4695028AF0_OFFSET))(a1);
	}
};
