#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_66C4D81440373C6E.h"
#include "unitysdk/Enum_3_65BB655811A73E3A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9B8A28A306558B7F;
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4098BD6CB3ECC560_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x18061200)
#define CLASS_2_4098BD6CB3ECC560_METHOD_2_2994A2B2674E91BA_OFFSET UNITYSDK_OFFSET(0x18060E40)
#define CLASS_2_4098BD6CB3ECC560_METHOD_2_34C43A55C54372ED_OFFSET UNITYSDK_OFFSET(0x18060E50)
#define CLASS_2_4098BD6CB3ECC560_METHOD_2_5EB2555FC61540CD_OFFSET UNITYSDK_OFFSET(0x18060E60)
#define CLASS_2_4098BD6CB3ECC560_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x18060CE0)
#define CLASS_2_4098BD6CB3ECC560__CTOR_OFFSET UNITYSDK_OFFSET(0x18060E30)

inline static constexpr unsigned int Class_2_4098BD6CB3ECC560_TypeDefinitionIndex = 54708;

class Class_2_4098BD6CB3ECC560 : public ::Class_1_66C4D81440373C6E
{
public:
	::MoleMole::SkillCharacterScriptConfig* Field_2_3; // 0xE8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_2; // 0xF0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_1; // 0xF8
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_0; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4098BD6CB3ECC560__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4098BD6CB3ECC560_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_2994A2B2674E91BA(::MoleMole::SkillCharacterScriptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4098BD6CB3ECC560_METHOD_2_2994A2B2674E91BA_OFFSET))(this, a1);
	}

	::MoleMole::SkillCharacterScriptConfig* Method_2_34C43A55C54372ED()
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4098BD6CB3ECC560_METHOD_2_34C43A55C54372ED_OFFSET))(this);
	}

	::System::Void Method_2_5EB2555FC61540CD(::System::UInt32 a1, ::Class_1_9B8A28A306558B7F* a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Int32 a6, ::Enum_3_65BB655811A73E3A a7, ::MoleMole::Config::CampType a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a9, ::System::Collections::Generic::HashSet_1<::System::String*>* a10, ::System::Collections::Generic::HashSet_1<::System::Int32>* a11, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a12, ::System::Int32 a13, ::System::Collections::Generic::List_1<::System::Int32>* a14)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9B8A28A306558B7F*, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::Enum_3_65BB655811A73E3A, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_4098BD6CB3ECC560_METHOD_2_5EB2555FC61540CD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4098BD6CB3ECC560_METHOD_2_218124418542E081_OFFSET))(this);
	}
};
