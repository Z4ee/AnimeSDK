#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_B7229ADE2018A2FC_OFFSET UNITYSDK_OFFSET(0x177C1C70)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_EBD544EAA6EC72C8_OFFSET UNITYSDK_OFFSET(0x177C1D80)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x177C1D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAllTeamMember_TypeDefinitionIndex = 22224;

	class TargetMapAllTeamMember : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean RemoveUnselectable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7229ADE2018A2FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllTeamMember*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllTeamMember*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_B7229ADE2018A2FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EBD544EAA6EC72C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAllTeamMember* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAllTeamMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBER_METHOD_3_EBD544EAA6EC72C8_OFFSET))(a1, a2);
		}
	};
}
