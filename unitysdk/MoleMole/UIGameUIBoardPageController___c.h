#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_662;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186C0320)
#define MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186C0360)
#define MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__SETUPACTIVITYDATAANDCONFIGS_B__13_0_OFFSET UNITYSDK_OFFSET(0x186C0370)

namespace MoleMole
{
	inline static constexpr unsigned int UIGameUIBoardPageController___c_TypeDefinitionIndex = 64260;

	class UIGameUIBoardPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGameUIBoardPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIGameUIBoardPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGameUIBoardPageController___c_TypeDefinitionIndex)->GetStaticField(0x42A30);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_662*>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_662*>**)Il2CppClass::FromTypeDefinitionIndex(UIGameUIBoardPageController___c_TypeDefinitionIndex)->GetStaticField(0x42A38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetupActivityDataAndConfigs_b__13_0(::Class_2_208CC9941471731A_662* x, ::Class_2_208CC9941471731A_662* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_662*, ::Class_2_208CC9941471731A_662*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGAMEUIBOARDPAGECONTROLLER___C__SETUPACTIVITYDATAANDCONFIGS_B__13_0_OFFSET))(this, x, y);
		}
	};
}
