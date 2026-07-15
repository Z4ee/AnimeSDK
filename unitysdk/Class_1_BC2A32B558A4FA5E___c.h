#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GeneralAudioItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_BC2A32B558A4FA5E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F2CA90)
#define CLASS_1_BC2A32B558A4FA5E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2CAD0)
#define CLASS_1_BC2A32B558A4FA5E___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x16F2CAE0)

inline static constexpr unsigned int Class_1_BC2A32B558A4FA5E___c_TypeDefinitionIndex = 57799;

class Class_1_BC2A32B558A4FA5E___c : public ::System::Object
{
public:
	static ::Class_1_BC2A32B558A4FA5E___c** StaticGet___9()
	{
		return (::Class_1_BC2A32B558A4FA5E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC2A32B558A4FA5E___c_TypeDefinitionIndex)->GetStaticField(0x39640);
	}
	static ::System::Func_2<::RPG::Client::GeneralAudioItem*, ::System::String*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::RPG::Client::GeneralAudioItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC2A32B558A4FA5E___c_TypeDefinitionIndex)->GetStaticField(0x39648);
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
