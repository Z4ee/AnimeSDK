#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BillboardComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueDoorSetGotoInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_105F02434D918329_METHOD_3_3FEABD1731355A9F_OFFSET UNITYSDK_OFFSET(0xC016270)
#define CLASS_3_105F02434D918329_METHOD_3_CC215CC34C780BFA_OFFSET UNITYSDK_OFFSET(0xC016330)
#define CLASS_3_105F02434D918329_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC015EB0)
#define CLASS_3_105F02434D918329__CTOR_OFFSET UNITYSDK_OFFSET(0xC015E80)

inline static constexpr unsigned int Class_3_105F02434D918329_TypeDefinitionIndex = 58612;

class Class_3_105F02434D918329 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RogueDoorSetGotoInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDoorSetGotoInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDoorSetGotoInfo*))((::PBYTE)hIl2Cpp + CLASS_3_105F02434D918329__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_105F02434D918329_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_3FEABD1731355A9F(::RPG::GameCore::BillboardComponent* a1, ::RPG::Client::TextID a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BillboardComponent*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_3_105F02434D918329_METHOD_3_3FEABD1731355A9F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CC215CC34C780BFA(::RPG::GameCore::PropComponent* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_105F02434D918329_METHOD_3_CC215CC34C780BFA_OFFSET))(this, a1, a2);
	}
};
