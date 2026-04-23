#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SmellPropConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SETSPECIALVISIONON_METHOD_3_02EB6BBE542C65F8_OFFSET UNITYSDK_OFFSET(0x18E42410)
#define RPG_GAMECORE_SETSPECIALVISIONON_METHOD_3_054D3AA93B8D654E_OFFSET UNITYSDK_OFFSET(0x18E42350)
#define RPG_GAMECORE_SETSPECIALVISIONON__CTOR_OFFSET UNITYSDK_OFFSET(0x18E423C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSpecialVisionOn_TypeDefinitionIndex = 19470;

	class SetSpecialVisionOn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsOn; // 0x18
		::RPG::GameCore::SpecialVisionType VisionType; // 0x1C
		::System::String* VisionEffectType; // 0x20
		::System::String* CameraEffectType; // 0x28
		::RPG::GameCore::SmellPropConfig* SmellProp; // 0x30
		::System::Boolean IsInfiniteTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSPECIALVISIONON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_054D3AA93B8D654E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSpecialVisionOn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSpecialVisionOn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSPECIALVISIONON_METHOD_3_054D3AA93B8D654E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02EB6BBE542C65F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSpecialVisionOn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSpecialVisionOn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSPECIALVISIONON_METHOD_3_02EB6BBE542C65F8_OFFSET))(a1, a2);
		}
	};
}
