#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AttachEntityDeparted; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_080AC495FAE07BF1_METHOD_3_6A66C3676F8E3F03_OFFSET UNITYSDK_OFFSET(0x1673C920)
#define CLASS_3_080AC495FAE07BF1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1673C870)
#define CLASS_3_080AC495FAE07BF1__CTOR_OFFSET UNITYSDK_OFFSET(0x1673C840)

inline static constexpr unsigned int Class_3_080AC495FAE07BF1_TypeDefinitionIndex = 52376;

class Class_3_080AC495FAE07BF1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AttachEntityDeparted*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachEntityDeparted* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachEntityDeparted*))((::PBYTE)hIl2Cpp + CLASS_3_080AC495FAE07BF1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_080AC495FAE07BF1_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Boolean Method_3_6A66C3676F8E3F03(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_080AC495FAE07BF1_METHOD_3_6A66C3676F8E3F03_OFFSET))(a1, a2);
	}
};
