#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD13AD0)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_1_OFFSET UNITYSDK_OFFSET(0x1BD13D50)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_2_OFFSET UNITYSDK_OFFSET(0x1BD13F80)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_3_OFFSET UNITYSDK_OFFSET(0x1BD141B0)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_4_OFFSET UNITYSDK_OFFSET(0x1BD13B20)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD13B10)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex = 78903;

	class PixAirQuitConfirmDialogViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_1()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x605B0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_3()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x605B8);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_2()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x605C0);
		}
		static ::RPG::Client::PixAir::PixAirQuitConfirmDialogViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirQuitConfirmDialogViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x605C8);
		}
		static ::System::Action** StaticGet___9__28_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x605D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__28_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_4_OFFSET))(this);
		}

		::System::Boolean _Create_b__28_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_1_OFFSET))(this);
		}

		::System::Boolean _Create_b__28_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_2_OFFSET))(this);
		}

		::System::Boolean _Create_b__28_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_3_OFFSET))(this);
		}
	};
}
