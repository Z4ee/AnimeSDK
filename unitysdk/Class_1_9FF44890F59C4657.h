#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7F4F3EA24347D9DD.h"
#include "unitysdk/Struct_2_CAB3EC81D84469DF.h"
#include "unitysdk/System/Object.h"

class Class_1_9FF44890F59C4657_Class_3_77B9040C132F9304;
class Class_1_9FF44890F59C4657_Class_3_90EEADDEAE6DE849;
class Class_2_785FDC7D0DA58280;
class Class_3_3CD36052F0DB7A76_1;
class Class_3_456566C611CB9BE8;
class Class_3_89C835E3AB83A585;
namespace System { class String; }

#define CLASS_1_9FF44890F59C4657_METHOD_1_1F6BD9C60D953D9A_OFFSET UNITYSDK_OFFSET(0x1EE19AE0)
#define CLASS_1_9FF44890F59C4657_METHOD_1_E7D2E0319D4C4894_OFFSET UNITYSDK_OFFSET(0x1EE19B30)
#define CLASS_1_9FF44890F59C4657__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE19A50)

inline static constexpr unsigned int Class_1_9FF44890F59C4657_TypeDefinitionIndex = 29495;

class Class_1_9FF44890F59C4657 : public ::System::Object
{
public:
	static ::Struct_2_7F4F3EA24347D9DD* StaticGet_Field_1_11()
	{
		return (::Struct_2_7F4F3EA24347D9DD*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9FF44890F59C4657_TypeDefinitionIndex)->GetStaticField(0x24DB0);
	}
	// static const ::System::UInt64 Field_1_0 = 0x1; // 0x0
	// static const ::System::UInt64 Field_1_7 = 0x2; // 0x0
	// static const ::System::UInt64 Field_1_6 = 0x4; // 0x0
	// static const ::System::UInt64 Field_1_5 = 0x8; // 0x0
	// static const ::System::UInt64 Field_1_4 = 0xF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9FF44890F59C4657__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_1F6BD9C60D953D9A(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::System::Boolean(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_9FF44890F59C4657_METHOD_1_1F6BD9C60D953D9A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_E7D2E0319D4C4894(::Struct_2_CAB3EC81D84469DF a1, ::Class_1_9FF44890F59C4657_Class_3_90EEADDEAE6DE849* a2)
	{
		return ((::System::String*(*)(::Struct_2_CAB3EC81D84469DF, ::Class_1_9FF44890F59C4657_Class_3_90EEADDEAE6DE849*))((::PBYTE)hIl2Cpp + CLASS_1_9FF44890F59C4657_METHOD_1_E7D2E0319D4C4894_OFFSET))(a1, a2);
	}
};
