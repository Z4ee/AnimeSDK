#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_08B5ACC5F83BB932_METHOD_1_F6B48A42970B70C6_OFFSET UNITYSDK_OFFSET(0x16EBA130)
#define CLASS_1_08B5ACC5F83BB932__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBA1F0)

inline static constexpr unsigned int Class_1_08B5ACC5F83BB932_TypeDefinitionIndex = 53778;

class Class_1_08B5ACC5F83BB932 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::RPG::GameCore::FixPoint Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08B5ACC5F83BB932__CTOR_OFFSET))(this);
	}

	::Class_1_08B5ACC5F83BB932* Method_1_F6B48A42970B70C6()
	{
		return ((::Class_1_08B5ACC5F83BB932*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08B5ACC5F83BB932_METHOD_1_F6B48A42970B70C6_OFFSET))(this);
	}
};
