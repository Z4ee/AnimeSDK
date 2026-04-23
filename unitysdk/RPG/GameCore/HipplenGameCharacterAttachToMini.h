#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_99372F6CA5F8FB04_OFFSET UNITYSDK_OFFSET(0x18A016F0)
#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_E6A98C616F9F56A3_OFFSET UNITYSDK_OFFSET(0x18A01670)
#define RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI__CTOR_OFFSET UNITYSDK_OFFSET(0x18A016C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameCharacterAttachToMini_TypeDefinitionIndex = 20298;

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

		static ::System::Void Method_3_E6A98C616F9F56A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameCharacterAttachToMini*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameCharacterAttachToMini*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_E6A98C616F9F56A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99372F6CA5F8FB04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameCharacterAttachToMini* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameCharacterAttachToMini*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMECHARACTERATTACHTOMINI_METHOD_3_99372F6CA5F8FB04_OFFSET))(a1, a2);
		}
	};
}
