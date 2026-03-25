#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRACKNAMELIST_METHOD_2_EC4F9E86676BC7A8_OFFSET UNITYSDK_OFFSET(0x178A37F0)
#define RPG_GAMECORE_TRACKNAMELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x178A38C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNameList_TypeDefinitionIndex = 15660;

	class TrackNameList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* TrackNames; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNAMELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EC4F9E86676BC7A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackNameList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackNameList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNAMELIST_METHOD_2_EC4F9E86676BC7A8_OFFSET))(a1, a2);
		}
	};
}
