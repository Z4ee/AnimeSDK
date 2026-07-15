#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A791130)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A791170)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostInfoRowControl___c_TypeDefinitionIndex = 75490;

	class LimaoNewsPostInfoRowControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsPostInfoRowControl___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsPostInfoRowControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostInfoRowControl___c_TypeDefinitionIndex)->GetStaticField(0x376F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
