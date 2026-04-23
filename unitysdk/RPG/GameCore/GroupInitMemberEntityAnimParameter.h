#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupMemberEntityAnimatorParamConfig; }

#define RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER_METHOD_3_05D7C2EB8DBC5962_OFFSET UNITYSDK_OFFSET(0x189E0970)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER_METHOD_3_331E945FE52AF953_OFFSET UNITYSDK_OFFSET(0x189E09F0)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x189E09C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupInitMemberEntityAnimParameter_TypeDefinitionIndex = 19714;

	class GroupInitMemberEntityAnimParameter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EntityInstanceID; // 0x18
		::Il2CppArray<::RPG::GameCore::GroupMemberEntityAnimatorParamConfig*>* InitAnimatorParams; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05D7C2EB8DBC5962(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupInitMemberEntityAnimParameter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupInitMemberEntityAnimParameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER_METHOD_3_05D7C2EB8DBC5962_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_331E945FE52AF953(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupInitMemberEntityAnimParameter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupInitMemberEntityAnimParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER_METHOD_3_331E945FE52AF953_OFFSET))(a1, a2);
		}
	};
}
