#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_213837C602759F36_OFFSET UNITYSDK_OFFSET(0x1D73DA60)
#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_EBACCEB3BF4065C3_OFFSET UNITYSDK_OFFSET(0x1D73DA20)
#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D73DA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameCharacterAttachToMini_TypeDefinitionIndex = 21318;

	class HipplenGameCharacterAttachToMini : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Boolean Deattach; // 0x20
		::System::String* AnchorName; // 0x28
		::RPG::MVector3 Offset; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EBACCEB3BF4065C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameCharacterAttachToMini*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameCharacterAttachToMini*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_EBACCEB3BF4065C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_213837C602759F36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameCharacterAttachToMini* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameCharacterAttachToMini*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_213837C602759F36_OFFSET))(a1, a2);
		}
	};
}
