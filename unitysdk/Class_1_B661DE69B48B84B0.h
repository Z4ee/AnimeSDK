#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/System/Object.h"

class Class_1_05E595DC72CB83CA;
class Class_1_8976C473AE3B2B47;
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define CLASS_1_B661DE69B48B84B0_METHOD_1_2DE13BE11F24F545_OFFSET UNITYSDK_OFFSET(0x8F3D6A0)
#define CLASS_1_B661DE69B48B84B0_METHOD_1_92E298F85CD1081D_OFFSET UNITYSDK_OFFSET(0x8F3D220)
#define CLASS_1_B661DE69B48B84B0_METHOD_1_ABDF6914795CF7E3_OFFSET UNITYSDK_OFFSET(0x8F3D0F0)
#define CLASS_1_B661DE69B48B84B0_METHOD_1_DFD7F5C5419FD422_OFFSET UNITYSDK_OFFSET(0x8F3D400)
#define CLASS_1_B661DE69B48B84B0_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x8F3CD00)
#define CLASS_1_B661DE69B48B84B0_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x8F3CE10)
#define CLASS_1_B661DE69B48B84B0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F3D830)

inline static constexpr unsigned int Class_1_B661DE69B48B84B0_TypeDefinitionIndex = 50106;

class Class_1_B661DE69B48B84B0 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	::RPG::GameCore::GameWorld* Field_1_0; // 0x10
	::Class_1_05E595DC72CB83CA* Field_1_2; // 0x18
	::Class_1_8976C473AE3B2B47* Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_ABDF6914795CF7E3(::Class_1_05E595DC72CB83CA* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05E595DC72CB83CA*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_METHOD_1_ABDF6914795CF7E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_92E298F85CD1081D(::Class_1_05E595DC72CB83CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05E595DC72CB83CA*))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_METHOD_1_92E298F85CD1081D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFD7F5C5419FD422(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_METHOD_1_DFD7F5C5419FD422_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DE13BE11F24F545(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B661DE69B48B84B0_METHOD_1_2DE13BE11F24F545_OFFSET))(this, a1);
	}
};
