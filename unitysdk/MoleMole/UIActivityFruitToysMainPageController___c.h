#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AF9A094CFB0F706F;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A60F910)
#define MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60F950)
#define MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__TRYREADALL_B__24_0_OFFSET UNITYSDK_OFFSET(0x1A60F960)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFruitToysMainPageController___c_TypeDefinitionIndex = 84806;

	class UIActivityFruitToysMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_AF9A094CFB0F706F*, ::System::Int32>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::Class_1_AF9A094CFB0F706F*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFruitToysMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4D880);
		}
		static ::MoleMole::UIActivityFruitToysMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityFruitToysMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFruitToysMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4D888);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _TryReadAll_b__24_0(::Class_1_AF9A094CFB0F706F* l)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_AF9A094CFB0F706F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER___C__TRYREADALL_B__24_0_OFFSET))(this, l);
		}
	};
}
