#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3897C88E8C59E725.h"

namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define CLASS_2_30D9D8DF37815BB1_METHOD_2_415ECB86E41D7B07_OFFSET UNITYSDK_OFFSET(0x11E260C0)
#define CLASS_2_30D9D8DF37815BB1_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x11E26190)
#define CLASS_2_30D9D8DF37815BB1__CTOR_OFFSET UNITYSDK_OFFSET(0x11E25E30)

inline static constexpr unsigned int Class_2_30D9D8DF37815BB1_TypeDefinitionIndex = 59969;

class Class_2_30D9D8DF37815BB1 : public ::Class_1_3897C88E8C59E725
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30D9D8DF37815BB1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_415ECB86E41D7B07(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_30D9D8DF37815BB1_METHOD_2_415ECB86E41D7B07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30D9D8DF37815BB1_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}
};
