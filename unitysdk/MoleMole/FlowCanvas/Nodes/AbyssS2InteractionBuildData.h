#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_562;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_ABYSSS2INTERACTIONBUILDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x14986DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_ABYSSS2INTERACTIONBUILDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14986F90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AbyssS2InteractionBuildData_TypeDefinitionIndex = 40741;

	class AbyssS2InteractionBuildData : public ::System::Object
	{
	public:
		::System::Int32 NpcId; // 0x10
		::System::Int32 InitChatId; // 0x14
		::System::Collections::Generic::List_1<::System::String*>* GameplayTagList; // 0x18
		::System::String* PositionPrefix; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ABYSSS2INTERACTIONBUILDDATA__CTOR_OFFSET))(this);
		}

		static ::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData* Create(::Class_2_208CC9941471731A_562*& template_)
		{
			return ((::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*(*)(::Class_2_208CC9941471731A_562*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ABYSSS2INTERACTIONBUILDDATA_CREATE_OFFSET))(template_);
		}
	};
}
