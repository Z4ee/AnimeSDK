#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER_METHOD_3_3ABEBF55EB58D827_OFFSET UNITYSDK_OFFSET(0x1E828FB0)
#define RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER_METHOD_3_987822CD523F9938_OFFSET UNITYSDK_OFFSET(0x1E828FF0)
#define RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E828FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityForbidCameraDither_TypeDefinitionIndex = 20364;

	class SetEntityForbidCameraDither : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ForbidCameraDither; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3ABEBF55EB58D827(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityForbidCameraDither*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityForbidCameraDither*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER_METHOD_3_3ABEBF55EB58D827_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_987822CD523F9938(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityForbidCameraDither* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityForbidCameraDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER_METHOD_3_987822CD523F9938_OFFSET))(a1, a2);
		}
	};
}
