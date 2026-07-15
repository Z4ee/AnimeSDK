#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID_METHOD_3_2A361B0DAED867B8_OFFSET UNITYSDK_OFFSET(0x1C5BB380)
#define RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID_METHOD_3_C5D09739983A649B_OFFSET UNITYSDK_OFFSET(0x1C5BB3C0)
#define RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BB3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GetRuanMadeCakePerformanceID_TypeDefinitionIndex = 20308;

	class GetRuanMadeCakePerformanceID : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RoomID; // 0x18
		::System::String* DynamicStringKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2A361B0DAED867B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GetRuanMadeCakePerformanceID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GetRuanMadeCakePerformanceID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID_METHOD_3_2A361B0DAED867B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5D09739983A649B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GetRuanMadeCakePerformanceID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GetRuanMadeCakePerformanceID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID_METHOD_3_C5D09739983A649B_OFFSET))(a1, a2);
		}
	};
}
