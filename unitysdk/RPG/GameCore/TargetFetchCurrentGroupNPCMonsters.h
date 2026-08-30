#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_25760FD1A0312A66_OFFSET UNITYSDK_OFFSET(0x1D5AA890)
#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_2F6D5308EB922E66_OFFSET UNITYSDK_OFFSET(0x1D5AA910)
#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_8B7FDA2052AAD3D7_OFFSET UNITYSDK_OFFSET(0x1D5AA810)
#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_A03E8F9088546313_OFFSET UNITYSDK_OFFSET(0x1D5AA8F0)
#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AA880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentGroupNPCMonsters_TypeDefinitionIndex = 23594;

	class TargetFetchCurrentGroupNPCMonsters : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8B7FDA2052AAD3D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_8B7FDA2052AAD3D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25760FD1A0312A66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_25760FD1A0312A66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A03E8F9088546313(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_A03E8F9088546313_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2F6D5308EB922E66(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_METHOD_4_2F6D5308EB922E66_OFFSET))(a1, a2);
		}
	};
}
