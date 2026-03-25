#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_003DB2681021A24E_OFFSET UNITYSDK_OFFSET(0x177C24D0)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_AACDA6004FD3887A_OFFSET UNITYSDK_OFFSET(0x177C2600)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x177C25E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCharacterChangeSource_TypeDefinitionIndex = 22254;

	class TargetMapCharacterChangeSource : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean IncludeSelf; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_003DB2681021A24E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCharacterChangeSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCharacterChangeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_003DB2681021A24E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AACDA6004FD3887A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGESOURCE_METHOD_3_AACDA6004FD3887A_OFFSET))(a1, a2);
		}
	};
}
