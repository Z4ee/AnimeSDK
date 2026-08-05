#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_27CCD45BA8768483_2;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x19BF6250)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BF6200)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF6240)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigChessboardPluginManager___c_TypeDefinitionIndex = 61882;

	class ConfigChessboardPluginManager___c : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::ConfigChessboardPluginManager___c** StaticGet___9()
		{
			return (::MoleMole::HollowChessboard::ConfigChessboardPluginManager___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigChessboardPluginManager___c_TypeDefinitionIndex)->GetStaticField(0x48DE0);
		}
		static ::System::Action_1<::Class_1_27CCD45BA8768483_2*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::Class_1_27CCD45BA8768483_2*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigChessboardPluginManager___c_TypeDefinitionIndex)->GetStaticField(0x48DE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_3B10EBB5408EF02E(::Class_1_27CCD45BA8768483_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_27CCD45BA8768483_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
		}
	};
}
