#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5EB4A69DD5E748EA;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }

#define CLASS_3_31246083D6D5FAE5_METHOD_3_741E3026981D8C92_OFFSET UNITYSDK_OFFSET(0x10C939A0)
#define CLASS_3_31246083D6D5FAE5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C93810)
#define CLASS_3_31246083D6D5FAE5__CTOR_OFFSET UNITYSDK_OFFSET(0x10C937E0)

inline static constexpr unsigned int Class_3_31246083D6D5FAE5_TypeDefinitionIndex = 54448;

class Class_3_31246083D6D5FAE5 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5EB4A69DD5E748EA*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5EB4A69DD5E748EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5EB4A69DD5E748EA*))((::PBYTE)hIl2Cpp + CLASS_3_31246083D6D5FAE5__CTOR_OFFSET))(this, a1, a2);
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
