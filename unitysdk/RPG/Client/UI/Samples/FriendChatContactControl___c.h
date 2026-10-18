#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1293;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4034C0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE403500)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_0_OFFSET UNITYSDK_OFFSET(0xE403510)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_1_OFFSET UNITYSDK_OFFSET(0xE403530)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_2_OFFSET UNITYSDK_OFFSET(0xE403550)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatContactControl___c_TypeDefinitionIndex = 73433;

	class FriendChatContactControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Ui::Samples::FriendChatContactControl___c** StaticGet___9()
		{
			return (::RPG::Client::Ui::Samples::FriendChatContactControl___c**)Il2CppClass::FromTypeDefinitionIndex(FriendChatContactControl___c_TypeDefinitionIndex)->GetStaticField(0x36CE0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1293*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1293*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(FriendChatContactControl___c_TypeDefinitionIndex)->GetStaticField(0x36CE8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1293*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1293*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(FriendChatContactControl___c_TypeDefinitionIndex)->GetStaticField(0x36CF0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1293*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__4_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1293*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(FriendChatContactControl___c_TypeDefinitionIndex)->GetStaticField(0x36CF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__4_0(::Class_0_16E4307DCC419505_1293* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1293*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__4_1(::Class_0_16E4307DCC419505_1293* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1293*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __Binding_b__4_2(::Class_0_16E4307DCC419505_1293* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1293*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_2_OFFSET))(this, a1);
		}
	};
}
