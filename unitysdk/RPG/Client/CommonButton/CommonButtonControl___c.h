#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1466;
class Class_0_16E4307DCC419505_397;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB9DDD0)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCB9DE10)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_0_OFFSET UNITYSDK_OFFSET(0xCB9DE20)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_1_OFFSET UNITYSDK_OFFSET(0xCB9DE40)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_2_OFFSET UNITYSDK_OFFSET(0xCB9DE90)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_3_OFFSET UNITYSDK_OFFSET(0xCB9DEE0)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_4_OFFSET UNITYSDK_OFFSET(0xCB9DF30)

namespace RPG::Client::CommonButton
{
	inline static constexpr unsigned int CommonButtonControl___c_TypeDefinitionIndex = 81244;

	class CommonButtonControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::CommonButton::CommonButtonControl___c** StaticGet___9()
		{
			return (::RPG::Client::CommonButton::CommonButtonControl___c**)Il2CppClass::FromTypeDefinitionIndex(CommonButtonControl___c_TypeDefinitionIndex)->GetStaticField(0x17ED0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1466*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1466*, ::R3::Observable_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(CommonButtonControl___c_TypeDefinitionIndex)->GetStaticField(0x17ED8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1466*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1466*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CommonButtonControl___c_TypeDefinitionIndex)->GetStaticField(0x17EE0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1466*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__6_4()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1466*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CommonButtonControl___c_TypeDefinitionIndex)->GetStaticField(0x17EE8);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1466*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__6_3()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1466*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CommonButtonControl___c_TypeDefinitionIndex)->GetStaticField(0x17EF0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1466*, ::Class_0_16E4307DCC419505_397*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1466*, ::Class_0_16E4307DCC419505_397*>**)Il2CppClass::FromTypeDefinitionIndex(CommonButtonControl___c_TypeDefinitionIndex)->GetStaticField(0x17EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_397* __Binding_b__6_0(::Class_0_16E4307DCC419505_1466* a1)
		{
			return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID, ::Class_0_16E4307DCC419505_1466*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__6_1(::Class_0_16E4307DCC419505_1466* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1466*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__6_2(::Class_0_16E4307DCC419505_1466* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1466*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__6_3(::Class_0_16E4307DCC419505_1466* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1466*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__6_4(::Class_0_16E4307DCC419505_1466* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1466*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_4_OFFSET))(this, a1);
		}
	};
}
