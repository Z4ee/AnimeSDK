#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPROTATIONENTITYEFFECT_METHOD_2_73A225AC676438B7_OFFSET UNITYSDK_OFFSET(0x1737FBD0)
#define RPG_GAMECORE_MAPROTATIONENTITYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1737FD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationEntityEffect_TypeDefinitionIndex = 15592;

	class MapRotationEntityEffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::Boolean IsMaterialEffect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_73A225AC676438B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationEntityEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationEntityEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECT_METHOD_2_73A225AC676438B7_OFFSET))(a1, a2);
		}
	};
}
