#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDB1FDC0)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_1_OFFSET UNITYSDK_OFFSET(0xDB20040)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_2_OFFSET UNITYSDK_OFFSET(0xDB20270)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_3_OFFSET UNITYSDK_OFFSET(0xDB204A0)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_4_OFFSET UNITYSDK_OFFSET(0xDB1FE10)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDB1FE00)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex = 78904;

	class PixAirQuitConfirmDialogViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5C8B0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_2()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5C8B8);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_3()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5C8C0);
		}
		static ::RPG::Client::PixAir::PixAirQuitConfirmDialogViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirQuitConfirmDialogViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5C8C8);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_1()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5C8D0);
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
