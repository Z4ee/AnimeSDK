#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_DD13EF76A290F8EF;
class Class_2_F5857388D5A8AC94_Class_1_59DEDD8926B93654;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F5857388D5A8AC94_CLASS_1_4214DD62BA272B60_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x1792BDA0)
#define CLASS_2_F5857388D5A8AC94_CLASS_1_4214DD62BA272B60_METHOD_1_E6E07151E4BDC5EF_OFFSET UNITYSDK_OFFSET(0x1792B8C0)
#define CLASS_2_F5857388D5A8AC94_CLASS_1_4214DD62BA272B60__CTOR_OFFSET UNITYSDK_OFFSET(0x1792B8B0)

inline static constexpr unsigned int Class_2_F5857388D5A8AC94_Class_1_4214DD62BA272B60_TypeDefinitionIndex = 56840;

class Class_2_F5857388D5A8AC94_Class_1_4214DD62BA272B60 : public ::System::Object
{
public:
	::Class_2_F5857388D5A8AC94_Class_1_59DEDD8926B93654* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_1; // 0x18
	::Class_1_DD13EF76A290F8EF* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_CLASS_1_4214DD62BA272B60__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E6E07151E4BDC5EF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_CLASS_1_4214DD62BA272B60_METHOD_1_E6E07151E4BDC5EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_CLASS_1_4214DD62BA272B60_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
