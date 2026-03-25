#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REFRESHFRAMECAPTURE_METHOD_3_58BB2280F9BC14CE_OFFSET UNITYSDK_OFFSET(0x17589190)
#define RPG_GAMECORE_REFRESHFRAMECAPTURE_METHOD_3_79C2B7826BC8D1B8_OFFSET UNITYSDK_OFFSET(0x17589110)
#define RPG_GAMECORE_REFRESHFRAMECAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x17589160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshFrameCapture_TypeDefinitionIndex = 18560;

	class RefreshFrameCapture : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Immediate; // 0x18
		::System::Boolean NoPP; // 0x19
		::System::Boolean IncludeUI; // 0x1A
		::System::Boolean ToneMappingAfterCapture; // 0x1B
		::System::Boolean UseLastFrame; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFRAMECAPTURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79C2B7826BC8D1B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshFrameCapture*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshFrameCapture*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFRAMECAPTURE_METHOD_3_79C2B7826BC8D1B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58BB2280F9BC14CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshFrameCapture* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshFrameCapture*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFRAMECAPTURE_METHOD_3_58BB2280F9BC14CE_OFFSET))(a1, a2);
		}
	};
}
