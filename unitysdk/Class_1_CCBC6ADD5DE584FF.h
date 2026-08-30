#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD.h"
#include "unitysdk/System/Object.h"

class Class_1_A0174173F9D3AFD8;
namespace System { class IFormatProvider; }
namespace System { class String; }

#define CLASS_1_CCBC6ADD5DE584FF_METHOD_1_022F17B019B59393_OFFSET UNITYSDK_OFFSET(0x1EF3D520)
#define CLASS_1_CCBC6ADD5DE584FF_METHOD_1_413408A73CBD2F13_OFFSET UNITYSDK_OFFSET(0x1EF3D4C0)
#define CLASS_1_CCBC6ADD5DE584FF_METHOD_1_53285E7F2BE48FC4_1_OFFSET UNITYSDK_OFFSET(0x1EF3D420)
#define CLASS_1_CCBC6ADD5DE584FF_METHOD_1_53285E7F2BE48FC4_OFFSET UNITYSDK_OFFSET(0x1EF3D230)
#define CLASS_1_CCBC6ADD5DE584FF_METHOD_1_5C84ED243AEA0E30_OFFSET UNITYSDK_OFFSET(0x1EF3CAA0)
#define CLASS_1_CCBC6ADD5DE584FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF3D610)
#define CLASS_1_CCBC6ADD5DE584FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF3D600)

inline static constexpr unsigned int Class_1_CCBC6ADD5DE584FF_TypeDefinitionIndex = 40313;

class Class_1_CCBC6ADD5DE584FF : public ::System::Object
{
public:
	static ::Class_1_CCBC6ADD5DE584FF** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_CCBC6ADD5DE584FF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCBC6ADD5DE584FF_TypeDefinitionIndex)->GetStaticField(0x1190);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF__CCTOR_OFFSET))();
	}

	::System::String* Method_1_5C84ED243AEA0E30(::Class_1_A0174173F9D3AFD8* a1, ::System::IFormatProvider* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_A0174173F9D3AFD8*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF_METHOD_1_5C84ED243AEA0E30_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_413408A73CBD2F13(::System::String* a1, ::System::IFormatProvider* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF_METHOD_1_413408A73CBD2F13_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_022F17B019B59393(::Struct_2_2F8FC043285F98CD a1, ::System::IFormatProvider* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_2F8FC043285F98CD, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF_METHOD_1_022F17B019B59393_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_53285E7F2BE48FC4(::Class_1_A0174173F9D3AFD8* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_A0174173F9D3AFD8*))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF_METHOD_1_53285E7F2BE48FC4_OFFSET))(this, a1);
	}

	::System::String* Method_1_53285E7F2BE48FC4_1(::Class_1_A0174173F9D3AFD8* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_A0174173F9D3AFD8*))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF_METHOD_1_53285E7F2BE48FC4_1_OFFSET))(this, a1);
	}
};
