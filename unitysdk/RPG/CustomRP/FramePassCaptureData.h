#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DrawCallParams.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_FRAMEPASSCAPTUREDATA_DIFF_OFFSET UNITYSDK_OFFSET(0x22B8FA0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTUREDATA_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x22B8F80)
#define RPG_CUSTOMRP_FRAMEPASSCAPTUREDATA_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0x22B8F30)
#define RPG_CUSTOMRP_FRAMEPASSCAPTUREDATA_OUTPUTASDIFF_OFFSET UNITYSDK_OFFSET(0x22B8FB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCaptureData_TypeDefinitionIndex = 35006;

	struct alignas(8) FramePassCaptureData
	{
		::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>* drawcalls; // 0x10
		::Il2CppArray<::System::Byte>* imgData; // 0x18
		::System::String* img; // 0x20

		::UnityEngine::Texture2D* LoadImage()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTUREDATA_LOADIMAGE_OFFSET))(this);
		}

		::System::Boolean get_Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTUREDATA_GET_EMPTY_OFFSET))(this);
		}

		::System::Void Diff(::RPG::CustomRP::FramePassCaptureData& rhs, ::RPG::CustomRP::FramePassCaptureData& diff_this, ::RPG::CustomRP::FramePassCaptureData& diff_rhs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::FramePassCaptureData&, ::RPG::CustomRP::FramePassCaptureData&, ::RPG::CustomRP::FramePassCaptureData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTUREDATA_DIFF_OFFSET))(this, rhs, diff_this, diff_rhs);
		}

		::Newtonsoft::Json::Linq::JToken* OutputAsDiff()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTUREDATA_OUTPUTASDIFF_OFFSET))(this);
		}
	};
}
