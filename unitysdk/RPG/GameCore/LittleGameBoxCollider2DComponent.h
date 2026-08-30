#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameCollider2DComponent.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT_METHOD_4_90A37DC574A29834_OFFSET UNITYSDK_OFFSET(0x1D1FF6D0)
#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT_METHOD_4_99CE7A321DBAF4F8_OFFSET UNITYSDK_OFFSET(0x1D1FF670)
#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FF6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameBoxCollider2DComponent_TypeDefinitionIndex = 18660;

	class LittleGameBoxCollider2DComponent : public ::RPG::GameCore::LittleGameCollider2DComponent
	{
	public:
		::System::Single Width; // 0x28
		::System::Single Height; // 0x2C
		::RPG::MVector2 Center; // 0x30
		::System::Single Angle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_99CE7A321DBAF4F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBoxCollider2DComponent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBoxCollider2DComponent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT_METHOD_4_99CE7A321DBAF4F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90A37DC574A29834(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBoxCollider2DComponent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBoxCollider2DComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DCOMPONENT_METHOD_4_90A37DC574A29834_OFFSET))(a1, a2);
		}
	};
}
