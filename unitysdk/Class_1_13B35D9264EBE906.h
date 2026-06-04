#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveSpEquipSkillRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_13B35D9264EBE906_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xAA3DBD0)
#define CLASS_1_13B35D9264EBE906_METHOD_1_262F3A7EADBD3DE2_OFFSET UNITYSDK_OFFSET(0xAA3DE20)
#define CLASS_1_13B35D9264EBE906_METHOD_1_DD1F80BD94ED96B3_OFFSET UNITYSDK_OFFSET(0xAA3DBE0)
#define CLASS_1_13B35D9264EBE906__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3DD20)

inline static constexpr unsigned int Class_1_13B35D9264EBE906_TypeDefinitionIndex = 70105;

class Class_1_13B35D9264EBE906 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::System::String* _AbilityName_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Field_1_2; // 0x20
	::RPG::Client::TextID Field_1_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::IdleLiveSpEquipSkillRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSpEquipSkillRow*))((::PBYTE)hIl2Cpp + CLASS_1_13B35D9264EBE906__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_AbilityName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13B35D9264EBE906_GET_ABILITYNAME_OFFSET))(this);
	}

	static ::Class_1_13B35D9264EBE906* Method_1_DD1F80BD94ED96B3(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_13B35D9264EBE906*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_13B35D9264EBE906_METHOD_1_DD1F80BD94ED96B3_OFFSET))(a1, a2);
	}

	::System::String* Method_1_262F3A7EADBD3DE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13B35D9264EBE906_METHOD_1_262F3A7EADBD3DE2_OFFSET))(this);
	}
};
