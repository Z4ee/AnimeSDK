#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED10DD1112564A47_Enum_3_9CB7D892D9DEBC8E.h"
#include "unitysdk/System/Object.h"

class Class_1_1FE4BD08C7A677AB;
class Class_1_83BD5CF9ABDF3EC0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_621388AFA68232D2_METHOD_1_09FC6AEEDDFBA3C5_OFFSET UNITYSDK_OFFSET(0x1B860D40)
#define CLASS_1_621388AFA68232D2_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x1B861000)
#define CLASS_1_621388AFA68232D2_METHOD_1_894B90CC57D8659C_OFFSET UNITYSDK_OFFSET(0x1B860A50)
#define CLASS_1_621388AFA68232D2_METHOD_1_96E3159279ADB646_OFFSET UNITYSDK_OFFSET(0x1B860760)
#define CLASS_1_621388AFA68232D2_METHOD_1_9CC14AB056DFABFC_OFFSET UNITYSDK_OFFSET(0x1B860FC0)
#define CLASS_1_621388AFA68232D2_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x1B860890)
#define CLASS_1_621388AFA68232D2_METHOD_1_CEFEFE0F3C802E23_OFFSET UNITYSDK_OFFSET(0x1B861150)
#define CLASS_1_621388AFA68232D2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B860750)
#define CLASS_1_621388AFA68232D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8606A0)

inline static constexpr unsigned int Class_1_621388AFA68232D2_TypeDefinitionIndex = 8142;

class Class_1_621388AFA68232D2 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_621388AFA68232D2_TypeDefinitionIndex)->GetStaticField(0x3870);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1FE4BD08C7A677AB*>* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_621388AFA68232D2__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_621388AFA68232D2__CCTOR_OFFSET))();
	}

	::System::Void Method_1_96E3159279ADB646(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_621388AFA68232D2_METHOD_1_96E3159279ADB646_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_621388AFA68232D2_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_1_894B90CC57D8659C(::Class_1_83BD5CF9ABDF3EC0* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83BD5CF9ABDF3EC0*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_621388AFA68232D2_METHOD_1_894B90CC57D8659C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_09FC6AEEDDFBA3C5(::Class_1_83BD5CF9ABDF3EC0* a1, ::Class_1_1FE4BD08C7A677AB* a2, ::Class_1_ED10DD1112564A47_Enum_3_9CB7D892D9DEBC8E a3, ::System::Boolean a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83BD5CF9ABDF3EC0*, ::Class_1_1FE4BD08C7A677AB*, ::Class_1_ED10DD1112564A47_Enum_3_9CB7D892D9DEBC8E, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_621388AFA68232D2_METHOD_1_09FC6AEEDDFBA3C5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1FE4BD08C7A677AB*>* Method_1_9CC14AB056DFABFC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1FE4BD08C7A677AB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_621388AFA68232D2_METHOD_1_9CC14AB056DFABFC_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_621388AFA68232D2_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::Class_1_83BD5CF9ABDF3EC0* Method_1_CEFEFE0F3C802E23(::System::String* a1)
	{
		return ((::Class_1_83BD5CF9ABDF3EC0*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_621388AFA68232D2_METHOD_1_CEFEFE0F3C802E23_OFFSET))(this, a1);
	}
};
