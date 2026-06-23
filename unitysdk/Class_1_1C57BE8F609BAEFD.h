#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_1C57BE8F609BAEFD_METHOD_1_017DD003A1AD16D5_OFFSET UNITYSDK_OFFSET(0x1E435980)
#define CLASS_1_1C57BE8F609BAEFD_METHOD_1_1BB4029F51995479_OFFSET UNITYSDK_OFFSET(0x1E435A40)
#define CLASS_1_1C57BE8F609BAEFD_METHOD_1_1D4A874338A1426A_OFFSET UNITYSDK_OFFSET(0x1E435BA0)
#define CLASS_1_1C57BE8F609BAEFD_METHOD_1_970670EAEF3BD1FA_OFFSET UNITYSDK_OFFSET(0x1E435840)
#define CLASS_1_1C57BE8F609BAEFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4356F0)

inline static constexpr unsigned int Class_1_1C57BE8F609BAEFD_TypeDefinitionIndex = 28816;

class Class_1_1C57BE8F609BAEFD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C57BE8F609BAEFD_TypeDefinitionIndex)->GetStaticField(0x236F0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C57BE8F609BAEFD_TypeDefinitionIndex)->GetStaticField(0x236F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C57BE8F609BAEFD__CCTOR_OFFSET))();
	}

	static ::System::Object* Method_1_970670EAEF3BD1FA(::System::String* a1)
	{
		return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C57BE8F609BAEFD_METHOD_1_970670EAEF3BD1FA_OFFSET))(a1);
	}

	static ::System::Void Method_1_017DD003A1AD16D5(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1C57BE8F609BAEFD_METHOD_1_017DD003A1AD16D5_OFFSET))(a1);
	}

	static ::System::Void Method_1_1D4A874338A1426A(::System::Object* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C57BE8F609BAEFD_METHOD_1_1D4A874338A1426A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1BB4029F51995479(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C57BE8F609BAEFD_METHOD_1_1BB4029F51995479_OFFSET))(a1);
	}
};
