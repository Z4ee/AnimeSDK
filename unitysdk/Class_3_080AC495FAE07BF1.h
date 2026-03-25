#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AttachEntityDeparted; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_080AC495FAE07BF1_METHOD_3_E92774B699B24150_OFFSET UNITYSDK_OFFSET(0x10B4EBD0)
#define CLASS_3_080AC495FAE07BF1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B4EB20)
#define CLASS_3_080AC495FAE07BF1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B4EAF0)

inline static constexpr unsigned int Class_3_080AC495FAE07BF1_TypeDefinitionIndex = 43904;

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

	static ::System::Boolean Method_3_E92774B699B24150(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_080AC495FAE07BF1_METHOD_3_E92774B699B24150_OFFSET))(a1, a2);
	}
};
