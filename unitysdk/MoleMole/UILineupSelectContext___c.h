#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_55;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16515410)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16515450)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__SETHOLLOWQUESTCONTEXT_B__65_2_OFFSET UNITYSDK_OFFSET(0x16515520)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__57_0_OFFSET UNITYSDK_OFFSET(0x16515460)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x165154A0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__60_0_OFFSET UNITYSDK_OFFSET(0x165154E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c_TypeDefinitionIndex = 52595;

	class UILineupSelectContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x3D1E0);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_55*>** StaticGet___9__65_2()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_55*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x3D1E8);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x3D1F0);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x3D1F8);
		}
		static ::MoleMole::UILineupSelectContext___c** StaticGet___9()
		{
			return (::MoleMole::UILineupSelectContext___c**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x3D200);
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

		::System::Void _SetHollowQuestContext_b__65_2(::Class_3_48A3D3A34C52331D_55* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_55*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__SETHOLLOWQUESTCONTEXT_B__65_2_OFFSET))(this, ret);
		}
	};
}
