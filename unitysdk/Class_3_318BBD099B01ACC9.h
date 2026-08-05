#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_663AFC2250EC21C9;
class Class_1_816D4E2238E8C24A;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_318BBD099B01ACC9_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x19948550)
#define CLASS_3_318BBD099B01ACC9_METHOD_3_61FC82E5F934267B_OFFSET UNITYSDK_OFFSET(0x199486C0)
#define CLASS_3_318BBD099B01ACC9_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x19948780)
#define CLASS_3_318BBD099B01ACC9_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x19948810)
#define CLASS_3_318BBD099B01ACC9_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19948910)
#define CLASS_3_318BBD099B01ACC9_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x199484C0)
#define CLASS_3_318BBD099B01ACC9__CCTOR_OFFSET UNITYSDK_OFFSET(0x199485A0)
#define CLASS_3_318BBD099B01ACC9__CTOR_OFFSET UNITYSDK_OFFSET(0x19948630)

inline static constexpr unsigned int Class_3_318BBD099B01ACC9_TypeDefinitionIndex = 66874;

class Class_3_318BBD099B01ACC9 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_318BBD099B01ACC9_TypeDefinitionIndex)->GetStaticField(0x11CE0);
	}
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_7; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::Int32 Field_3_8 = 0x3E; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_3_2; // 0x48
	::Class_1_663AFC2250EC21C9* Field_3_10; // 0x50
	::Class_1_816D4E2238E8C24A* Field_3_3; // 0x58
	::System::Action_2<::System::String*, ::System::Object*>* Field_3_4; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_3_11; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_318BBD099B01ACC9__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_318BBD099B01ACC9__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_318BBD099B01ACC9_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_318BBD099B01ACC9_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_61FC82E5F934267B(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_318BBD099B01ACC9_METHOD_3_61FC82E5F934267B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_318BBD099B01ACC9_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_318BBD099B01ACC9* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_318BBD099B01ACC9*(*)())((::PBYTE)hIl2Cpp + CLASS_3_318BBD099B01ACC9_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_318BBD099B01ACC9_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}
};
