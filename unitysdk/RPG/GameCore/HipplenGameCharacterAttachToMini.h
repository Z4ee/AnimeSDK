#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_140540ACF5B57E59_OFFSET UNITYSDK_OFFSET(0x1B686530)
#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_99372F6CA5F8FB04_OFFSET UNITYSDK_OFFSET(0x1B686570)
#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B686560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameCharacterAttachToMini_TypeDefinitionIndex = 20520;

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

		static ::System::Void Method_3_140540ACF5B57E59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameCharacterAttachToMini*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameCharacterAttachToMini*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_140540ACF5B57E59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99372F6CA5F8FB04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameCharacterAttachToMini* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameCharacterAttachToMini*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_99372F6CA5F8FB04_OFFSET))(a1, a2);
		}
	};
}
