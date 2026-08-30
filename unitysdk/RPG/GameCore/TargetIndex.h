#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetIndexType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETINDEX_METHOD_3_02B30785BD0A3C46_OFFSET UNITYSDK_OFFSET(0x1D5B0700)
#define RPG_GAMECORE_TARGETINDEX_METHOD_3_A9C8EE2A1D92F603_OFFSET UNITYSDK_OFFSET(0x1D5B04E0)
#define RPG_GAMECORE_TARGETINDEX_METHOD_3_AAF0651CBE2E58C3_OFFSET UNITYSDK_OFFSET(0x1D5B0790)
#define RPG_GAMECORE_TARGETINDEX_METHOD_3_C043EBBDF5F1BE40_OFFSET UNITYSDK_OFFSET(0x1D5B05E0)
#define RPG_GAMECORE_TARGETINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B0570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetIndex_TypeDefinitionIndex = 23628;

	class TargetIndex : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetIndexType IndexType; // 0x10
		::RPG::GameCore::DynamicFloat* IndexValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A9C8EE2A1D92F603(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_METHOD_3_A9C8EE2A1D92F603_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C043EBBDF5F1BE40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_METHOD_3_C043EBBDF5F1BE40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02B30785BD0A3C46(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetIndex*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_METHOD_3_02B30785BD0A3C46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AAF0651CBE2E58C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETINDEX_METHOD_3_AAF0651CBE2E58C3_OFFSET))(a1, a2);
		}
	};
}
