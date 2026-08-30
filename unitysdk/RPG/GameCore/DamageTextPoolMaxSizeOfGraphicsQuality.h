#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageTextMobilePoolConfig; }

#define RPG_GAMECORE_DAMAGETEXTPOOLMAXSIZEOFGRAPHICSQUALITY_METHOD_2_6C111494942E0D7B_OFFSET UNITYSDK_OFFSET(0x1D016330)
#define RPG_GAMECORE_DAMAGETEXTPOOLMAXSIZEOFGRAPHICSQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0163F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageTextPoolMaxSizeOfGraphicsQuality_TypeDefinitionIndex = 16947;

	class DamageTextPoolMaxSizeOfGraphicsQuality : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DamageTextMobilePoolConfig* Mobile; // 0x10
		::RPG::GameCore::DamageTextMobilePoolConfig* NonMobile; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTPOOLMAXSIZEOFGRAPHICSQUALITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6C111494942E0D7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageTextPoolMaxSizeOfGraphicsQuality*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageTextPoolMaxSizeOfGraphicsQuality*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTPOOLMAXSIZEOFGRAPHICSQUALITY_METHOD_2_6C111494942E0D7B_OFFSET))(a1, a2);
		}
	};
}
