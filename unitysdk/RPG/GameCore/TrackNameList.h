#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRACKNAMELIST_METHOD_2_2DFC151F2E311025_OFFSET UNITYSDK_OFFSET(0x1D5D68D0)
#define RPG_GAMECORE_TRACKNAMELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D6990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNameList_TypeDefinitionIndex = 16901;

	class TrackNameList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* TrackNames; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNAMELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2DFC151F2E311025(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackNameList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackNameList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNAMELIST_METHOD_2_2DFC151F2E311025_OFFSET))(a1, a2);
		}
	};
}
