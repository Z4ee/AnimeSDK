#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7A3290)
#define MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x7A31D0)
#define MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7A32A0)
#define MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM_ISVALID_OFFSET UNITYSDK_OFFSET(0x7A3150)
#define MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FFFCB0)
#define MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7A32B0)
#define MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7A3320)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int FocusUISpecialIconParam_TypeDefinitionIndex = 40881;

	struct alignas(8) FocusUISpecialIconParam
	{
		static ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam* StaticGet_Default()
		{
			return (::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam*)Il2CppClass::FromTypeDefinitionIndex(FocusUISpecialIconParam_TypeDefinitionIndex)->GetStaticField(0x40F30);
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

		::System::Boolean Equals(::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FOCUSUISPECIALICONPARAM___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
