#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_TexturePacker_NodeType.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB2_TexturePackerRegular_ProbeResult; }
namespace DigitalOpus::MB::Core { class MB2_TexturePacker_Image; }
namespace DigitalOpus::MB::Core { class MB2_TexturePacker_PixRect; }

#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_NODE_INSERT_OFFSET UNITYSDK_OFFSET(0x1BCF97E0)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_NODE_ISLEAF_OFFSET UNITYSDK_OFFSET(0x1BCF9780)
#define DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_NODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCF9730)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_TexturePackerRegular_Node_TypeDefinitionIndex = 85111;

	class MB2_TexturePackerRegular_Node : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB2_TexturePacker_Image* img; // 0x10
		::Il2CppArray<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>* child; // 0x18
		::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult* bestRoot; // 0x20
		::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect* r; // 0x28
		::DigitalOpus::MB::Core::MB2_TexturePacker_NodeType isFullAtlas; // 0x30

		::System::Void _ctor(::DigitalOpus::MB::Core::MB2_TexturePacker_NodeType rootType)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_TexturePacker_NodeType))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_NODE__CTOR_OFFSET))(this, rootType);
		}

		::System::Boolean isLeaf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_NODE_ISLEAF_OFFSET))(this);
		}

		::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* Insert(::DigitalOpus::MB::Core::MB2_TexturePacker_Image* im, ::System::Boolean handed)
		{
			return ((::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_TEXTUREPACKERREGULAR_NODE_INSERT_OFFSET))(this, im, handed);
		}
	};
}
