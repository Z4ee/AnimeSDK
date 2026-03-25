#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropSetFollowRotateGameObject; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETFOLLOWROTATE_METHOD_3_28612AD54F657DD7_OFFSET UNITYSDK_OFFSET(0x17524A80)
#define RPG_GAMECORE_PROPSETFOLLOWROTATE_METHOD_3_67FA61460DB4D7D5_OFFSET UNITYSDK_OFFSET(0x17524B00)
#define RPG_GAMECORE_PROPSETFOLLOWROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17524AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetFollowRotate_TypeDefinitionIndex = 20256;

	class PropSetFollowRotate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupPropID; // 0x1C
		::System::String* BlockAlias; // 0x20
		::System::String* PrefabAlias; // 0x28
		::RPG::MVector3 RotateDirection; // 0x30
		::System::Boolean RotateChild; // 0x3C
		::Il2CppArray<::RPG::GameCore::PropSetFollowRotateGameObject*>* RelativeChildList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETFOLLOWROTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_28612AD54F657DD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetFollowRotate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetFollowRotate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETFOLLOWROTATE_METHOD_3_28612AD54F657DD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67FA61460DB4D7D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetFollowRotate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetFollowRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETFOLLOWROTATE_METHOD_3_67FA61460DB4D7D5_OFFSET))(a1, a2);
		}
	};
}
