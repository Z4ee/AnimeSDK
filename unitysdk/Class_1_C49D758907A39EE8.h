#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_940BE0490D777CB2;
namespace System { class String; }

#define CLASS_1_C49D758907A39EE8_GET_CMTLIST_OFFSET UNITYSDK_OFFSET(0x16643850)
#define CLASS_1_C49D758907A39EE8_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x16643830)
#define CLASS_1_C49D758907A39EE8_GET_ID_OFFSET UNITYSDK_OFFSET(0x16643810)
#define CLASS_1_C49D758907A39EE8_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x16643820)
#define CLASS_1_C49D758907A39EE8_GET_LIKECOUNT_OFFSET UNITYSDK_OFFSET(0x16643840)
#define CLASS_1_C49D758907A39EE8__CTOR_OFFSET UNITYSDK_OFFSET(0x16643860)

inline static constexpr unsigned int Class_1_C49D758907A39EE8_TypeDefinitionIndex = 80142;

class Class_1_C49D758907A39EE8 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* _CmtList_k__BackingField; // 0x10
	::System::String* _ImagePath_k__BackingField; // 0x18
	::RPG::Client::TextID _Content_k__BackingField; // 0x20
	::System::Single _LikeCount_k__BackingField; // 0x30
	::System::UInt32 _ID_k__BackingField; // 0x34

	::System::Void _ctor(::Class_1_940BE0490D777CB2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_940BE0490D777CB2*))((::PBYTE)hIl2Cpp + CLASS_1_C49D758907A39EE8__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C49D758907A39EE8_GET_ID_OFFSET))(this);
	}

	::System::String* get_ImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C49D758907A39EE8_GET_IMAGEPATH_OFFSET))(this);
	}

	::RPG::Client::TextID get_Content()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C49D758907A39EE8_GET_CONTENT_OFFSET))(this);
	}

	::System::Single get_LikeCount()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C49D758907A39EE8_GET_LIKECOUNT_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* get_CmtList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C49D758907A39EE8_GET_CMTLIST_OFFSET))(this);
	}
};
