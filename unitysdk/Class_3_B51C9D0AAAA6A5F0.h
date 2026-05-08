#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B51C9D0AAAA6A5F0_METHOD_3_1991D2DBDE96809E_OFFSET UNITYSDK_OFFSET(0x10912340)
#define CLASS_3_B51C9D0AAAA6A5F0_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10912180)
#define CLASS_3_B51C9D0AAAA6A5F0_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x109121E0)
#define CLASS_3_B51C9D0AAAA6A5F0__CTOR_OFFSET UNITYSDK_OFFSET(0x10912330)

inline static constexpr unsigned int Class_3_B51C9D0AAAA6A5F0_TypeDefinitionIndex = 68017;

class Class_3_B51C9D0AAAA6A5F0 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_3; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::Config::EnterBattleState>* Field_3_2; // 0x48
	::System::Action_2<::MoleMole::Config::EnterBattleState, ::MoleMole::Config::EnterBattleState>* Field_3_6; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_3_1; // 0x58
	::System::Action* Field_3_5; // 0x60
	::MoleMole::Config::EnterBattleState Field_3_0; // 0x68
	::Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF Field_3_4; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B51C9D0AAAA6A5F0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B51C9D0AAAA6A5F0_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B51C9D0AAAA6A5F0_ONCLEAN_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_1991D2DBDE96809E()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B51C9D0AAAA6A5F0_METHOD_3_1991D2DBDE96809E_OFFSET))(this);
	}
};
