#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/System/Object.h"

class Class_3_620977F55CD7E401_5;
namespace MoleMole::Config { class FloorStreamingLayerLoadGroupStateEntry; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_REQUESTGROUPSTATECALLBACK_ONRSP_OFFSET UNITYSDK_OFFSET(0x10AFA710)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_REQUESTGROUPSTATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x10AFADE0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorStreamingLayerLoadComponent_RequestGroupStateCallback_TypeDefinitionIndex = 79788;

	class FloorStreamingLayerLoadComponent_RequestGroupStateCallback : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::Config::FloorStreamingLayerLoadGroupStateEntry*>* StateList; // 0x10
		::System::Object* Flag; // 0x18
		::System::Boolean _failure; // 0x20
		::NapStreaming::StreamingLayer Layer; // 0x24
		::System::Int32 _count; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_REQUESTGROUPSTATECALLBACK__CTOR_OFFSET))(this);
		}

		::System::Void OnRsp(::System::Boolean success, ::System::Int32 groupId, ::Class_3_620977F55CD7E401_5* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::Class_3_620977F55CD7E401_5*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_REQUESTGROUPSTATECALLBACK_ONRSP_OFFSET))(this, success, groupId, rsp);
		}
	};
}
