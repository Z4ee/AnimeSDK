#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1883C2D0)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1883C990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceGameplayNPCConfigRow_TypeDefinitionIndex = 12375;

	class ConvinceGameplayNPCConfigRow : public ::System::Object
	{
	public:
		::System::String* NPCIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* NPCDescriptionID; // 0x18
		::RPG::Client::TextID NPCNameID; // 0x20
		::System::UInt32 ID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
