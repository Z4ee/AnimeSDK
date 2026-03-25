#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CutSceneSFXItem; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_D533150DA9942A27___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x99F2200)
#define CLASS_2_D533150DA9942A27___C__CTOR_OFFSET UNITYSDK_OFFSET(0x99F2240)
#define CLASS_2_D533150DA9942A27___C___CUTSCENEAUDIOBEGIN_B__30_0_OFFSET UNITYSDK_OFFSET(0x99F2250)
#define CLASS_2_D533150DA9942A27___C___INITCUTSCENEINFO_B__51_0_OFFSET UNITYSDK_OFFSET(0x99F2260)

inline static constexpr unsigned int Class_2_D533150DA9942A27___c_TypeDefinitionIndex = 45315;

class Class_2_D533150DA9942A27___c : public ::System::Object
{
public:
	static ::Class_2_D533150DA9942A27___c** StaticGet___9()
	{
		return (::Class_2_D533150DA9942A27___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D533150DA9942A27___c_TypeDefinitionIndex)->GetStaticField(0x46750);
	}
	static ::System::Comparison_1<::RPG::GameCore::CutSceneSFXItem*>** StaticGet___9__51_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::CutSceneSFXItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D533150DA9942A27___c_TypeDefinitionIndex)->GetStaticField(0x46758);
	}
	static ::System::Action_1<::System::UInt32>** StaticGet___9__30_0()
	{
		return (::System::Action_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D533150DA9942A27___c_TypeDefinitionIndex)->GetStaticField(0x46760);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C__CTOR_OFFSET))(this);
	}

	::System::Void __CutsceneAudioBegin_b__30_0(::System::UInt32 eventID)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C___CUTSCENEAUDIOBEGIN_B__30_0_OFFSET))(this, eventID);
	}

	::System::Int32 __InitCutsceneInfo_b__51_0(::RPG::GameCore::CutSceneSFXItem* l, ::RPG::GameCore::CutSceneSFXItem* r)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CutSceneSFXItem*, ::RPG::GameCore::CutSceneSFXItem*))((::PBYTE)hIl2Cpp + CLASS_2_D533150DA9942A27___C___INITCUTSCENEINFO_B__51_0_OFFSET))(this, l, r);
	}
};
