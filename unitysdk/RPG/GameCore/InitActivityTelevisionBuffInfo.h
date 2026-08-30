#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO_METHOD_3_1D204AA55EF0B322_OFFSET UNITYSDK_OFFSET(0x1D21CDE0)
#define RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO_METHOD_3_88B8A4C07C8BD7F7_OFFSET UNITYSDK_OFFSET(0x1D21CE20)
#define RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21CE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitActivityTelevisionBuffInfo_TypeDefinitionIndex = 22980;

	class InitActivityTelevisionBuffInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BuffIcon; // 0x18
		::RPG::Client::TextID DescText; // 0x20
		::RPG::GameCore::DynamicFloat* InitCount; // 0x30
		::System::UInt32 TutorialGroupID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D204AA55EF0B322(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitActivityTelevisionBuffInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitActivityTelevisionBuffInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO_METHOD_3_1D204AA55EF0B322_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88B8A4C07C8BD7F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitActivityTelevisionBuffInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitActivityTelevisionBuffInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITACTIVITYTELEVISIONBUFFINFO_METHOD_3_88B8A4C07C8BD7F7_OFFSET))(a1, a2);
		}
	};
}
