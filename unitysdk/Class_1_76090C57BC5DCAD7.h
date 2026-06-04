#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_76090C57BC5DCAD7_METHOD_1_03BE3ABF95DE5C06_OFFSET UNITYSDK_OFFSET(0xA73CE10)
#define CLASS_1_76090C57BC5DCAD7_METHOD_1_8C4A30F52738DE06_OFFSET UNITYSDK_OFFSET(0xA73CCE0)
#define CLASS_1_76090C57BC5DCAD7_METHOD_1_AF4A3BC093299516_OFFSET UNITYSDK_OFFSET(0xA73CC60)
#define CLASS_1_76090C57BC5DCAD7__CCTOR_OFFSET UNITYSDK_OFFSET(0xA73D720)

inline static constexpr unsigned int Class_1_76090C57BC5DCAD7_TypeDefinitionIndex = 50676;

class Class_1_76090C57BC5DCAD7 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint* StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_76090C57BC5DCAD7_TypeDefinitionIndex)->GetStaticField(0x8750);
	}
	static ::RPG::GameCore::IVec2* StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::IVec2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_76090C57BC5DCAD7_TypeDefinitionIndex)->GetStaticField(0x8758);
	}
	static ::RPG::GameCore::FixPoint* StaticGet_Field_1_2()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_76090C57BC5DCAD7_TypeDefinitionIndex)->GetStaticField(0x8760);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76090C57BC5DCAD7__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_AF4A3BC093299516(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + CLASS_1_76090C57BC5DCAD7_METHOD_1_AF4A3BC093299516_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixVec2 Method_1_8C4A30F52738DE06(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_76090C57BC5DCAD7_METHOD_1_8C4A30F52738DE06_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::IVec2 Method_1_03BE3ABF95DE5C06(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_76090C57BC5DCAD7_METHOD_1_03BE3ABF95DE5C06_OFFSET))(a1, a2);
	}
};
