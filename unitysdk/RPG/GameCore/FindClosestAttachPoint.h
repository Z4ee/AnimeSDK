#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_FINDCLOSESTATTACHPOINT_METHOD_3_989F5F9A0E08994B_OFFSET UNITYSDK_OFFSET(0x171D70B0)
#define RPG_GAMECORE_FINDCLOSESTATTACHPOINT_METHOD_3_B4CA7853AC6BABFE_OFFSET UNITYSDK_OFFSET(0x171D7130)
#define RPG_GAMECORE_FINDCLOSESTATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x171D7100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FindClosestAttachPoint_TypeDefinitionIndex = 20641;

	class FindClosestAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SourceAttachPointName; // 0x20
		::Il2CppArray<::System::String*>* TargetAttachPointName; // 0x28
		::System::String* DynamicStringKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCLOSESTATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_989F5F9A0E08994B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FindClosestAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FindClosestAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCLOSESTATTACHPOINT_METHOD_3_989F5F9A0E08994B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4CA7853AC6BABFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FindClosestAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FindClosestAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCLOSESTATTACHPOINT_METHOD_3_B4CA7853AC6BABFE_OFFSET))(a1, a2);
		}
	};
}
