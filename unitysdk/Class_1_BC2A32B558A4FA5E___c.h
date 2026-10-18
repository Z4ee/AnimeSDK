#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GeneralAudioItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_BC2A32B558A4FA5E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3C21F0)
#define CLASS_1_BC2A32B558A4FA5E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C2230)
#define CLASS_1_BC2A32B558A4FA5E___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xB3C2240)

inline static constexpr unsigned int Class_1_BC2A32B558A4FA5E___c_TypeDefinitionIndex = 60520;

class Class_1_BC2A32B558A4FA5E___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::GeneralAudioItem*, ::System::String*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::RPG::Client::GeneralAudioItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC2A32B558A4FA5E___c_TypeDefinitionIndex)->GetStaticField(0x447D0);
	}
	static ::Class_1_BC2A32B558A4FA5E___c** StaticGet___9()
	{
		return (::Class_1_BC2A32B558A4FA5E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC2A32B558A4FA5E___c_TypeDefinitionIndex)->GetStaticField(0x447D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC2A32B558A4FA5E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC2A32B558A4FA5E___C__CTOR_OFFSET))(this);
	}

	::System::String* __ctor_b__0_0(::RPG::Client::GeneralAudioItem* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::GeneralAudioItem*))((::PBYTE)hIl2Cpp + CLASS_1_BC2A32B558A4FA5E___C___CTOR_B__0_0_OFFSET))(this, a1);
	}
};
