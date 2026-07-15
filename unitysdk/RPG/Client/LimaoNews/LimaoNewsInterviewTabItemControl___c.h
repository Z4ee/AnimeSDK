#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A771F40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A771F80)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewTabItemControl___c_TypeDefinitionIndex = 75474;

	class LimaoNewsInterviewTabItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsInterviewTabItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsInterviewTabItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInterviewTabItemControl___c_TypeDefinitionIndex)->GetStaticField(0x36660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
