#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraPreparationStateControllerBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_34506B4F1B63D04D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1781EB70)
#define CLASS_1_34506B4F1B63D04D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1781EBB0)
#define CLASS_1_34506B4F1B63D04D___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1781EBC0)
#define CLASS_1_34506B4F1B63D04D___C___CTOR_B__3_1_OFFSET UNITYSDK_OFFSET(0x1781EC50)

inline static constexpr unsigned int Class_1_34506B4F1B63D04D___c_TypeDefinitionIndex = 78009;

class Class_1_34506B4F1B63D04D___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34506B4F1B63D04D___c_TypeDefinitionIndex)->GetStaticField(0x59800);
	}
	static ::System::Func_2<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*, ::RPG::Client::Prop::ChimeraPreparationState>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*, ::RPG::Client::Prop::ChimeraPreparationState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34506B4F1B63D04D___c_TypeDefinitionIndex)->GetStaticField(0x59808);
	}
	static ::Class_1_34506B4F1B63D04D___c** StaticGet___9()
	{
		return (::Class_1_34506B4F1B63D04D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34506B4F1B63D04D___c_TypeDefinitionIndex)->GetStaticField(0x59810);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_34506B4F1B63D04D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34506B4F1B63D04D___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::Prop::ChimeraPreparationState __ctor_b__3_0(::RPG::Client::Prop::ChimeraPreparationStateControllerBase* a1)
	{
		return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*))((::PBYTE)hIl2Cpp + CLASS_1_34506B4F1B63D04D___C___CTOR_B__3_0_OFFSET))(this, a1);
	}

	::RPG::Client::Prop::ChimeraPreparationStateControllerBase* __ctor_b__3_1(::RPG::Client::Prop::ChimeraPreparationStateControllerBase* a1)
	{
		return ((::RPG::Client::Prop::ChimeraPreparationStateControllerBase*(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*))((::PBYTE)hIl2Cpp + CLASS_1_34506B4F1B63D04D___C___CTOR_B__3_1_OFFSET))(this, a1);
	}
};
