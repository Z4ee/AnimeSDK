#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_0_16E4307DCC419505_1004;
namespace RPG::Client { class MonoEffectPluginReattach; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_020E10261646BBF2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DADA70)
#define CLASS_2_020E10261646BBF2_METHOD_2_37CF7377CBA6E635_OFFSET UNITYSDK_OFFSET(0x18DADDD0)
#define CLASS_2_020E10261646BBF2_METHOD_2_3CEF268C18F6CCA6_OFFSET UNITYSDK_OFFSET(0x18DADC90)
#define CLASS_2_020E10261646BBF2_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x18DADAE0)
#define CLASS_2_020E10261646BBF2_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x18DADCE0)
#define CLASS_2_020E10261646BBF2_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x18DADA00)
#define CLASS_2_020E10261646BBF2_METHOD_2_CC75D9DD1D59C05C_OFFSET UNITYSDK_OFFSET(0x18DADE20)
#define CLASS_2_020E10261646BBF2__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAE440)

inline static constexpr unsigned int Class_2_020E10261646BBF2_TypeDefinitionIndex = 66759;

class Class_2_020E10261646BBF2 : public ::RPG::Client::BehaviorBase
{
public:
	::Class_0_16E4307DCC419505_1004* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020E10261646BBF2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_020E10261646BBF2_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020E10261646BBF2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020E10261646BBF2_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020E10261646BBF2_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_2_37CF7377CBA6E635()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020E10261646BBF2_METHOD_2_37CF7377CBA6E635_OFFSET))(this);
	}

	::System::Void Method_2_CC75D9DD1D59C05C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_020E10261646BBF2_METHOD_2_CC75D9DD1D59C05C_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginReattach* Method_2_3CEF268C18F6CCA6()
	{
		return ((::RPG::Client::MonoEffectPluginReattach*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020E10261646BBF2_METHOD_2_3CEF268C18F6CCA6_OFFSET))(this);
	}
};
