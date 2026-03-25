#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7C65529CEEBE6D95;
namespace RPG::GameCore { class AdventureCameraLookAtTemplate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_54F8CAD423FADC6E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C16460)
#define CLASS_3_54F8CAD423FADC6E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C16330)
#define CLASS_3_54F8CAD423FADC6E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C163D0)
#define CLASS_3_54F8CAD423FADC6E__CTOR_OFFSET UNITYSDK_OFFSET(0x10C15F50)
#define CLASS_3_54F8CAD423FADC6E___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C164C0)
#define CLASS_3_54F8CAD423FADC6E___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C164B0)

inline static constexpr unsigned int Class_3_54F8CAD423FADC6E_TypeDefinitionIndex = 43893;

class Class_3_54F8CAD423FADC6E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureCameraLookAtTemplate*>
{
public:
	::Class_3_7C65529CEEBE6D95* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureCameraLookAtTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureCameraLookAtTemplate*))((::PBYTE)hIl2Cpp + CLASS_3_54F8CAD423FADC6E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54F8CAD423FADC6E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54F8CAD423FADC6E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54F8CAD423FADC6E_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54F8CAD423FADC6E___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54F8CAD423FADC6E___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
