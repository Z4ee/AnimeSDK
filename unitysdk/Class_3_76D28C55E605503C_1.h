#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1A92845FAFA5EC77;
class Class_3_A3DBFCA46DFE7190;
namespace RPG::Client { class BubbleTalkConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_76D28C55E605503C_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A0DFE0)
#define CLASS_3_76D28C55E605503C_1_METHOD_3_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x10A0EE60)
#define CLASS_3_76D28C55E605503C_1_METHOD_3_7821D524FE61E19B_OFFSET UNITYSDK_OFFSET(0x10A0E840)
#define CLASS_3_76D28C55E605503C_1_METHOD_3_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x10A0EF20)
#define CLASS_3_76D28C55E605503C_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A0E080)
#define CLASS_3_76D28C55E605503C_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A0EE10)
#define CLASS_3_76D28C55E605503C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10A0DFB0)
#define CLASS_3_76D28C55E605503C_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A0EF80)
#define CLASS_3_76D28C55E605503C_1___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A0EF90)

inline static constexpr unsigned int Class_3_76D28C55E605503C_1_TypeDefinitionIndex = 42766;

class Class_3_76D28C55E605503C_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A3DBFCA46DFE7190*>
{
public:
	::RPG::Client::BubbleTalkConfig* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A3DBFCA46DFE7190* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A3DBFCA46DFE7190*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_7821D524FE61E19B(::Class_3_1A92845FAFA5EC77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_METHOD_3_7821D524FE61E19B_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_METHOD_3_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Void Method_3_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_METHOD_3_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
