#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYAREAASSETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2B9C20)
#define RPG_GAMECORE_MONOPOLYAREAASSETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B9E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyAreaAssetConfigRow_TypeDefinitionIndex = 11964;

	class MonopolyAreaAssetConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AssetList; // 0x10
		::System::String* FigurePath; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYAREAASSETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyAreaAssetConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyAreaAssetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYAREAASSETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
