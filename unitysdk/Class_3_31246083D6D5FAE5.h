#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D835FF5964A261A0;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }

#define CLASS_3_31246083D6D5FAE5_METHOD_3_741E3026981D8C92_OFFSET UNITYSDK_OFFSET(0x18F79400)
#define CLASS_3_31246083D6D5FAE5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F79270)
#define CLASS_3_31246083D6D5FAE5__CTOR_OFFSET UNITYSDK_OFFSET(0x18F79240)

inline static constexpr unsigned int Class_3_31246083D6D5FAE5_TypeDefinitionIndex = 55671;

class Class_3_31246083D6D5FAE5 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D835FF5964A261A0*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D835FF5964A261A0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D835FF5964A261A0*))((::PBYTE)hIl2Cpp + CLASS_3_31246083D6D5FAE5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31246083D6D5FAE5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_741E3026981D8C92(::RPG::GameCore::TextJoinConfigRow* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_31246083D6D5FAE5_METHOD_3_741E3026981D8C92_OFFSET))(this, a1, a2);
	}
};
