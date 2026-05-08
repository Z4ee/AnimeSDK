#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_27CCD45BA8768483_1;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x16B91790)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B91740)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B91780)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigChessboardPluginManager___c_TypeDefinitionIndex = 60923;

	class ConfigChessboardPluginManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_27CCD45BA8768483_1*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::Class_1_27CCD45BA8768483_1*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigChessboardPluginManager___c_TypeDefinitionIndex)->GetStaticField(0x41D00);
		}
		static ::MoleMole::HollowChessboard::ConfigChessboardPluginManager___c** StaticGet___9()
		{
			return (::MoleMole::HollowChessboard::ConfigChessboardPluginManager___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigChessboardPluginManager___c_TypeDefinitionIndex)->GetStaticField(0x41D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_3B10EBB5408EF02E(::Class_1_27CCD45BA8768483_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_27CCD45BA8768483_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER___C_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
		}
	};
}
