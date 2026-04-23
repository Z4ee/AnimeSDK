#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTRAITEFFECTLAYERPARAMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DCBE0)
#define RPG_GAMECORE_GRIDFIGHTTRAITEFFECTLAYERPARAMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DCE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEffectLayerParamConfigRow_TypeDefinitionIndex = 12946;

	class GridFightTraitEffectLayerParamConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x10
		::Il2CppArray<::System::Double>* DescParamList; // 0x18
		::System::UInt32 Layer; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID TraitEffectDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEFFECTLAYERPARAMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEFFECTLAYERPARAMCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
