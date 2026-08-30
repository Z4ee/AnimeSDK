#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_76090C57BC5DCAD7_METHOD_1_03BE3ABF95DE5C06_OFFSET UNITYSDK_OFFSET(0x188A61F0)
#define CLASS_1_76090C57BC5DCAD7_METHOD_1_8C4A30F52738DE06_OFFSET UNITYSDK_OFFSET(0x188A60C0)
#define CLASS_1_76090C57BC5DCAD7_METHOD_1_AF4A3BC093299516_OFFSET UNITYSDK_OFFSET(0x188A6040)
#define CLASS_1_76090C57BC5DCAD7__CCTOR_OFFSET UNITYSDK_OFFSET(0x188A6B00)

inline static constexpr unsigned int Class_1_76090C57BC5DCAD7_TypeDefinitionIndex = 54442;

class Class_1_76090C57BC5DCAD7 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint* StaticGet_LMFODKEBNME()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_76090C57BC5DCAD7_TypeDefinitionIndex)->GetStaticField(0x1550);
	}
	static ::RPG::GameCore::FixPoint* StaticGet_LMOMOFMGJCA()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_76090C57BC5DCAD7_TypeDefinitionIndex)->GetStaticField(0x1558);
	}
	static ::RPG::GameCore::IVec2* StaticGet_ENDKNALEOMC()
	{
		return (::RPG::GameCore::IVec2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_76090C57BC5DCAD7_TypeDefinitionIndex)->GetStaticField(0x1560);
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
