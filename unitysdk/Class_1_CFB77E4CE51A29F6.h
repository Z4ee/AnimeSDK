#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_89120A467F7A010D_1;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Sprite; }

#define CLASS_1_CFB77E4CE51A29F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1597EF20)

inline static constexpr unsigned int Class_1_CFB77E4CE51A29F6_TypeDefinitionIndex = 49209;

class Class_1_CFB77E4CE51A29F6 : public ::System::Object
{
public:
	::Class_1_89120A467F7A010D_1* Field_1_1; // 0x10
	::UnityEngine::Sprite* Field_1_0; // 0x18
	::System::Func_2<::System::Boolean, ::System::Boolean>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFB77E4CE51A29F6__CTOR_OFFSET))(this);
	}
};
