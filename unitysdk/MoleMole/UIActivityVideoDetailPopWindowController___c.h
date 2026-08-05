#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1894DF60)
#define MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1894DFA0)
#define MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__PLAYVIDEOFROMSTART_B__8_0_OFFSET UNITYSDK_OFFSET(0x1894DFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityVideoDetailPopWindowController___c_TypeDefinitionIndex = 57038;

	class UIActivityVideoDetailPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityVideoDetailPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityVideoDetailPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityVideoDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32A90);
		}
		static ::System::Action_1<::Class_1_E9529ED64113E4E9*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::Class_1_E9529ED64113E4E9*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityVideoDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoFromStart_b__8_0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__PLAYVIDEOFROMSTART_B__8_0_OFFSET))(this, vp);
		}
	};
}
