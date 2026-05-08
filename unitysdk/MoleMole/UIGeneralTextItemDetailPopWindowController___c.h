#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151BE270)
#define MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151BE2B0)
#define MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__PROCESSTEXTITEMDETAIL_B__8_0_OFFSET UNITYSDK_OFFSET(0x151BE2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTextItemDetailPopWindowController___c_TypeDefinitionIndex = 76387;

	class UIGeneralTextItemDetailPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::System::String*, ::System::String*>** StaticGet___9__8_0()
		{
			return (::System::Converter_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralTextItemDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37D20);
		}
		static ::MoleMole::UIGeneralTextItemDetailPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralTextItemDetailPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralTextItemDetailPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37D28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _ProcessTextItemDetail_b__8_0(::System::String* x)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTEXTITEMDETAILPOPWINDOWCONTROLLER___C__PROCESSTEXTITEMDETAIL_B__8_0_OFFSET))(this, x);
		}
	};
}
