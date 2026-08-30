#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B1050BB558D637BF__CTOR_OFFSET UNITYSDK_OFFSET(0xC7AB650)

inline static constexpr unsigned int Class_1_B1050BB558D637BF_TypeDefinitionIndex = 64846;

class Class_1_B1050BB558D637BF : public ::System::Object
{
public:
	::System::Int64 FavourCount; // 0x10
	::System::Int32 LikeCount; // 0x18
	::System::Boolean IsFavour; // 0x1C
	::System::Boolean IsLike; // 0x1D
	::System::Boolean IsNew; // 0x1E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1050BB558D637BF__CTOR_OFFSET))(this);
	}
};
