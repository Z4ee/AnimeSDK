#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MeshBound; }
namespace System { class String; }

#define RPG_GAMECORE_BLOCKHEIGHTBLENDCONFIG_METHOD_2_34B419E8AE3045DD_OFFSET UNITYSDK_OFFSET(0x16FE8500)
#define RPG_GAMECORE_BLOCKHEIGHTBLENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE8BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockHeightBlendConfig_TypeDefinitionIndex = 17526;

	class BlockHeightBlendConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* HeightBlendTex; // 0x10
		::System::String* HeightBlendDetailTex; // 0x18
		::RPG::GameCore::MeshBound* BlockBound; // 0x20
		::System::Single BlendBaseRangeX; // 0x28
		::System::Single BlendBaseRangeY; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKHEIGHTBLENDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_34B419E8AE3045DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockHeightBlendConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockHeightBlendConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKHEIGHTBLENDCONFIG_METHOD_2_34B419E8AE3045DD_OFFSET))(a1, a2);
		}
	};
}
