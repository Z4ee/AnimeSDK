#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BC378AF92CB85E1D;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_9C0CED428C78D522___C_METHOD_1_ABFFB355FF266AF8_OFFSET UNITYSDK_OFFSET(0x19210B00)
#define CLASS_3_9C0CED428C78D522___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19210AB0)
#define CLASS_3_9C0CED428C78D522___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19210AF0)

inline static constexpr unsigned int Class_3_9C0CED428C78D522___c_TypeDefinitionIndex = 77909;

class Class_3_9C0CED428C78D522___c : public ::System::Object
{
public:
	static ::Class_3_9C0CED428C78D522___c** StaticGet___9()
	{
		return (::Class_3_9C0CED428C78D522___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9C0CED428C78D522___c_TypeDefinitionIndex)->GetStaticField(0x4A5A0);
	}
	static ::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_BC378AF92CB85E1D*>** StaticGet___9__12_0()
	{
		return (::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_BC378AF92CB85E1D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9C0CED428C78D522___c_TypeDefinitionIndex)->GetStaticField(0x4A5A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9C0CED428C78D522___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C0CED428C78D522___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ABFFB355FF266AF8(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_BC378AF92CB85E1D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_BC378AF92CB85E1D*))((::PBYTE)hIl2Cpp + CLASS_3_9C0CED428C78D522___C_METHOD_1_ABFFB355FF266AF8_OFFSET))(this, a1, a2);
	}
};
