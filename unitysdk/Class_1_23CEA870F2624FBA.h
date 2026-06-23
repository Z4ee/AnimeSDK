#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AICompareType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_23CEA870F2624FBA_METHOD_1_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x150B8CF0)
#define CLASS_1_23CEA870F2624FBA_METHOD_1_7BB138D8A5E05910_OFFSET UNITYSDK_OFFSET(0x150B8E10)
#define CLASS_1_23CEA870F2624FBA_METHOD_1_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x150B8BF0)
#define CLASS_1_23CEA870F2624FBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x150B8BA0)
#define CLASS_1_23CEA870F2624FBA__CTOR_OFFSET UNITYSDK_OFFSET(0x150B8B90)

inline static constexpr unsigned int Class_1_23CEA870F2624FBA_TypeDefinitionIndex = 51568;

class Class_1_23CEA870F2624FBA : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23CEA870F2624FBA_TypeDefinitionIndex)->GetStaticField(0x32C80);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23CEA870F2624FBA_TypeDefinitionIndex)->GetStaticField(0x32C88);
	}
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23CEA870F2624FBA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23CEA870F2624FBA__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_23CEA870F2624FBA_METHOD_1_EADDF1782C977BCA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_23CEA870F2624FBA_METHOD_1_41EC8E0AD6EE8093_OFFSET))();
	}

	static ::System::Boolean Method_1_7BB138D8A5E05910(::MoleMole::AICompareType a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::MoleMole::AICompareType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_23CEA870F2624FBA_METHOD_1_7BB138D8A5E05910_OFFSET))(a1, a2, a3);
	}
};
