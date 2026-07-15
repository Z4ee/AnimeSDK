#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AutoMappingAttachPointType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AUTOMAPPINGATTACHPOINT_METHOD_3_26460BEED99CB61D_OFFSET UNITYSDK_OFFSET(0x1A06E140)
#define RPG_GAMECORE_AUTOMAPPINGATTACHPOINT_METHOD_3_6B92BDDBA8A1D9D8_OFFSET UNITYSDK_OFFSET(0x1A06E100)
#define RPG_GAMECORE_AUTOMAPPINGATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06E130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoMappingAttachPoint_TypeDefinitionIndex = 22363;

	class AutoMappingAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AutoMappingAttachPointType AutoType; // 0x18
		::System::String* SourcePointName; // 0x20
		::System::String* MappingTo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOMAPPINGATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6B92BDDBA8A1D9D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AutoMappingAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AutoMappingAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOMAPPINGATTACHPOINT_METHOD_3_6B92BDDBA8A1D9D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_26460BEED99CB61D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AutoMappingAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AutoMappingAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOMAPPINGATTACHPOINT_METHOD_3_26460BEED99CB61D_OFFSET))(a1, a2);
		}
	};
}
