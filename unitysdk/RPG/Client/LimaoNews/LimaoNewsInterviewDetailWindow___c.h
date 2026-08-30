#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C53A3E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53A420)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewDetailWindow___c_TypeDefinitionIndex = 79052;

	class LimaoNewsInterviewDetailWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsInterviewDetailWindow___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsInterviewDetailWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInterviewDetailWindow___c_TypeDefinitionIndex)->GetStaticField(0x5B040);
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
