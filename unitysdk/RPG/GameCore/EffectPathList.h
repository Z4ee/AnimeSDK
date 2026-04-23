#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EFFECTPATHLIST_METHOD_2_38B1CED65DE889BF_OFFSET UNITYSDK_OFFSET(0x18897370)
#define RPG_GAMECORE_EFFECTPATHLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18897470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectPathList_TypeDefinitionIndex = 15470;

	class EffectPathList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* PathList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTPATHLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_38B1CED65DE889BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectPathList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectPathList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTPATHLIST_METHOD_2_38B1CED65DE889BF_OFFSET))(a1, a2);
		}
	};
}
