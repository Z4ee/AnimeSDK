#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERATLASFACEEYESHAPEGROUP_METHOD_2_58785B5A8BFEE495_OFFSET UNITYSDK_OFFSET(0x1B71C560)
#define RPG_GAMECORE_CHARACTERATLASFACEEYESHAPEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B71C620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAtlasFaceEyeShapeGroup_TypeDefinitionIndex = 16756;

	class CharacterAtlasFaceEyeShapeGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Int32>* IndexList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEYESHAPEGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_58785B5A8BFEE495(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterAtlasFaceEyeShapeGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterAtlasFaceEyeShapeGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEEYESHAPEGROUP_METHOD_2_58785B5A8BFEE495_OFFSET))(a1, a2);
		}
	};
}
