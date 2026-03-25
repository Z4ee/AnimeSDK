#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1A92845FAFA5EC77;
class Class_3_CF5B5368CA3065E6;
class Class_3_D6E9A038FA23103A;
namespace RPG::Client { class BubbleTalkConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_76D28C55E605503C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11333200)
#define CLASS_3_76D28C55E605503C_METHOD_3_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x11333F60)
#define CLASS_3_76D28C55E605503C_METHOD_3_63CABFF75FF759E3_OFFSET UNITYSDK_OFFSET(0x11333AA0)
#define CLASS_3_76D28C55E605503C_METHOD_3_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x11334020)
#define CLASS_3_76D28C55E605503C_METHOD_3_B9A56402214242F9_OFFSET UNITYSDK_OFFSET(0x11333C00)
#define CLASS_3_76D28C55E605503C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11333270)
#define CLASS_3_76D28C55E605503C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11333F10)
#define CLASS_3_76D28C55E605503C__CTOR_OFFSET UNITYSDK_OFFSET(0x113331D0)
#define CLASS_3_76D28C55E605503C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11334080)
#define CLASS_3_76D28C55E605503C___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x113340F0)

inline static constexpr unsigned int Class_3_76D28C55E605503C_TypeDefinitionIndex = 42763;

class Class_3_76D28C55E605503C : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CF5B5368CA3065E6*>
{
public:
	::RPG::Client::BubbleTalkConfig* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CF5B5368CA3065E6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CF5B5368CA3065E6*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_63CABFF75FF759E3(::Class_3_1A92845FAFA5EC77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_METHOD_3_63CABFF75FF759E3_OFFSET))(this, a1);
	}

	::System::Void Method_3_B9A56402214242F9(::Class_3_D6E9A038FA23103A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_METHOD_3_B9A56402214242F9_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_METHOD_3_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Void Method_3_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_METHOD_3_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
