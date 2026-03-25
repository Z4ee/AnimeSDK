#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MAPPINGATTACHPOINT_METHOD_3_B1933F7AE440284A_OFFSET UNITYSDK_OFFSET(0x173837E0)
#define RPG_GAMECORE_MAPPINGATTACHPOINT_METHOD_3_B3EE888A948D19C6_OFFSET UNITYSDK_OFFSET(0x173838B0)
#define RPG_GAMECORE_MAPPINGATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x17383860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappingAttachPoint_TypeDefinitionIndex = 21414;

	class MappingAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SourcePointName; // 0x20
		::System::String* MappingTo; // 0x28
		::System::Boolean IsReset; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1933F7AE440284A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MappingAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MappingAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGATTACHPOINT_METHOD_3_B1933F7AE440284A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B3EE888A948D19C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MappingAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MappingAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGATTACHPOINT_METHOD_3_B3EE888A948D19C6_OFFSET))(a1, a2);
		}
	};
}
