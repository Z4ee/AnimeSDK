#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowBattleScreenEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_1798FAFF45053267_OFFSET UNITYSDK_OFFSET(0xA725A90)
#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_39A9FE040505BFA5_OFFSET UNITYSDK_OFFSET(0xA725980)
#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0xA725B60)
#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xA725930)
#define CLASS_3_8BAC80AEEAF1A1E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA725880)
#define CLASS_3_8BAC80AEEAF1A1E1__CTOR_OFFSET UNITYSDK_OFFSET(0xA725850)

inline static constexpr unsigned int Class_3_8BAC80AEEAF1A1E1_TypeDefinitionIndex = 51941;

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

	::System::Void Method_3_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_7646FFE662147970_OFFSET))(this);
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
