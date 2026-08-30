#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C81FF50)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C81FF90)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__TRIGGERIDLESHOW_B__35_0_OFFSET UNITYSDK_OFFSET(0x1C81FFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c_TypeDefinitionIndex = 69428;

	class PhotoGraphUtils___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__35_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils___c_TypeDefinitionIndex)->GetStaticField(0x5B760);
		}
		static ::RPG::Client::PhotoGraphUtils___c** StaticGet___9()
		{
			return (::RPG::Client::PhotoGraphUtils___c**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphUtils___c_TypeDefinitionIndex)->GetStaticField(0x5B768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerIdleShow_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__TRIGGERIDLESHOW_B__35_0_OFFSET))(this);
		}
	};
}
