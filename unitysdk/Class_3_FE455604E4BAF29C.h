#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_FE455604E4BAF29C_Enum_3_84D933D686775DBF.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FE455604E4BAF29C_METHOD_3_1991D2DBDE96809E_OFFSET UNITYSDK_OFFSET(0x14C9E3D0)
#define CLASS_3_FE455604E4BAF29C_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14C9E210)
#define CLASS_3_FE455604E4BAF29C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14C9E270)
#define CLASS_3_FE455604E4BAF29C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C9E3C0)

inline static constexpr unsigned int Class_3_FE455604E4BAF29C_TypeDefinitionIndex = 76509;

class Class_3_FE455604E4BAF29C : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_7; // 0x0
	::System::Action* Field_3_5; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_3_1; // 0x50
	::System::Action_2<::MoleMole::Config::EnterBattleState, ::MoleMole::Config::EnterBattleState>* Field_3_4; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::Config::EnterBattleState>* Field_3_0; // 0x60
	::System::Boolean Field_3_2; // 0x68
	::Class_3_FE455604E4BAF29C_Enum_3_84D933D686775DBF Field_3_6; // 0x6C
	::MoleMole::Config::EnterBattleState Field_3_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE455604E4BAF29C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE455604E4BAF29C_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE455604E4BAF29C_ONCLEAN_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_1991D2DBDE96809E()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE455604E4BAF29C_METHOD_3_1991D2DBDE96809E_OFFSET))(this);
	}
};
