#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B1050BB558D637BF__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0ADF0)

inline static constexpr unsigned int Class_1_B1050BB558D637BF_TypeDefinitionIndex = 64846;

class Class_1_B1050BB558D637BF : public ::System::Object
{
public:
	::System::Boolean IsFavour; // 0x10
	::System::Boolean IsNew; // 0x11
	::System::Boolean IsLike; // 0x12
	::System::Int32 LikeCount; // 0x14
	::System::Int64 FavourCount; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1050BB558D637BF__CTOR_OFFSET))(this);
	}
};
