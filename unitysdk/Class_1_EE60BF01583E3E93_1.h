#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"
#include "unitysdk/System/Object.h"

class Class_1_BAF6F107F0961F34;

#define CLASS_1_EE60BF01583E3E93_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C133FC0)
#define CLASS_1_EE60BF01583E3E93_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C134190)

inline static constexpr unsigned int Class_1_EE60BF01583E3E93_1_TypeDefinitionIndex = 41802;

class Class_1_EE60BF01583E3E93_1 : public ::System::Object
{
public:
	::Class_1_BAF6F107F0961F34* FKIBGPJNCIJ; // 0x10
	::Struct_2_F31A7EC67A3AEEF7 NNANJMDMAOC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60BF01583E3E93_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60BF01583E3E93_1_CLEAR_OFFSET))(this);
	}
};
