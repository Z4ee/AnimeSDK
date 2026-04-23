#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE_METHOD_3_47E34213435AAA3E_OFFSET UNITYSDK_OFFSET(0x190D02C0)
#define RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE_METHOD_3_6E1489F11C61D5B2_OFFSET UNITYSDK_OFFSET(0x190D01B0)
#define RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x190D0290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TryStartConnectUltraSkillFrameCapture_TypeDefinitionIndex = 21623;

	class TryStartConnectUltraSkillFrameCapture : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E1489F11C61D5B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE_METHOD_3_6E1489F11C61D5B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47E34213435AAA3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYSTARTCONNECTULTRASKILLFRAMECAPTURE_METHOD_3_47E34213435AAA3E_OFFSET))(a1, a2);
		}
	};
}
