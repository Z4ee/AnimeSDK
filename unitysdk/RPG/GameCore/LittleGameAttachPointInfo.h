#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTINFO_METHOD_2_454B56300E0B887E_OFFSET UNITYSDK_OFFSET(0x1BCBDED0)
#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCBE130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAttachPointInfo_TypeDefinitionIndex = 18120;

	class LittleGameAttachPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsDynamic; // 0x18
		::RPG::MVector3 Position; // 0x1C
		::RPG::MVector3 Rotation; // 0x28
		::RPG::MVector3 Scale; // 0x34
		::System::String* BindPath; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_454B56300E0B887E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAttachPointInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAttachPointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTINFO_METHOD_2_454B56300E0B887E_OFFSET))(a1, a2);
		}
	};
}
