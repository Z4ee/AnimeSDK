#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEXAMCOMMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D593340)
#define RPG_GAMECORE_SWORDTRAININGEXAMCOMMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D593500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingExamCommentRow_TypeDefinitionIndex = 12366;

	class SwordTrainingExamCommentRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::System::UInt32 CommentID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMCOMMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingExamCommentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingExamCommentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMCOMMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
