#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4A6B20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A6B60)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostSubmitWindow___c_TypeDefinitionIndex = 79089;

	class LimaoNewsPostSubmitWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsPostSubmitWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostSubmitWindow___c_TypeDefinitionIndex)->GetStaticField(0x5DAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
