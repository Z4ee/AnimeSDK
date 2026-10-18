#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_3E8412A97A3D0DF7_1_GET_COMMENTNPCHEADPATH_OFFSET UNITYSDK_OFFSET(0x1568B740)
#define CLASS_1_3E8412A97A3D0DF7_1_GET_COMMENTNPCNAME_OFFSET UNITYSDK_OFFSET(0x1568B700)
#define CLASS_1_3E8412A97A3D0DF7_1_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1568B720)
#define CLASS_1_3E8412A97A3D0DF7_1_SET_COMMENTNPCHEADPATH_OFFSET UNITYSDK_OFFSET(0x1568B750)
#define CLASS_1_3E8412A97A3D0DF7_1_SET_COMMENTNPCNAME_OFFSET UNITYSDK_OFFSET(0x1568B710)
#define CLASS_1_3E8412A97A3D0DF7_1_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1568B730)
#define CLASS_1_3E8412A97A3D0DF7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1568B760)

inline static constexpr unsigned int Class_1_3E8412A97A3D0DF7_1_TypeDefinitionIndex = 79733;

class Class_1_3E8412A97A3D0DF7_1 : public ::System::Object
{
public:
	::System::String* _CommentNpcHeadPath_k__BackingField; // 0x10
	::RPG::Client::TextID _Comment_k__BackingField; // 0x18
	::RPG::Client::TextID _CommentNpcName_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_1__CTOR_OFFSET))(this);
	}

	::RPG::Client::TextID get_CommentNpcName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_1_GET_COMMENTNPCNAME_OFFSET))(this);
	}

	::System::Void set_CommentNpcName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_1_SET_COMMENTNPCNAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Comment()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_1_GET_COMMENT_OFFSET))(this);
	}

	::System::Void set_Comment(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_1_SET_COMMENT_OFFSET))(this, a1);
	}

	::System::String* get_CommentNpcHeadPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_1_GET_COMMENTNPCHEADPATH_OFFSET))(this);
	}

	::System::Void set_CommentNpcHeadPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E8412A97A3D0DF7_1_SET_COMMENTNPCHEADPATH_OFFSET))(this, a1);
	}
};
