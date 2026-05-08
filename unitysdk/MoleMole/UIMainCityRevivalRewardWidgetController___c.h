#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DBF9E0)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBFA20)
#define MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__SETDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x15DBFA30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalRewardWidgetController___c_TypeDefinitionIndex = 47616;

	class UIMainCityRevivalRewardWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMainCityRevivalRewardWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityRevivalRewardWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityRevivalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3ABD0);
		}
		static ::System::Comparison_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityRevivalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3ABD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetData_b__7_0(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 a, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALREWARDWIDGETCONTROLLER___C__SETDATA_B__7_0_OFFSET))(this, a, b);
		}
	};
}
