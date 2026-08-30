#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYINVISION_METHOD_4_6656D0A4635241BA_OFFSET UNITYSDK_OFFSET(0x1CF2D290)
#define RPG_GAMECORE_BYINVISION_METHOD_4_6DCF8345B55F05FF_OFFSET UNITYSDK_OFFSET(0x1CF2D410)
#define RPG_GAMECORE_BYINVISION_METHOD_4_A3C5FE9A5FA99F73_OFFSET UNITYSDK_OFFSET(0x1CF2D240)
#define RPG_GAMECORE_BYINVISION_METHOD_4_EA5BCB09E90AA309_OFFSET UNITYSDK_OFFSET(0x1CF2D450)
#define RPG_GAMECORE_BYINVISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF2D280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInVision_TypeDefinitionIndex = 20535;

	class ByInVision : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* VisionName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A3C5FE9A5FA99F73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInVision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInVision*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION_METHOD_4_A3C5FE9A5FA99F73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6656D0A4635241BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInVision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION_METHOD_4_6656D0A4635241BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6DCF8345B55F05FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInVision*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInVision*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION_METHOD_4_6DCF8345B55F05FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA5BCB09E90AA309(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInVision* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINVISION_METHOD_4_EA5BCB09E90AA309_OFFSET))(a1, a2);
		}
	};
}
