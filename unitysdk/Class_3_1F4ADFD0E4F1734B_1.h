#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_530978F2750716F1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1F4ADFD0E4F1734B_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136B8030)
#define CLASS_3_1F4ADFD0E4F1734B_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x136B8220)
#define CLASS_3_1F4ADFD0E4F1734B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x136B7F50)
#define CLASS_3_1F4ADFD0E4F1734B_1___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x136B8270)

inline static constexpr unsigned int Class_3_1F4ADFD0E4F1734B_1_TypeDefinitionIndex = 51533;

class Class_3_1F4ADFD0E4F1734B_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_530978F2750716F1*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_530978F2750716F1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_530978F2750716F1*))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_1___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
