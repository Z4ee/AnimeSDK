#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMMENTCONTAINER_METHOD_3_4B3D723D1C5B0420_OFFSET UNITYSDK_OFFSET(0x18826660)
#define RPG_GAMECORE_COMMENTCONTAINER_METHOD_3_9AA95889A6E8251E_OFFSET UNITYSDK_OFFSET(0x18826720)
#define RPG_GAMECORE_COMMENTCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x188266E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommentContainer_TypeDefinitionIndex = 21134;

	class CommentContainer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Width; // 0x18
		::System::Int32 Height; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMENTCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B3D723D1C5B0420(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommentContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommentContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMENTCONTAINER_METHOD_3_4B3D723D1C5B0420_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9AA95889A6E8251E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommentContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommentContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMENTCONTAINER_METHOD_3_9AA95889A6E8251E_OFFSET))(a1, a2);
		}
	};
}
