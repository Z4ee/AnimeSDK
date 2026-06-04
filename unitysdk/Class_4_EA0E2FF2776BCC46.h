#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3AA8DA5529BE44AF.h"

namespace RPG::GameCore { class PlayAeonTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0xA5A4960)
#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xA5A46B0)
#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xA5A4A50)
#define CLASS_4_EA0E2FF2776BCC46_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA5A4650)
#define CLASS_4_EA0E2FF2776BCC46__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A4620)
#define CLASS_4_EA0E2FF2776BCC46___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA5A4AD0)

inline static constexpr unsigned int Class_4_EA0E2FF2776BCC46_TypeDefinitionIndex = 54457;

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

	::System::Boolean Method_4_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_METHOD_4_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
