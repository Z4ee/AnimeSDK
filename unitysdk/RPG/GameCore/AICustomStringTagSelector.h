#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR_METHOD_3_17CEE27A01772414_OFFSET UNITYSDK_OFFSET(0x1CD64E20)
#define RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR_METHOD_3_89E1FE26047591DB_OFFSET UNITYSDK_OFFSET(0x1CD64E60)
#define RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD64E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AICustomStringTagSelector_TypeDefinitionIndex = 15424;

	class AICustomStringTagSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::System::String* CustomStringTag; // 0x10
		::System::Boolean InverseResultFlag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_17CEE27A01772414(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AICustomStringTagSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AICustomStringTagSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR_METHOD_3_17CEE27A01772414_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89E1FE26047591DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AICustomStringTagSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AICustomStringTagSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR_METHOD_3_89E1FE26047591DB_OFFSET))(a1, a2);
		}
	};
}
