#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DF3D0280BBD100FF.h"

class Class_1_621388AFA68232D2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_0326872D95979B5D_METHOD_2_0BF34D5A5595F8DF_OFFSET UNITYSDK_OFFSET(0x1DE30880)
#define CLASS_2_0326872D95979B5D_METHOD_2_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0x1DE30500)
#define CLASS_2_0326872D95979B5D_METHOD_2_4828BF2E16FA16E2_OFFSET UNITYSDK_OFFSET(0x1DE31170)
#define CLASS_2_0326872D95979B5D_METHOD_2_69991F529EC8B8E0_OFFSET UNITYSDK_OFFSET(0x1DE30900)
#define CLASS_2_0326872D95979B5D_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x1DE30FB0)
#define CLASS_2_0326872D95979B5D_METHOD_2_DB75C94EF3986257_OFFSET UNITYSDK_OFFSET(0x1DE30B90)
#define CLASS_2_0326872D95979B5D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE30460)
#define CLASS_2_0326872D95979B5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE303D0)

inline static constexpr unsigned int Class_2_0326872D95979B5D_TypeDefinitionIndex = 8001;

class Class_2_0326872D95979B5D : public ::Class_1_DF3D0280BBD100FF
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_621388AFA68232D2*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_621388AFA68232D2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0326872D95979B5D_TypeDefinitionIndex)->GetStaticField(0x7100);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_621388AFA68232D2*>* Field_2_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_2_3E7B7DB0EDF962BA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_3E7B7DB0EDF962BA_OFFSET))();
	}

	static ::Class_2_0326872D95979B5D* Method_2_69991F529EC8B8E0()
	{
		return ((::Class_2_0326872D95979B5D*(*)())((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_69991F529EC8B8E0_OFFSET))();
	}

	static ::System::Void Method_2_DB75C94EF3986257(::System::Boolean a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_621388AFA68232D2*>*& a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_621388AFA68232D2*>*&))((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_DB75C94EF3986257_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	static ::System::Void Method_2_4828BF2E16FA16E2(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_621388AFA68232D2*>*& a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_621388AFA68232D2*>*&))((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_4828BF2E16FA16E2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_621388AFA68232D2*>* Method_2_0BF34D5A5595F8DF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_621388AFA68232D2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_2_0326872D95979B5D_METHOD_2_0BF34D5A5595F8DF_OFFSET))();
	}
};
