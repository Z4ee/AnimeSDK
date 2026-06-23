#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_35D50070BC469EAB;
class Class_1_BFC2F9D5895EB2FB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_318BBD099B01ACC9_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1794DE60)
#define CLASS_3_318BBD099B01ACC9_METHOD_3_61FC82E5F934267B_OFFSET UNITYSDK_OFFSET(0x1794DFD0)
#define CLASS_3_318BBD099B01ACC9_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1794E190)
#define CLASS_3_318BBD099B01ACC9_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x1794E090)
#define CLASS_3_318BBD099B01ACC9_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1794E220)
#define CLASS_3_318BBD099B01ACC9_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1794DDD0)
#define CLASS_3_318BBD099B01ACC9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1794DEB0)
#define CLASS_3_318BBD099B01ACC9__CTOR_OFFSET UNITYSDK_OFFSET(0x1794DF40)

inline static constexpr unsigned int Class_3_318BBD099B01ACC9_TypeDefinitionIndex = 75707;

class Class_3_318BBD099B01ACC9 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_318BBD099B01ACC9_TypeDefinitionIndex)->GetStaticField(0x12840);
	}
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	// static const ::System::Int32 Field_3_11 = 0x3E; // 0x0
	::Class_1_BFC2F9D5895EB2FB* Field_3_9; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_3_8; // 0x50
	::System::Action_2<::System::String*, ::System::Object*>* Field_3_7; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_3_1; // 0x60
	::Class_1_35D50070BC469EAB* Field_3_0; // 0x68

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

	static ::Class_3_318BBD099B01ACC9* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_318BBD099B01ACC9*(*)())((::PBYTE)hIl2Cpp + CLASS_3_318BBD099B01ACC9_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_318BBD099B01ACC9_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_318BBD099B01ACC9_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}
};
