#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StreamingBlockVolumeComponentData; }

#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_7A523BEE0904FFC4_OFFSET UNITYSDK_OFFSET(0x18EA7C30)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_99C0230C56212B7F_OFFSET UNITYSDK_OFFSET(0x18EA7C70)
#define RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA7C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingGroupVolumeComponentData_TypeDefinitionIndex = 18140;

	class StreamingGroupVolumeComponentData : public ::RPG::GameCore::StageVolumeComponentData
	{
	public:
		::Il2CppArray<::RPG::GameCore::StreamingBlockVolumeComponentData*>* StreamingVolumeGroup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7A523BEE0904FFC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingGroupVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_7A523BEE0904FFC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99C0230C56212B7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingGroupVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGGROUPVOLUMECOMPONENTDATA_METHOD_3_99C0230C56212B7F_OFFSET))(a1, a2);
		}
	};
}
