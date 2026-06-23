#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A4AEC0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4AF00)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__PLAYVIDEOFROMSTART_B__9_0_OFFSET UNITYSDK_OFFSET(0x18A4AF10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityVideoWidgetController___c_TypeDefinitionIndex = 79677;

	class UIActivityVideoWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityVideoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityVideoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityVideoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37840);
		}
		static ::System::Action_1<::Class_1_E9529ED64113E4E9*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::Class_1_E9529ED64113E4E9*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityVideoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoFromStart_b__9_0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__PLAYVIDEOFROMSTART_B__9_0_OFFSET))(this, vp);
		}
	};
}
