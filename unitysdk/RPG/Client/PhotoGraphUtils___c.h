#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3A3260)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3A32A0)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__TRIGGERIDLESHOW_B__36_0_OFFSET UNITYSDK_OFFSET(0xC3A32B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c_TypeDefinitionIndex = 64934;

	class PhotoGraphUtils___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PhotoGraphUtils___c** StaticGet___9()
		{
			return (::RPG::Client::PhotoGraphUtils___c**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils___c_TypeDefinitionIndex)->GetStaticField(0x53B0);
		}
		static ::System::Action** StaticGet___9__36_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils___c_TypeDefinitionIndex)->GetStaticField(0x53B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerIdleShow_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__TRIGGERIDLESHOW_B__36_0_OFFSET))(this);
		}
	};
}
