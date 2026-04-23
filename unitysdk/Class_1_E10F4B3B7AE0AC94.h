#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterFaceExpressionConfig; }
namespace RPG::GameCore { class CharacterFaceExpressionMappingConfig; }
namespace System { class String; }

#define CLASS_1_E10F4B3B7AE0AC94_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12AF9520)
#define CLASS_1_E10F4B3B7AE0AC94_METHOD_1_76500CA2EC4CA996_OFFSET UNITYSDK_OFFSET(0x12AF9570)
#define CLASS_1_E10F4B3B7AE0AC94_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x12AF9480)

inline static constexpr unsigned int Class_1_E10F4B3B7AE0AC94_TypeDefinitionIndex = 67495;

class Class_1_E10F4B3B7AE0AC94 : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterFaceExpressionMappingConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::CharacterFaceExpressionMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E10F4B3B7AE0AC94_TypeDefinitionIndex)->GetStaticField(0x49130);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E10F4B3B7AE0AC94_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E10F4B3B7AE0AC94_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::CharacterFaceExpressionConfig* Method_1_76500CA2EC4CA996(::System::String* a1)
	{
		return ((::RPG::GameCore::CharacterFaceExpressionConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E10F4B3B7AE0AC94_METHOD_1_76500CA2EC4CA996_OFFSET))(a1);
	}
};
