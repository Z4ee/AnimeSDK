#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimSurfacePoint; }

#define RPG_GAMECORE_FIVEDIMSURFACEBAKEDINFO_METHOD_2_7F4A8C00A4DFBE23_OFFSET UNITYSDK_OFFSET(0x1720ED50)
#define RPG_GAMECORE_FIVEDIMSURFACEBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1720F140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSurfaceBakedInfo_TypeDefinitionIndex = 15324;

	class FiveDimSurfaceBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimSurfacePoint*>* WalkPointsLeftToRight; // 0x10
		::RPG::GameCore::FiveDimSurfacePoint* BorderL; // 0x18
		::RPG::GameCore::FiveDimSurfacePoint* BorderR; // 0x20
		::System::Boolean IsClosedLR; // 0x28
		::System::Boolean IsMultiDirectional; // 0x29
		::Il2CppArray<::RPG::GameCore::FiveDimSurfacePoint*>* WalkPointsUpToDown; // 0x30
		::RPG::GameCore::FiveDimSurfacePoint* BorderU; // 0x38
		::RPG::GameCore::FiveDimSurfacePoint* BorderD; // 0x40
		::System::Boolean IsClosedUD; // 0x48
		::System::Boolean IsCylinder; // 0x49
		::RPG::MVector3 CylinderCenter; // 0x4C
		::System::Single CylinderRadius; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7F4A8C00A4DFBE23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSurfaceBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSurfaceBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEBAKEDINFO_METHOD_2_7F4A8C00A4DFBE23_OFFSET))(a1, a2);
		}
	};
}
