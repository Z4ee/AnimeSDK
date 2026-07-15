#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_9E449F39C5094C20_METHOD_1_D5A874101F36DB55_OFFSET UNITYSDK_OFFSET(0x162CFFE0)
#define CLASS_1_9E449F39C5094C20__CCTOR_OFFSET UNITYSDK_OFFSET(0x162D0D40)
#define CLASS_1_9E449F39C5094C20__CTOR_OFFSET UNITYSDK_OFFSET(0x162D0D30)

inline static constexpr unsigned int Class_1_9E449F39C5094C20_TypeDefinitionIndex = 62381;

class Class_1_9E449F39C5094C20 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E449F39C5094C20_TypeDefinitionIndex)->GetStaticField(0x3F210);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_1()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E449F39C5094C20_TypeDefinitionIndex)->GetStaticField(0x3F218);
	}
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E449F39C5094C20__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E449F39C5094C20__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_D5A874101F36DB55(::RPG::GameCore::FixPoint a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E449F39C5094C20_METHOD_1_D5A874101F36DB55_OFFSET))(a1, a2);
	}
};
