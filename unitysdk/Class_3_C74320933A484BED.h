#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/SkillTextDialogType.h"

namespace RPG::GameCore { class SetSkillTextDialogType; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_C74320933A484BED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1FC1F0)
#define CLASS_3_C74320933A484BED__CCTOR_OFFSET UNITYSDK_OFFSET(0xC1FC5A0)
#define CLASS_3_C74320933A484BED__CTOR_OFFSET UNITYSDK_OFFSET(0xC1FC1C0)

inline static constexpr unsigned int Class_3_C74320933A484BED_TypeDefinitionIndex = 52681;

class Class_3_C74320933A484BED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetSkillTextDialogType*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillTextDialogType, ::System::String*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillTextDialogType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C74320933A484BED_TypeDefinitionIndex)->GetStaticField(0x68400);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTextDialogType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTextDialogType*))((::PBYTE)hIl2Cpp + CLASS_3_C74320933A484BED__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C74320933A484BED__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74320933A484BED_ONTASKBEGIN_OFFSET))(this);
	}
};
