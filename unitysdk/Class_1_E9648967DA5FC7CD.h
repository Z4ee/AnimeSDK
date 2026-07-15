#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_0B306B15445B2FC1;
class Class_1_7ED05899B4F4C7F2;
class Class_1_ED80D3EC77F13F93;
class Class_1_F9FBCC956DFCF137_43;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_E9648967DA5FC7CD_METHOD_1_2AB3216FA3353E99_OFFSET UNITYSDK_OFFSET(0x1585D6C0)
#define CLASS_1_E9648967DA5FC7CD_METHOD_1_74172C46387B6A78_OFFSET UNITYSDK_OFFSET(0x1585D390)
#define CLASS_1_E9648967DA5FC7CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1585D2B0)

inline static constexpr unsigned int Class_1_E9648967DA5FC7CD_TypeDefinitionIndex = 76258;

class Class_1_E9648967DA5FC7CD : public ::System::Object
{
public:
	::Class_1_ED80D3EC77F13F93* Field_1_0; // 0x10
	::Class_1_7ED05899B4F4C7F2* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_F9FBCC956DFCF137_43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_43*))((::PBYTE)hIl2Cpp + CLASS_1_E9648967DA5FC7CD__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_74172C46387B6A78(::Class_1_0B306B15445B2FC1* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Class_1_0B306B15445B2FC1*))((::PBYTE)hIl2Cpp + CLASS_1_E9648967DA5FC7CD_METHOD_1_74172C46387B6A78_OFFSET))(this, a1);
	}

	static ::Struct_2_AAD4F4215611A944 Method_1_2AB3216FA3353E99(::Class_1_0B306B15445B2FC1* a1)
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::Class_1_0B306B15445B2FC1*))((::PBYTE)hIl2Cpp + CLASS_1_E9648967DA5FC7CD_METHOD_1_2AB3216FA3353E99_OFFSET))(a1);
	}
};
