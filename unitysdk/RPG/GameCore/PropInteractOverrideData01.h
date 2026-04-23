#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01_METHOD_3_0251A7754BF5C700_OFFSET UNITYSDK_OFFSET(0x18C6F2A0)
#define RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01_METHOD_3_93C3B0CCEE802ACF_OFFSET UNITYSDK_OFFSET(0x18C6F220)
#define RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6F270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInteractOverrideData01_TypeDefinitionIndex = 19336;

	class PropInteractOverrideData01 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreasPath; // 0x18
		::System::String* AreaName; // 0x20
		::System::String* AnchorName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93C3B0CCEE802ACF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInteractOverrideData01*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInteractOverrideData01*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01_METHOD_3_93C3B0CCEE802ACF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0251A7754BF5C700(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInteractOverrideData01* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInteractOverrideData01*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTOVERRIDEDATA01_METHOD_3_0251A7754BF5C700_OFFSET))(a1, a2);
		}
	};
}
