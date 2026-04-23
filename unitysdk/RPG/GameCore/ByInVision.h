#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BYINVISION_METHOD_4_6656D0A4635241BA_OFFSET UNITYSDK_OFFSET(0x1874D410)
#define RPG_GAMECORE_BYINVISION_METHOD_4_7A55C768483C4A74_OFFSET UNITYSDK_OFFSET(0x1874D330)
#define RPG_GAMECORE_BYINVISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1874D3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInVision_TypeDefinitionIndex = 19752;

	class ByInVision : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* VisionName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7A55C768483C4A74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInVision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInVision*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION_METHOD_4_7A55C768483C4A74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6656D0A4635241BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInVision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION_METHOD_4_6656D0A4635241BA_OFFSET))(a1, a2);
		}
	};
}
