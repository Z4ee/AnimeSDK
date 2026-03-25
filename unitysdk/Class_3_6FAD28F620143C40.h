#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_6FAD28F620143C40___c__DisplayClass1_0.h"
#include "unitysdk/Class_3_6FAD28F620143C40___c__DisplayClass1_1.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddWeakByTeamAttackType; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6FAD28F620143C40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8987250)
#define CLASS_3_6FAD28F620143C40__CCTOR_OFFSET UNITYSDK_OFFSET(0x8988A50)
#define CLASS_3_6FAD28F620143C40__CTOR_OFFSET UNITYSDK_OFFSET(0x89871A0)
#define CLASS_3_6FAD28F620143C40__ONTASKBEGIN_G___ADDWEAK_1_0_OFFSET UNITYSDK_OFFSET(0x8988820)

inline static constexpr unsigned int Class_3_6FAD28F620143C40_TypeDefinitionIndex = 43885;

class Class_3_6FAD28F620143C40 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddWeakByTeamAttackType*>
{
public:
	static ::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6FAD28F620143C40_TypeDefinitionIndex)->GetStaticField(0x41590);
	}
	// static const ::System::String* Field_3_0; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>* Field_3_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddWeakByTeamAttackType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddWeakByTeamAttackType*))((::PBYTE)hIl2Cpp + CLASS_3_6FAD28F620143C40__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6FAD28F620143C40__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FAD28F620143C40_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_g___AddWeak_1_0(::RPG::GameCore::AttackDamageType eNewWeak, ::Class_3_6FAD28F620143C40___c__DisplayClass1_0& a2, ::Class_3_6FAD28F620143C40___c__DisplayClass1_1& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::Class_3_6FAD28F620143C40___c__DisplayClass1_0&, ::Class_3_6FAD28F620143C40___c__DisplayClass1_1&))((::PBYTE)hIl2Cpp + CLASS_3_6FAD28F620143C40__ONTASKBEGIN_G___ADDWEAK_1_0_OFFSET))(this, eNewWeak, a2, a3);
	}
};
