#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PROPSETFOLLOWROTATEGAMEOBJECT_METHOD_2_03C27C14DD3402DE_OFFSET UNITYSDK_OFFSET(0x1D182110)
#define RPG_GAMECORE_PROPSETFOLLOWROTATEGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D182240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetFollowRotateGameObject_TypeDefinitionIndex = 21825;

	class PropSetFollowRotateGameObject : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RelativePath; // 0x10
		::RPG::MVector3 RotateDirection; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETFOLLOWROTATEGAMEOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_03C27C14DD3402DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetFollowRotateGameObject*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetFollowRotateGameObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETFOLLOWROTATEGAMEOBJECT_METHOD_2_03C27C14DD3402DE_OFFSET))(a1, a2);
		}
	};
}
