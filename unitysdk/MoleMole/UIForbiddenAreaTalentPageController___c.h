#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186B63C0)
#define MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTROLLER___C__CREATETALENTPOINTLIST_B__33_0_OFFSET UNITYSDK_OFFSET(0x186B6410)
#define MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186B6400)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaTalentPageController___c_TypeDefinitionIndex = 82655;

	class UIForbiddenAreaTalentPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIForbiddenAreaTalentPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIForbiddenAreaTalentPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIForbiddenAreaTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x470D0);
		}
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__33_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIForbiddenAreaTalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x470D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateTalentPointList_b__33_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTROLLER___C__CREATETALENTPOINTLIST_B__33_0_OFFSET))(this, a, b);
		}
	};
}
