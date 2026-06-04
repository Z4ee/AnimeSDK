#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FramePassCaptureData.h"
#include "unitysdk/RPG/CustomRP/MaterialParams.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_QACAPTUREDATA_DIFF_OFFSET UNITYSDK_OFFSET(0x384A960)
#define RPG_CUSTOMRP_QACAPTUREDATA_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x384A910)
#define RPG_CUSTOMRP_QACAPTUREDATA_OUTPUTASDIFF_OFFSET UNITYSDK_OFFSET(0x384A9C0)
#define RPG_CUSTOMRP_QACAPTUREDATA_UNSERIALIZE_OFFSET UNITYSDK_OFFSET(0x18EEFAE0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int QACaptureData_TypeDefinitionIndex = 35292;

	struct alignas(8) QACaptureData
	{
		::RPG::CustomRP::FramePassCaptureData reflection_probe_pass_data; // 0x10
		::RPG::CustomRP::MaterialParams global_params; // 0x28
		::UnityEngine::Texture2D* tex_reflection_probe_pass; // 0x38

		::System::Boolean get_Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_QACAPTUREDATA_GET_EMPTY_OFFSET))(this);
		}

		static ::RPG::CustomRP::QACaptureData Unserialize(::System::String* a1)
		{
			return ((::RPG::CustomRP::QACaptureData(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_QACAPTUREDATA_UNSERIALIZE_OFFSET))(a1);
		}

		::System::Void Diff(::RPG::CustomRP::QACaptureData& a1, ::RPG::CustomRP::QACaptureData& a2, ::RPG::CustomRP::QACaptureData& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::QACaptureData&, ::RPG::CustomRP::QACaptureData&, ::RPG::CustomRP::QACaptureData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_QACAPTUREDATA_DIFF_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Linq::JToken* OutputAsDiff()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_QACAPTUREDATA_OUTPUTASDIFF_OFFSET))(this);
		}
	};
}
