#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_317D8F9BFAB0AD1B;
class Class_1_AAF26683E4B89304;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace Proto { class PlayerAssistInfo; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define CLASS_1_BEC0C3FCCFF0E666_METHOD_1_C127AAE96B7E8BBD_OFFSET UNITYSDK_OFFSET(0xB502C30)
#define CLASS_1_BEC0C3FCCFF0E666_METHOD_1_C897BCBEAAC377E8_OFFSET UNITYSDK_OFFSET(0xB502B20)
#define CLASS_1_BEC0C3FCCFF0E666__CTOR_OFFSET UNITYSDK_OFFSET(0xB502A70)

inline static constexpr unsigned int Class_1_BEC0C3FCCFF0E666_TypeDefinitionIndex = 58688;

class Class_1_BEC0C3FCCFF0E666 : public ::System::Object
{
public:
	::Class_1_AAF26683E4B89304* Field_1_0; // 0x10
	::Class_1_317D8F9BFAB0AD1B* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_317D8F9BFAB0AD1B* a1, ::Class_1_AAF26683E4B89304* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_317D8F9BFAB0AD1B*, ::Class_1_AAF26683E4B89304*))((::PBYTE)hIl2Cpp + CLASS_1_BEC0C3FCCFF0E666__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_C897BCBEAAC377E8(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2, ::System::String* a3, ::Proto::DisplayAvatarDetailInfo* a4, ::Class_1_075C34D03AFA1215_7* a5)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32, ::System::String*, ::Proto::DisplayAvatarDetailInfo*, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_BEC0C3FCCFF0E666_METHOD_1_C897BCBEAAC377E8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_C127AAE96B7E8BBD(::Proto::PlayerAssistInfo* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_BEC0C3FCCFF0E666_METHOD_1_C127AAE96B7E8BBD_OFFSET))(this, a1);
	}
};
