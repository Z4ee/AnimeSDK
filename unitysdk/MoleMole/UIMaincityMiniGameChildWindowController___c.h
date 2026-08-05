#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x168CFC80)
#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x168CFCC0)
#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__ONINFO_B__17_2_OFFSET UNITYSDK_OFFSET(0x168CFCD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMaincityMiniGameChildWindowController___c_TypeDefinitionIndex = 79297;

	class UIMaincityMiniGameChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915*, ::System::Int32>** StaticGet___9__17_2()
		{
			return (::System::Converter_2<::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityMiniGameChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49170);
		}
		static ::MoleMole::UIMaincityMiniGameChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMaincityMiniGameChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityMiniGameChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49178);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnInfo_b__17_2(::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915* t)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__ONINFO_B__17_2_OFFSET))(this, t);
		}
	};
}
