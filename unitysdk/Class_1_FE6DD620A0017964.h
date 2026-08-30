#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FE6DD620A0017964__CTOR_OFFSET UNITYSDK_OFFSET(0xC407470)

inline static constexpr unsigned int Class_1_FE6DD620A0017964_TypeDefinitionIndex = 73187;

class Class_1_FE6DD620A0017964 : public ::System::Object
{
public:
	::RPG::Client::TextID AABNPBGMOFN; // 0x10
	::RPG::Client::UIFloatingTextType GMPGDEINODK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE6DD620A0017964__CTOR_OFFSET))(this);
	}
};
