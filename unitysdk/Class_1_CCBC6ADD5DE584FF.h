#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD.h"
#include "unitysdk/System/Object.h"

class Class_1_5DC1C6CD93AE2511;
namespace System { class IFormatProvider; }
namespace System { class String; }

#define CLASS_1_CCBC6ADD5DE584FF_METHOD_1_022F17B019B59393_OFFSET UNITYSDK_OFFSET(0x18982A70)
#define CLASS_1_CCBC6ADD5DE584FF_METHOD_1_413408A73CBD2F13_OFFSET UNITYSDK_OFFSET(0x18982A10)
#define CLASS_1_CCBC6ADD5DE584FF_METHOD_1_4E261EFE689D6ACC_OFFSET UNITYSDK_OFFSET(0x18982220)
#define CLASS_1_CCBC6ADD5DE584FF_METHOD_1_53285E7F2BE48FC4_1_OFFSET UNITYSDK_OFFSET(0x18982980)
#define CLASS_1_CCBC6ADD5DE584FF_METHOD_1_53285E7F2BE48FC4_OFFSET UNITYSDK_OFFSET(0x18982790)
#define CLASS_1_CCBC6ADD5DE584FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x18982B60)
#define CLASS_1_CCBC6ADD5DE584FF__CTOR_OFFSET UNITYSDK_OFFSET(0x18982B50)

inline static constexpr unsigned int Class_1_CCBC6ADD5DE584FF_TypeDefinitionIndex = 38632;

class Class_1_CCBC6ADD5DE584FF : public ::System::Object
{
public:
	static ::Class_1_CCBC6ADD5DE584FF** StaticGet_Field_1_0()
	{
		return (::Class_1_CCBC6ADD5DE584FF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCBC6ADD5DE584FF_TypeDefinitionIndex)->GetStaticField(0x25570);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF__CCTOR_OFFSET))();
	}

	::System::String* Method_1_4E261EFE689D6ACC(::Class_1_5DC1C6CD93AE2511* a1, ::System::IFormatProvider* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_5DC1C6CD93AE2511*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF_METHOD_1_4E261EFE689D6ACC_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_413408A73CBD2F13(::System::String* a1, ::System::IFormatProvider* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF_METHOD_1_413408A73CBD2F13_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_022F17B019B59393(::Struct_2_2F8FC043285F98CD a1, ::System::IFormatProvider* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_2F8FC043285F98CD, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF_METHOD_1_022F17B019B59393_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_53285E7F2BE48FC4(::Class_1_5DC1C6CD93AE2511* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_5DC1C6CD93AE2511*))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF_METHOD_1_53285E7F2BE48FC4_OFFSET))(this, a1);
	}

	::System::String* Method_1_53285E7F2BE48FC4_1(::Class_1_5DC1C6CD93AE2511* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_5DC1C6CD93AE2511*))((::PBYTE)hIl2Cpp + CLASS_1_CCBC6ADD5DE584FF_METHOD_1_53285E7F2BE48FC4_1_OFFSET))(this, a1);
	}
};
