#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1301D530)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1301D570)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__SETDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0x1301D580)

namespace MoleMole
{
	inline static constexpr unsigned int UIRewardPreviewPopWindowController___c_TypeDefinitionIndex = 65890;

	class UIRewardPreviewPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRewardPreviewPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRewardPreviewPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRewardPreviewPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35410);
		}
		static ::System::Comparison_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(UIRewardPreviewPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetData_b__14_0(::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 a, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00 b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___C__SETDATA_B__14_0_OFFSET))(this, a, b);
		}
	};
}
