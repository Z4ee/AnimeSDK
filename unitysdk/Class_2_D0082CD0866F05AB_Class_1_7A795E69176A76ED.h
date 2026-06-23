#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_993FB8DDEDFEC00B;
namespace System::Text { class StringBuilder; }

#define CLASS_2_D0082CD0866F05AB_CLASS_1_7A795E69176A76ED_METHOD_1_BD95EA273160FD4B_OFFSET UNITYSDK_OFFSET(0xF979C10)
#define CLASS_2_D0082CD0866F05AB_CLASS_1_7A795E69176A76ED__CTOR_OFFSET UNITYSDK_OFFSET(0xF979BF0)

inline static constexpr unsigned int Class_2_D0082CD0866F05AB_Class_1_7A795E69176A76ED_TypeDefinitionIndex = 48063;

class Class_2_D0082CD0866F05AB_Class_1_7A795E69176A76ED : public ::System::Object
{
public:
	::System::Text::StringBuilder* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0082CD0866F05AB_CLASS_1_7A795E69176A76ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BD95EA273160FD4B(::Class_3_993FB8DDEDFEC00B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_993FB8DDEDFEC00B*))((::PBYTE)hIl2Cpp + CLASS_2_D0082CD0866F05AB_CLASS_1_7A795E69176A76ED_METHOD_1_BD95EA273160FD4B_OFFSET))(this, a1);
	}
};
