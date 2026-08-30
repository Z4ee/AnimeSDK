#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ByIsBodyPart.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_6FCCA23DB96CDE5E_OFFSET UNITYSDK_OFFSET(0x1CF315C0)
#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_A00C8E5588B4B7A2_OFFSET UNITYSDK_OFFSET(0x1CF31770)
#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_A5BDB866A2649BAF_OFFSET UNITYSDK_OFFSET(0x1CF31580)
#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_AF1FDDE21D09BB84_OFFSET UNITYSDK_OFFSET(0x1CF31740)
#define RPG_GAMECORE_BYISBODYPARTCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF315B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBodyPartClientOnly_TypeDefinitionIndex = 23048;

	class ByIsBodyPartClientOnly : public ::RPG::GameCore::ByIsBodyPart
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A5BDB866A2649BAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPartClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPartClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_A5BDB866A2649BAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6FCCA23DB96CDE5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPartClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPartClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_6FCCA23DB96CDE5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_AF1FDDE21D09BB84(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartClientOnly*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_AF1FDDE21D09BB84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A00C8E5588B4B7A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTCLIENTONLY_METHOD_5_A00C8E5588B4B7A2_OFFSET))(a1, a2);
		}
	};
}
