#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NAVMESHLINKINFO_METHOD_2_4D71F2DECA34CF44_OFFSET UNITYSDK_OFFSET(0x1D2F2C20)
#define RPG_GAMECORE_NAVMESHLINKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F2D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavMeshLinkInfo_TypeDefinitionIndex = 17118;

	class NavMeshLinkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 StartPoint; // 0x10
		::RPG::MVector3 EndPoint; // 0x1C
		::System::Single Width; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMESHLINKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4D71F2DECA34CF44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NavMeshLinkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NavMeshLinkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMESHLINKINFO_METHOD_2_4D71F2DECA34CF44_OFFSET))(a1, a2);
		}
	};
}
