#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BC34280)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC34960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceGameplayNPCConfigRow_TypeDefinitionIndex = 12600;

	class ConvinceGameplayNPCConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NPCDescriptionID; // 0x10
		::System::String* NPCIconPath; // 0x18
		::RPG::Client::TextID NPCNameID; // 0x20
		::System::UInt32 ID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
