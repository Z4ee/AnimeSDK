#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ByIsBodyPart.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_6FCCA23DB96CDE5E_OFFSET UNITYSDK_OFFSET(0x1874ED40)
#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_DF3C78F986992AF0_OFFSET UNITYSDK_OFFSET(0x1874EEC0)
#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1874ECF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBodyPartClientOnly_TypeDefinitionIndex = 22285;

	class ByIsBodyPartClientOnly : public ::RPG::GameCore::ByIsBodyPart
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DF3C78F986992AF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPartClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPartClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_DF3C78F986992AF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6FCCA23DB96CDE5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPartClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPartClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_6FCCA23DB96CDE5E_OFFSET))(a1, a2);
		}
	};
}
