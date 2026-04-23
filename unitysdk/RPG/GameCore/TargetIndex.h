#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetIndexType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TARGETINDEX_METHOD_3_2DBC1B90ED4D1255_OFFSET UNITYSDK_OFFSET(0x18EE6B80)
#define RPG_GAMECORE_TARGETINDEX_METHOD_3_C043EBBDF5F1BE40_OFFSET UNITYSDK_OFFSET(0x18EE6CC0)
#define RPG_GAMECORE_TARGETINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE6C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetIndex_TypeDefinitionIndex = 22894;

	class TargetIndex : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetIndexType IndexType; // 0x10
		::RPG::GameCore::DynamicFloat* IndexValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2DBC1B90ED4D1255(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_METHOD_3_2DBC1B90ED4D1255_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C043EBBDF5F1BE40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_METHOD_3_C043EBBDF5F1BE40_OFFSET))(a1, a2);
		}
	};
}
