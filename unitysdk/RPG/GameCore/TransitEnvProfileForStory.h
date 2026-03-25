#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitEnvProfile.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRANSITENVPROFILEFORSTORY_METHOD_4_2A4B6EABA30841EC_OFFSET UNITYSDK_OFFSET(0x178B3C40)
#define RPG_GAMECORE_TRANSITENVPROFILEFORSTORY_METHOD_4_59A2E11592810C1D_OFFSET UNITYSDK_OFFSET(0x178B3AB0)
#define RPG_GAMECORE_TRANSITENVPROFILEFORSTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x178B3A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransitEnvProfileForStory_TypeDefinitionIndex = 20071;

	class TransitEnvProfileForStory : public ::RPG::GameCore::TransitEnvProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILEFORSTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2A4B6EABA30841EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TransitEnvProfileForStory*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TransitEnvProfileForStory*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILEFORSTORY_METHOD_4_2A4B6EABA30841EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_59A2E11592810C1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TransitEnvProfileForStory* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TransitEnvProfileForStory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILEFORSTORY_METHOD_4_59A2E11592810C1D_OFFSET))(a1, a2);
		}
	};
}
