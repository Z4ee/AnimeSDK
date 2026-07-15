#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7716C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A771700)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewDetailWindow___c_TypeDefinitionIndex = 75471;

	class LimaoNewsInterviewDetailWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsInterviewDetailWindow___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsInterviewDetailWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInterviewDetailWindow___c_TypeDefinitionIndex)->GetStaticField(0x36620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
