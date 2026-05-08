#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1232EB30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1232EB70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1232EB80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x1232EBC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ListenChallengeUpdateByItemID___c_TypeDefinitionIndex = 73538;

	class LD_AbyssS2_ListenChallengeUpdateByItemID___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::ValueHandler_1<::System::Int32>** StaticGet___9__7_0()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenChallengeUpdateByItemID___c_TypeDefinitionIndex)->GetStaticField(0x41BB0);
		}
		static ::MoleMole::FlowCanvas::Nodes::LD_AbyssS2_ListenChallengeUpdateByItemID___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LD_AbyssS2_ListenChallengeUpdateByItemID___c**)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenChallengeUpdateByItemID___c_TypeDefinitionIndex)->GetStaticField(0x41BB8);
		}
		static ::FlowCanvas::ValueHandler_1<::System::Int32>** StaticGet___9__7_1()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenChallengeUpdateByItemID___c_TypeDefinitionIndex)->GetStaticField(0x41BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__7_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__REGISTERPORTS_B__7_0_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__7_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__REGISTERPORTS_B__7_1_OFFSET))(this);
		}
	};
}
