#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19.h"
#include "unitysdk/Struct_2_BF35D09998D831A7.h"
#include "unitysdk/System/Object.h"

class Class_1_6A4548AFE753106B;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }

#define CLASS_1_F4CD5BFD502895E4_CLEAR_OFFSET UNITYSDK_OFFSET(0x1677C9E0)
#define CLASS_1_F4CD5BFD502895E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1677CA60)

inline static constexpr unsigned int Class_1_F4CD5BFD502895E4_TypeDefinitionIndex = 33665;

class Class_1_F4CD5BFD502895E4 : public ::System::Object
{
public:
	::Class_1_6A4548AFE753106B* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::String*, ::Struct_2_BF35D09998D831A7>* Field_1_2; // 0x18
	::Struct_2_B76C9DBDAECC6C19 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4CD5BFD502895E4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4CD5BFD502895E4_CLEAR_OFFSET))(this);
	}
};
