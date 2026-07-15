#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9793A3EE73969A7D_eFileLoaderPosType.h"
#include "unitysdk/RPG/Client/FileVisitorPosMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define CLASS_1_5666342303A8A894_METHOD_1_0BD8EBDA38930A84_OFFSET UNITYSDK_OFFSET(0x1AC7F650)
#define CLASS_1_5666342303A8A894_METHOD_1_3BE8746B4F8EAD03_OFFSET UNITYSDK_OFFSET(0x1AC7F830)
#define CLASS_1_5666342303A8A894_METHOD_1_55A9422564A5ED54_OFFSET UNITYSDK_OFFSET(0x1AC7F410)
#define CLASS_1_5666342303A8A894_METHOD_1_63AE89E11132430B_OFFSET UNITYSDK_OFFSET(0x1AC7F690)
#define CLASS_1_5666342303A8A894_METHOD_1_C76D6B62F0E14986_OFFSET UNITYSDK_OFFSET(0x1AC7F930)
#define CLASS_1_5666342303A8A894_METHOD_1_D747B26DD8037254_OFFSET UNITYSDK_OFFSET(0x1AC7F8F0)
#define CLASS_1_5666342303A8A894__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC7F970)

inline static constexpr unsigned int Class_1_5666342303A8A894_TypeDefinitionIndex = 33839;

class Class_1_5666342303A8A894 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5666342303A8A894_TypeDefinitionIndex)->GetStaticField(0x3DD0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5666342303A8A894_TypeDefinitionIndex)->GetStaticField(0x3DD8);
	}
	static ::RPG::Client::FileVisitorPosMode* StaticGet_Field_1_2()
	{
		return (::RPG::Client::FileVisitorPosMode*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5666342303A8A894_TypeDefinitionIndex)->GetStaticField(0x28D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5666342303A8A894__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::System::Byte>* Method_1_55A9422564A5ED54(::System::String* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5666342303A8A894_METHOD_1_55A9422564A5ED54_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0BD8EBDA38930A84(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5666342303A8A894_METHOD_1_0BD8EBDA38930A84_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_63AE89E11132430B(::System::String* a1, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType&))((::PBYTE)hIl2Cpp + CLASS_1_5666342303A8A894_METHOD_1_63AE89E11132430B_OFFSET))(a1, a2);
	}

	static ::System::IO::Stream* Method_1_3BE8746B4F8EAD03(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5666342303A8A894_METHOD_1_3BE8746B4F8EAD03_OFFSET))(a1, a2);
	}

	static ::System::IO::Stream* Method_1_D747B26DD8037254(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5666342303A8A894_METHOD_1_D747B26DD8037254_OFFSET))(a1, a2);
	}

	static ::System::IO::Stream* Method_1_C76D6B62F0E14986(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5666342303A8A894_METHOD_1_C76D6B62F0E14986_OFFSET))(a1, a2);
	}
};
