#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BillboardComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueDoorSetGotoInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_5B998619213E60E3_METHOD_3_27B1A8C7AF310BF4_OFFSET UNITYSDK_OFFSET(0xAC1DEE0)
#define CLASS_3_5B998619213E60E3_METHOD_3_C429EF09D138BEF8_OFFSET UNITYSDK_OFFSET(0xAC1DDF0)
#define CLASS_3_5B998619213E60E3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC1DAA0)
#define CLASS_3_5B998619213E60E3__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1DA70)

inline static constexpr unsigned int Class_3_5B998619213E60E3_TypeDefinitionIndex = 54621;

class Class_3_5B998619213E60E3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RogueDoorSetGotoInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDoorSetGotoInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDoorSetGotoInfo*))((::PBYTE)hIl2Cpp + CLASS_3_5B998619213E60E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B998619213E60E3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C429EF09D138BEF8(::RPG::GameCore::BillboardComponent* a1, ::RPG::Client::TextID a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BillboardComponent*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_3_5B998619213E60E3_METHOD_3_C429EF09D138BEF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_27B1A8C7AF310BF4(::RPG::GameCore::PropComponent* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5B998619213E60E3_METHOD_3_27B1A8C7AF310BF4_OFFSET))(this, a1, a2);
	}
};
