#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowBattleScreenEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_1798FAFF45053267_OFFSET UNITYSDK_OFFSET(0x115B2950)
#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x115B27F0)
#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_39A9FE040505BFA5_OFFSET UNITYSDK_OFFSET(0x115B2840)
#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x115B2A20)
#define CLASS_3_8BAC80AEEAF1A1E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115B2740)
#define CLASS_3_8BAC80AEEAF1A1E1__CTOR_OFFSET UNITYSDK_OFFSET(0x115B2710)

inline static constexpr unsigned int Class_3_8BAC80AEEAF1A1E1_TypeDefinitionIndex = 44537;

class Class_3_8BAC80AEEAF1A1E1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleScreenEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleScreenEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleScreenEffect*))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Boolean Method_3_39A9FE040505BFA5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_39A9FE040505BFA5_OFFSET))(this);
	}

	::System::String* Method_3_1798FAFF45053267()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_1798FAFF45053267_OFFSET))(this);
	}

	::System::String* Method_3_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_6929C20FCC70C1A3_OFFSET))(this);
	}
};
