#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1291;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE402C10)
#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE402C50)
#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_0_OFFSET UNITYSDK_OFFSET(0xE402C60)
#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_1_OFFSET UNITYSDK_OFFSET(0xE402C80)
#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_2_OFFSET UNITYSDK_OFFSET(0xE402CA0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int BagItemControl___c_TypeDefinitionIndex = 73426;

	class BagItemControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_0_16E4307DCC419505_1291*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1291*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(BagItemControl___c_TypeDefinitionIndex)->GetStaticField(0x36C60);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1291*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1291*, ::R3::Observable_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(BagItemControl___c_TypeDefinitionIndex)->GetStaticField(0x36C68);
		}
		static ::RPG::Client::Ui::Samples::BagItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::Ui::Samples::BagItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(BagItemControl___c_TypeDefinitionIndex)->GetStaticField(0x36C70);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_1291*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_1291*, ::R3::Observable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(BagItemControl___c_TypeDefinitionIndex)->GetStaticField(0x36C78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C__CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__3_0(::Class_0_16E4307DCC419505_1291* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1291*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__3_1(::Class_0_16E4307DCC419505_1291* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1291*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __Binding_b__3_2(::Class_0_16E4307DCC419505_1291* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1291*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_2_OFFSET))(this, a1);
		}
	};
}
