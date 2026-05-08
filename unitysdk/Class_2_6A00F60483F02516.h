#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Class_2_E64AC454BBA9F160_Enum_3_E0BD2149EAD4F668.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_1A39E1B51756BF41;
class Class_2_E64AC454BBA9F160_Class_1_84D29A777CDEE069;
class Class_2_E87F1D15F1D4AC72;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_6A00F60483F02516_METHOD_2_52821FCED92A03E6_OFFSET UNITYSDK_OFFSET(0x1435E340)
#define CLASS_2_6A00F60483F02516_METHOD_2_9D768FB7C06C1DF3_OFFSET UNITYSDK_OFFSET(0x1435E170)
#define CLASS_2_6A00F60483F02516_METHOD_2_C127CCAC2E254BF7_OFFSET UNITYSDK_OFFSET(0x1435F090)
#define CLASS_2_6A00F60483F02516__CCTOR_OFFSET UNITYSDK_OFFSET(0x1435E210)
#define CLASS_2_6A00F60483F02516__CTOR_OFFSET UNITYSDK_OFFSET(0x1435E1C0)

inline static constexpr unsigned int Class_2_6A00F60483F02516_TypeDefinitionIndex = 47768;

class Class_2_6A00F60483F02516 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_2_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A00F60483F02516_TypeDefinitionIndex)->GetStaticField(0x453C0);
	}
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x50
	::UnityEngine::RectTransform* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A00F60483F02516__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6A00F60483F02516__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9D768FB7C06C1DF3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_6A00F60483F02516_METHOD_2_9D768FB7C06C1DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52821FCED92A03E6(::Class_2_E64AC454BBA9F160_Class_1_84D29A777CDEE069* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E64AC454BBA9F160_Class_1_84D29A777CDEE069*))((::PBYTE)hIl2Cpp + CLASS_2_6A00F60483F02516_METHOD_2_52821FCED92A03E6_OFFSET))(this, a1);
	}

	::System::String* Method_2_C127CCAC2E254BF7(::Class_2_E64AC454BBA9F160_Enum_3_E0BD2149EAD4F668 a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_E64AC454BBA9F160_Enum_3_E0BD2149EAD4F668, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A00F60483F02516_METHOD_2_C127CCAC2E254BF7_OFFSET))(this, a1, a2);
	}
};
