#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT_METHOD_3_657EE5DE06E79386_OFFSET UNITYSDK_OFFSET(0x196E3240)
#define RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT_METHOD_3_F98881DF0E34F14B_OFFSET UNITYSDK_OFFSET(0x196E32C0)
#define RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x196E3290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableCharacterAttachmentSolverPoint_TypeDefinitionIndex = 21202;

	class EnableCharacterAttachmentSolverPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::String* UniqueName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_657EE5DE06E79386(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT_METHOD_3_657EE5DE06E79386_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F98881DF0E34F14B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT_METHOD_3_F98881DF0E34F14B_OFFSET))(a1, a2);
		}
	};
}
