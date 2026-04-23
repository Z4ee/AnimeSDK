#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FramePassCaptureData.h"
#include "unitysdk/RPG/CustomRP/MaterialParams.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_QACAPTUREDATA_DIFF_OFFSET UNITYSDK_OFFSET(0x22B98C0)
#define RPG_CUSTOMRP_QACAPTUREDATA_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x22B9870)
#define RPG_CUSTOMRP_QACAPTUREDATA_OUTPUTASDIFF_OFFSET UNITYSDK_OFFSET(0x22B9920)
#define RPG_CUSTOMRP_QACAPTUREDATA_UNSERIALIZE_OFFSET UNITYSDK_OFFSET(0x181495E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int QACaptureData_TypeDefinitionIndex = 35007;

	struct alignas(8) QACaptureData
	{
		::RPG::CustomRP::FramePassCaptureData reflection_probe_pass_data; // 0x10
		::RPG::CustomRP::MaterialParams global_params; // 0x28
		::UnityEngine::Texture2D* tex_reflection_probe_pass; // 0x38

		::System::Boolean get_Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_QACAPTUREDATA_GET_EMPTY_OFFSET))(this);
		}

		static ::RPG::CustomRP::QACaptureData Unserialize(::System::String* json)
		{
			return ((::RPG::CustomRP::QACaptureData(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_QACAPTUREDATA_UNSERIALIZE_OFFSET))(json);
		}

		::System::Void Diff(::RPG::CustomRP::QACaptureData& rhs, ::RPG::CustomRP::QACaptureData& diff_this, ::RPG::CustomRP::QACaptureData& diff_rhs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::QACaptureData&, ::RPG::CustomRP::QACaptureData&, ::RPG::CustomRP::QACaptureData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_QACAPTUREDATA_DIFF_OFFSET))(this, rhs, diff_this, diff_rhs);
		}

		::Newtonsoft::Json::Linq::JToken* OutputAsDiff()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_QACAPTUREDATA_OUTPUTASDIFF_OFFSET))(this);
		}
	};
}
