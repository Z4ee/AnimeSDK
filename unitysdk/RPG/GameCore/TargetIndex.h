#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetIndexType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETINDEX_METHOD_3_177DEFCF796591B3_OFFSET UNITYSDK_OFFSET(0x177C13E0)
#define RPG_GAMECORE_TARGETINDEX_METHOD_3_5769A84CA2F290BA_OFFSET UNITYSDK_OFFSET(0x177C1370)
#define RPG_GAMECORE_TARGETINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x177C13C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetIndex_TypeDefinitionIndex = 22180;

	class TargetIndex : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetIndexType IndexType; // 0x10
		::System::Int32 IndexValue; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5769A84CA2F290BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_METHOD_3_5769A84CA2F290BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_177DEFCF796591B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_METHOD_3_177DEFCF796591B3_OFFSET))(a1, a2);
		}
	};
}
