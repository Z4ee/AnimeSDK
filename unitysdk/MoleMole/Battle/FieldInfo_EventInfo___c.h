#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/FieldInfo_EventInfo_K_Count.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_METHOD_1_29C35AC68C60BE89_OFFSET UNITYSDK_OFFSET(0x11449020)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_METHOD_1_EA832B32C7C17B2D_1_OFFSET UNITYSDK_OFFSET(0x11449080)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_METHOD_1_EA832B32C7C17B2D_OFFSET UNITYSDK_OFFSET(0x11449000)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11448FB0)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11448FF0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FieldInfo_EventInfo___c_TypeDefinitionIndex = 71334;

	class FieldInfo_EventInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>**)Il2CppClass::FromTypeDefinitionIndex(FieldInfo_EventInfo___c_TypeDefinitionIndex)->GetStaticField(0x468A0);
		}
		static ::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>**)Il2CppClass::FromTypeDefinitionIndex(FieldInfo_EventInfo___c_TypeDefinitionIndex)->GetStaticField(0x468A8);
		}
		static ::MoleMole::Battle::FieldInfo_EventInfo___c** StaticGet___9()
		{
			return (::MoleMole::Battle::FieldInfo_EventInfo___c**)Il2CppClass::FromTypeDefinitionIndex(FieldInfo_EventInfo___c_TypeDefinitionIndex)->GetStaticField(0x468B0);
		}
		static ::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>**)Il2CppClass::FromTypeDefinitionIndex(FieldInfo_EventInfo___c_TypeDefinitionIndex)->GetStaticField(0x468B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_EA832B32C7C17B2D(::MoleMole::Battle::FieldInfo_EventInfo_K_Count a1, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_METHOD_1_EA832B32C7C17B2D_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_1_29C35AC68C60BE89(::MoleMole::Battle::FieldInfo_EventInfo_K_Count a1, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_METHOD_1_29C35AC68C60BE89_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_1_EA832B32C7C17B2D_1(::MoleMole::Battle::FieldInfo_EventInfo_K_Count a1, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_METHOD_1_EA832B32C7C17B2D_1_OFFSET))(this, a1, a2);
		}
	};
}
