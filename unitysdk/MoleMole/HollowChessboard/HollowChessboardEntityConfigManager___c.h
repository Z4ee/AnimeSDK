#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C902C5428A21466B_2;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C_METHOD_1_3B935EDF35B815B0_OFFSET UNITYSDK_OFFSET(0x13838590)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13838540)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13838580)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEntityConfigManager___c_TypeDefinitionIndex = 49535;

	class HollowChessboardEntityConfigManager___c : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::HollowChessboardEntityConfigManager___c** StaticGet___9()
		{
			return (::MoleMole::HollowChessboard::HollowChessboardEntityConfigManager___c**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager___c_TypeDefinitionIndex)->GetStaticField(0x404B0);
		}
		static ::System::Action_1<::Class_1_C902C5428A21466B_2*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::Class_1_C902C5428A21466B_2*>**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager___c_TypeDefinitionIndex)->GetStaticField(0x404B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_3B935EDF35B815B0(::Class_1_C902C5428A21466B_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C902C5428A21466B_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER___C_METHOD_1_3B935EDF35B815B0_OFFSET))(this, a1);
		}
	};
}
