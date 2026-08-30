#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANMEMBERINFO_METHOD_2_875B81C417367745_OFFSET UNITYSDK_OFFSET(0x1D1E5FA0)
#define RPG_GAMECORE_LEVELPEDESTRIANMEMBERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E60F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianMemberInfo_TypeDefinitionIndex = 17088;

	class LevelPedestrianMemberInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Identity; // 0x10
		::System::String* FeatureID; // 0x18
		::System::Single Weight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANMEMBERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_875B81C417367745(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianMemberInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianMemberInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANMEMBERINFO_METHOD_2_875B81C417367745_OFFSET))(a1, a2);
		}
	};
}
