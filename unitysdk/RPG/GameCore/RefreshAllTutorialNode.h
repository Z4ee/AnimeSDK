#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REFRESHALLTUTORIALNODE_METHOD_3_2ED74DD05038CA6B_OFFSET UNITYSDK_OFFSET(0x18C947F0)
#define RPG_GAMECORE_REFRESHALLTUTORIALNODE_METHOD_3_DC86820D1181BBDF_OFFSET UNITYSDK_OFFSET(0x18C94900)
#define RPG_GAMECORE_REFRESHALLTUTORIALNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C948D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshAllTutorialNode_TypeDefinitionIndex = 23345;

	class RefreshAllTutorialNode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHALLTUTORIALNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2ED74DD05038CA6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshAllTutorialNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshAllTutorialNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHALLTUTORIALNODE_METHOD_3_2ED74DD05038CA6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC86820D1181BBDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshAllTutorialNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshAllTutorialNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHALLTUTORIALNODE_METHOD_3_DC86820D1181BBDF_OFFSET))(a1, a2);
		}
	};
}
