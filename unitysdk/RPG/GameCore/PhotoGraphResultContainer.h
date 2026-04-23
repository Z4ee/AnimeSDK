#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphResultContainerType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHRESULTCONTAINER_METHOD_2_48EBC367B5D02425_OFFSET UNITYSDK_OFFSET(0x18BF7120)
#define RPG_GAMECORE_PHOTOGRAPHRESULTCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF7310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphResultContainer_TypeDefinitionIndex = 20465;

	class PhotoGraphResultContainer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PhotoGraphResultContainerType ContainerType; // 0x10
		::RPG::GameCore::PhotoGraphAimContainerLogicOperator LogicOperator; // 0x14
		::Il2CppArray<::RPG::GameCore::PhotoGraphResultContainer*>* ChildResults; // 0x18
		::System::String* ContainerFlagName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHRESULTCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_48EBC367B5D02425(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphResultContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphResultContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHRESULTCONTAINER_METHOD_2_48EBC367B5D02425_OFFSET))(a1, a2);
		}
	};
}
