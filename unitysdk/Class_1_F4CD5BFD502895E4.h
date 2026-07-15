#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19.h"
#include "unitysdk/Struct_2_CFA12135DA0D972E.h"
#include "unitysdk/System/Object.h"

class Class_1_58F7C510A0EB2163;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }

#define CLASS_1_F4CD5BFD502895E4_CLEAR_OFFSET UNITYSDK_OFFSET(0x1757EA40)
#define CLASS_1_F4CD5BFD502895E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1757EAC0)

inline static constexpr unsigned int Class_1_F4CD5BFD502895E4_TypeDefinitionIndex = 41054;

class Class_1_F4CD5BFD502895E4 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::String*, ::Struct_2_CFA12135DA0D972E>* Field_1_0; // 0x10
	::Class_1_58F7C510A0EB2163* Field_1_1; // 0x18
	::Struct_2_B76C9DBDAECC6C19 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4CD5BFD502895E4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4CD5BFD502895E4_CLEAR_OFFSET))(this);
	}
};
