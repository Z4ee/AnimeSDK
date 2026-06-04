#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_C75DDA89CCB3A76B;
class Class_3_C83D8EDE8C2D61C1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_36A33F4B5E9C34C9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3D0800)
#define CLASS_3_36A33F4B5E9C34C9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3D08A0)
#define CLASS_3_36A33F4B5E9C34C9__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D07D0)
#define CLASS_3_36A33F4B5E9C34C9___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3D0B60)

inline static constexpr unsigned int Class_3_36A33F4B5E9C34C9_TypeDefinitionIndex = 50352;

class Class_3_36A33F4B5E9C34C9 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C83D8EDE8C2D61C1*>
{
public:
	::Il2CppArray<::Class_1_C75DDA89CCB3A76B*>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C83D8EDE8C2D61C1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C83D8EDE8C2D61C1*))((::PBYTE)hIl2Cpp + CLASS_3_36A33F4B5E9C34C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36A33F4B5E9C34C9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36A33F4B5E9C34C9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36A33F4B5E9C34C9___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
