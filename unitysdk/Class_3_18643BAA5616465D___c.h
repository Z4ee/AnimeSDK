#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Container/SparseElementHandle_1.h"
#include "unitysdk/System/Object.h"

class Class_1_4BCD36557F46EA58;

#define CLASS_3_18643BAA5616465D___C_METHOD_1_F95607D2C37CBD6C_OFFSET UNITYSDK_OFFSET(0x1A55BC10)
#define CLASS_3_18643BAA5616465D___C_METHOD_1_FC27D76EFC8E2BBB_OFFSET UNITYSDK_OFFSET(0x1A55BB50)
#define CLASS_3_18643BAA5616465D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A55BB00)
#define CLASS_3_18643BAA5616465D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A55BB40)

inline static constexpr unsigned int Class_3_18643BAA5616465D___c_TypeDefinitionIndex = 44677;

class Class_3_18643BAA5616465D___c : public ::System::Object
{
public:
	static ::Class_3_18643BAA5616465D___c** StaticGet___9()
	{
		return (::Class_3_18643BAA5616465D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_18643BAA5616465D___c_TypeDefinitionIndex)->GetStaticField(0x4CEF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FC27D76EFC8E2BBB(::Class_1_4BCD36557F46EA58*& a1, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Class_1_4BCD36557F46EA58*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BCD36557F46EA58*&, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Class_1_4BCD36557F46EA58*>))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D___C_METHOD_1_FC27D76EFC8E2BBB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F95607D2C37CBD6C(::Class_1_4BCD36557F46EA58*& a1, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Class_1_4BCD36557F46EA58*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BCD36557F46EA58*&, ::Foundation::ViewObject::Container::SparseElementHandle_1<::Class_1_4BCD36557F46EA58*>))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D___C_METHOD_1_F95607D2C37CBD6C_OFFSET))(this, a1, a2);
	}
};
