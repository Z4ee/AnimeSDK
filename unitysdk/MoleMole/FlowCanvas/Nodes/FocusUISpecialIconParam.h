#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM_ISVALID_OFFSET UNITYSDK_OFFSET(0x74C940)
#define MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x125AC010)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int FocusUISpecialIconParam_TypeDefinitionIndex = 73653;

	struct alignas(8) FocusUISpecialIconParam
	{
		static ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam* StaticGet_Default()
		{
			return (::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam*)Il2CppClass::FromTypeDefinitionIndex(FocusUISpecialIconParam_TypeDefinitionIndex)->GetStaticField(0x3E970);
		}
		::System::String* IconParam; // 0x10
		::System::String* IconAffixParam; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM__CCTOR_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM_ISVALID_OFFSET))(this);
		}
	};
}
