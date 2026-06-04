#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1967B950)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1967C030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceGameplayNPCConfigRow_TypeDefinitionIndex = 12463;

	class ConvinceGameplayNPCConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NPCDescriptionID; // 0x10
		::System::String* NPCIconPath; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID NPCNameID; // 0x28

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
