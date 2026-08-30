#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FiveDimRenderingItem;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D38A5848A793D38F_CLASS_1_132A9C759E078134__CTOR_OFFSET UNITYSDK_OFFSET(0x153C4A10)

inline static constexpr unsigned int Class_2_D38A5848A793D38F_Class_1_132A9C759E078134_TypeDefinitionIndex = 76251;

class Class_2_D38A5848A793D38F_Class_1_132A9C759E078134 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* PGHEGHLPIDH; // 0x10
	::System::Boolean ICEEGGIDIJA; // 0x18
	::System::Single AIDNPNEBLII; // 0x1C
	::System::UInt32 GAEMLFENHAG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38A5848A793D38F_CLASS_1_132A9C759E078134__CTOR_OFFSET))(this);
	}
};
