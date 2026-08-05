#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F9D950)
#define MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9D990)
#define MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__REFRESHBYDATA_B__9_0_OFFSET UNITYSDK_OFFSET(0x15F9D9A0)
#define MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__REFRESHNODES_B__13_0_OFFSET UNITYSDK_OFFSET(0x15F9D9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapErosionProgressWidgetController___c_TypeDefinitionIndex = 87228;

	class UIUrbanMapErosionProgressWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapErosionProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AF30);
		}
		static ::System::Func_2<::Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B, ::System::UInt32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapErosionProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AF38);
		}
		static ::MoleMole::UIUrbanMapErosionProgressWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIUrbanMapErosionProgressWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapErosionProgressWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _RefreshByData_b__9_0(::Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B x)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__REFRESHBYDATA_B__9_0_OFFSET))(this, x);
		}

		::System::UInt32 _RefreshNodes_b__13_0(::Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B x)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER___C__REFRESHNODES_B__13_0_OFFSET))(this, x);
		}
	};
}
