#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StoryAdditionStreamingCenter; }

#define RPG_GAMECORE_ADDSTREAMINGSOURCE_METHOD_3_A8BB0D1960FB47B9_OFFSET UNITYSDK_OFFSET(0x1D6A4F90)
#define RPG_GAMECORE_ADDSTREAMINGSOURCE_METHOD_3_B8A034C904CEE3C2_OFFSET UNITYSDK_OFFSET(0x1D6A4FD0)
#define RPG_GAMECORE_ADDSTREAMINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddStreamingSource_TypeDefinitionIndex = 20995;

	class AddStreamingSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::StoryAdditionStreamingCenter* StreamingSource; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTREAMINGSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A8BB0D1960FB47B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddStreamingSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddStreamingSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTREAMINGSOURCE_METHOD_3_A8BB0D1960FB47B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8A034C904CEE3C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddStreamingSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTREAMINGSOURCE_METHOD_3_B8A034C904CEE3C2_OFFSET))(a1, a2);
		}
	};
}
