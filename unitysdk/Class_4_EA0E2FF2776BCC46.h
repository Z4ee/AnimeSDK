#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3AA8DA5529BE44AF.h"

namespace RPG::GameCore { class PlayAeonTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x87E8470)
#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0x87E8720)
#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x87E8840)
#define CLASS_4_EA0E2FF2776BCC46_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87E8410)
#define CLASS_4_EA0E2FF2776BCC46__CTOR_OFFSET UNITYSDK_OFFSET(0x87E83E0)
#define CLASS_4_EA0E2FF2776BCC46___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87E88C0)

inline static constexpr unsigned int Class_4_EA0E2FF2776BCC46_TypeDefinitionIndex = 47001;

class Class_4_EA0E2FF2776BCC46 : public ::Class_3_3AA8DA5529BE44AF
{
public:
	::RPG::GameCore::PlayAeonTalk* Field_4_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAeonTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAeonTalk*))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_4_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_METHOD_4_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_4_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_METHOD_4_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Boolean Method_4_86ADBB4228161C74()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_METHOD_4_86ADBB4228161C74_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
