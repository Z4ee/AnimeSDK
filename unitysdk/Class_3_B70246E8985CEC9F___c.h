#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_B70246E8985CEC9F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E42A10)
#define CLASS_3_B70246E8985CEC9F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E42A40)
#define CLASS_3_B70246E8985CEC9F___C__FINISHINITGAME_B__15_0_OFFSET UNITYSDK_OFFSET(0x11E42AA0)
#define CLASS_3_B70246E8985CEC9F___C___INITAUDIOPCK_B__12_2_OFFSET UNITYSDK_OFFSET(0x11E42A50)

inline static constexpr unsigned int Class_3_B70246E8985CEC9F___c_TypeDefinitionIndex = 56396;

class Class_3_B70246E8985CEC9F___c : public ::System::Object
{
public:
	static ::Class_3_B70246E8985CEC9F___c** StaticGet___9()
	{
		return (::Class_3_B70246E8985CEC9F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B70246E8985CEC9F___c_TypeDefinitionIndex)->GetStaticField(0x52EF0);
	}
	static ::System::Action** StaticGet___9__12_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B70246E8985CEC9F___c_TypeDefinitionIndex)->GetStaticField(0x52EF8);
	}
	static ::System::Action** StaticGet___9__15_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B70246E8985CEC9F___c_TypeDefinitionIndex)->GetStaticField(0x52F00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B70246E8985CEC9F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B70246E8985CEC9F___C__CTOR_OFFSET))(this);
	}

	::System::Void __InitAudioPck_b__12_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B70246E8985CEC9F___C___INITAUDIOPCK_B__12_2_OFFSET))(this);
	}

	::System::Void _FinishInitGame_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B70246E8985CEC9F___C__FINISHINITGAME_B__15_0_OFFSET))(this);
	}
};
