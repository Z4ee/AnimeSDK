#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNPCIDSFORAVATAR_INNERFINDNPCIDS_OFFSET UNITYSDK_OFFSET(0x149E57F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNPCIDSFORAVATAR_INVOKE_OFFSET UNITYSDK_OFFSET(0x149E5550)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNPCIDSFORAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x149E59E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetNpcIdsForAvatar_TypeDefinitionIndex = 83251;

	class LD_AbyssS2_GetNpcIdsForAvatar : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Collections::Generic::List_1<::System::Int32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNPCIDSFORAVATAR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNPCIDSFORAVATAR_INVOKE_OFFSET))(this);
		}

		::System::Void InnerFindNpcIds(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& avatars, ::System::Collections::Generic::List_1<::System::Int32>*& container)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNPCIDSFORAVATAR_INNERFINDNPCIDS_OFFSET))(this, avatars, container);
		}
	};
}
