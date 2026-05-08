#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_6;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D33CC0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D33D00)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__SETHOLLOWQUESTCONTEXT_B__65_2_OFFSET UNITYSDK_OFFSET(0x14D33DD0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__57_0_OFFSET UNITYSDK_OFFSET(0x14D33D10)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x14D33D50)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__60_0_OFFSET UNITYSDK_OFFSET(0x14D33D90)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c_TypeDefinitionIndex = 57530;

	class UILineupSelectContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x37F10);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_6*>** StaticGet___9__65_2()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_6*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x37F18);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x37F20);
		}
		static ::MoleMole::UILineupSelectContext___c** StaticGet___9()
		{
			return (::MoleMole::UILineupSelectContext___c**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x37F28);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x37F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::String* __ctor_b__57_0(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__57_0_OFFSET))(this, _);
		}

		::System::String* __ctor_b__58_0(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__58_0_OFFSET))(this, _);
		}

		::System::String* __ctor_b__60_0(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__60_0_OFFSET))(this, _);
		}

		::System::Void _SetHollowQuestContext_b__65_2(::Class_3_48A3D3A34C52331D_6* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__SETHOLLOWQUESTCONTEXT_B__65_2_OFFSET))(this, ret);
		}
	};
}
