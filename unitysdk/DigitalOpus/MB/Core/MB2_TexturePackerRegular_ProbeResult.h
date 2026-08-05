#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB2_TexturePackerRegular_Node; }

#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBERESULT_GETSCORE_OFFSET UNITYSDK_OFFSET(0x1F5575A0)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBERESULT_PRINTTREE_OFFSET UNITYSDK_OFFSET(0x1F5575E0)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBERESULT_SET_OFFSET UNITYSDK_OFFSET(0x1F557560)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F557620)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_TexturePackerRegular_ProbeResult_TypeDefinitionIndex = 94617;

	class MB2_TexturePackerRegular_ProbeResult : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* root; // 0x10
		::System::Int32 outH; // 0x18
		::System::Int32 outW; // 0x1C
		::System::Single efficiency; // 0x20
		::System::Single totalAtlasArea; // 0x24
		::System::Int32 h; // 0x28
		::System::Int32 w; // 0x2C
		::System::Single squareness; // 0x30
		::System::Int32 numAtlases; // 0x34
		::System::Boolean largerOrEqualToMaxDim; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBERESULT__CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::Int32 ww, ::System::Int32 hh, ::System::Int32 outw, ::System::Int32 outh, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* r, ::System::Boolean fits, ::System::Single e, ::System::Single sq)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBERESULT_SET_OFFSET))(this, ww, hh, outw, outh, r, fits, e, sq);
		}

		::System::Single GetScore(::System::Boolean doPowerOfTwoScore)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBERESULT_GETSCORE_OFFSET))(this, doPowerOfTwoScore);
		}

		::System::Void PrintTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_PROBERESULT_PRINTTREE_OFFSET))(this);
		}
	};
}
