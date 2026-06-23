#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_441CA76566B8E079.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_690;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13805E20)
#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13805E60)
#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__GETSCOREBUFFRATIO_B__60_0_OFFSET UNITYSDK_OFFSET(0x13805EA0)
#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__SHOWTAB_B__38_0_OFFSET UNITYSDK_OFFSET(0x13805E70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooChangeClothPageController___c_TypeDefinitionIndex = 70904;

	class UIRidusGotBooChangeClothPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRidusGotBooChangeClothPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIRidusGotBooChangeClothPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooChangeClothPageController___c_TypeDefinitionIndex)->GetStaticField(0x46D20);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Enum_3_441CA76566B8E079, ::System::Int32>, ::System::Int32>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Enum_3_441CA76566B8E079, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooChangeClothPageController___c_TypeDefinitionIndex)->GetStaticField(0x46D28);
		}
		static ::System::Predicate_1<::Class_2_208CC9941471731A_690*>** StaticGet___9__38_0()
		{
			return (::System::Predicate_1<::Class_2_208CC9941471731A_690*>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooChangeClothPageController___c_TypeDefinitionIndex)->GetStaticField(0x46D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ShowTab_b__38_0(::Class_2_208CC9941471731A_690* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_690*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__SHOWTAB_B__38_0_OFFSET))(this, x);
		}

		::System::Int32 _GetScoreBuffRatio_b__60_0(::System::Collections::Generic::KeyValuePair_2<::Enum_3_441CA76566B8E079, ::System::Int32> x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Enum_3_441CA76566B8E079, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__GETSCOREBUFFRATIO_B__60_0_OFFSET))(this, x);
		}
	};
}
