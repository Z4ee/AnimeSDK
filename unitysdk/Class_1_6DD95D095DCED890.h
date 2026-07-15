#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1C06630EAC3CFF7F;
class Class_2_2F326B57B6445F8D;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6DD95D095DCED890_METHOD_1_4B08A5EF9CAB1270_OFFSET UNITYSDK_OFFSET(0x17641770)
#define CLASS_1_6DD95D095DCED890_METHOD_1_77BD1225DE9DEEB8_OFFSET UNITYSDK_OFFSET(0x17641370)
#define CLASS_1_6DD95D095DCED890_METHOD_1_B4EA5393BA544425_OFFSET UNITYSDK_OFFSET(0x17641690)
#define CLASS_1_6DD95D095DCED890_METHOD_1_D7411E5DB745D614_OFFSET UNITYSDK_OFFSET(0x17641520)
#define CLASS_1_6DD95D095DCED890_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x17641270)
#define CLASS_1_6DD95D095DCED890_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x17641320)
#define CLASS_1_6DD95D095DCED890__CTOR_OFFSET UNITYSDK_OFFSET(0x176417C0)

inline static constexpr unsigned int Class_1_6DD95D095DCED890_TypeDefinitionIndex = 55246;

class Class_1_6DD95D095DCED890 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_1C06630EAC3CFF7F*>* Field_1_0; // 0x10
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::RPG::GameCore::GameWorld* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DD95D095DCED890__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_6DD95D095DCED890_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DD95D095DCED890_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_77BD1225DE9DEEB8(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::Class_2_2F326B57B6445F8D*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::Class_2_2F326B57B6445F8D*>*))((::PBYTE)hIl2Cpp + CLASS_1_6DD95D095DCED890_METHOD_1_77BD1225DE9DEEB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D7411E5DB745D614(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6DD95D095DCED890_METHOD_1_D7411E5DB745D614_OFFSET))(this, a1);
	}

	::Class_1_1C06630EAC3CFF7F* Method_1_B4EA5393BA544425(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_1C06630EAC3CFF7F*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6DD95D095DCED890_METHOD_1_B4EA5393BA544425_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B08A5EF9CAB1270(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6DD95D095DCED890_METHOD_1_4B08A5EF9CAB1270_OFFSET))(this, a1);
	}
};
