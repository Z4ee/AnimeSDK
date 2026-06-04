#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CutSceneSFXItem; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_6B967A8FF85DEF97___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC0FC20)
#define CLASS_2_6B967A8FF85DEF97___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC0FC60)
#define CLASS_2_6B967A8FF85DEF97___C___CUTSCENEAUDIOBEGIN_B__30_0_OFFSET UNITYSDK_OFFSET(0xAC0FC70)
#define CLASS_2_6B967A8FF85DEF97___C___INITCUTSCENEINFO_B__51_0_OFFSET UNITYSDK_OFFSET(0xAC0FC80)

inline static constexpr unsigned int Class_2_6B967A8FF85DEF97___c_TypeDefinitionIndex = 52633;

class Class_2_6B967A8FF85DEF97___c : public ::System::Object
{
public:
	static ::Class_2_6B967A8FF85DEF97___c** StaticGet___9()
	{
		return (::Class_2_6B967A8FF85DEF97___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6B967A8FF85DEF97___c_TypeDefinitionIndex)->GetStaticField(0x13080);
	}
	static ::System::Comparison_1<::RPG::GameCore::CutSceneSFXItem*>** StaticGet___9__51_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::CutSceneSFXItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6B967A8FF85DEF97___c_TypeDefinitionIndex)->GetStaticField(0x13088);
	}
	static ::System::Action_1<::System::UInt32>** StaticGet___9__30_0()
	{
		return (::System::Action_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6B967A8FF85DEF97___c_TypeDefinitionIndex)->GetStaticField(0x13090);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97___C__CTOR_OFFSET))(this);
	}

	::System::Void __CutsceneAudioBegin_b__30_0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97___C___CUTSCENEAUDIOBEGIN_B__30_0_OFFSET))(this, a1);
	}

	::System::Int32 __InitCutsceneInfo_b__51_0(::RPG::GameCore::CutSceneSFXItem* a1, ::RPG::GameCore::CutSceneSFXItem* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CutSceneSFXItem*, ::RPG::GameCore::CutSceneSFXItem*))((::PBYTE)hIl2Cpp + CLASS_2_6B967A8FF85DEF97___C___INITCUTSCENEINFO_B__51_0_OFFSET))(this, a1, a2);
	}
};
