#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_018062C2DA2CD7D7_OFFSET UNITYSDK_OFFSET(0x1E1BB3A0)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_AACDA6004FD3887A_OFFSET UNITYSDK_OFFSET(0x1E1BB480)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_BFD2CDFFC8FF7CAB_OFFSET UNITYSDK_OFFSET(0x1E1BB540)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_F9D3429DF9E2ED1E_OFFSET UNITYSDK_OFFSET(0x1E1BB570)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BB470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCharacterChangeSource_TypeDefinitionIndex = 23702;

	class TargetMapCharacterChangeSource : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean IncludeSelf; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_018062C2DA2CD7D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCharacterChangeSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCharacterChangeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_018062C2DA2CD7D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AACDA6004FD3887A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_AACDA6004FD3887A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BFD2CDFFC8FF7CAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_BFD2CDFFC8FF7CAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F9D3429DF9E2ED1E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_F9D3429DF9E2ED1E_OFFSET))(a1, a2);
		}
	};
}
