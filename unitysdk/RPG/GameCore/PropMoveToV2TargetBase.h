#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPMOVETOV2TARGETBASE_METHOD_2_1E6D86F2EF86AB3A_OFFSET UNITYSDK_OFFSET(0x1BA25AE0)
#define RPG_GAMECORE_PROPMOVETOV2TARGETBASE_METHOD_2_C5B85B3E3B45A948_OFFSET UNITYSDK_OFFSET(0x1BA25D90)
#define RPG_GAMECORE_PROPMOVETOV2TARGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA25D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropMoveToV2TargetBase_TypeDefinitionIndex = 19565;

	class PropMoveToV2TargetBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1E6D86F2EF86AB3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropMoveToV2TargetBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropMoveToV2TargetBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETBASE_METHOD_2_1E6D86F2EF86AB3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C5B85B3E3B45A948(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropMoveToV2TargetBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropMoveToV2TargetBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETBASE_METHOD_2_C5B85B3E3B45A948_OFFSET))(a1, a2);
		}
	};
}
