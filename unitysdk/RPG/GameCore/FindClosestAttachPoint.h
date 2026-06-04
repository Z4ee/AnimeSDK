#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_FINDCLOSESTATTACHPOINT_METHOD_3_5193A101489C550A_OFFSET UNITYSDK_OFFSET(0x19720E90)
#define RPG_GAMECORE_FINDCLOSESTATTACHPOINT_METHOD_3_6821718A82485C7D_OFFSET UNITYSDK_OFFSET(0x19720F10)
#define RPG_GAMECORE_FINDCLOSESTATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19720EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FindClosestAttachPoint_TypeDefinitionIndex = 21230;

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

		static ::System::Void Method_3_5193A101489C550A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FindClosestAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FindClosestAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCLOSESTATTACHPOINT_METHOD_3_5193A101489C550A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6821718A82485C7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FindClosestAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FindClosestAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCLOSESTATTACHPOINT_METHOD_3_6821718A82485C7D_OFFSET))(a1, a2);
		}
	};
}
