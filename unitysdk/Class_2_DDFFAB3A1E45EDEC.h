#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_11E600A2FC4AD333.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_F33AABD3C067711C;
namespace System { class Object; }

#define CLASS_2_DDFFAB3A1E45EDEC_METHOD_2_639FAF2ACEEA3C97_OFFSET UNITYSDK_OFFSET(0x1972C940)
#define CLASS_2_DDFFAB3A1E45EDEC_METHOD_2_958F24FA8C1CE452_OFFSET UNITYSDK_OFFSET(0x1972CB30)
#define CLASS_2_DDFFAB3A1E45EDEC_METHOD_2_FB7B32981F9D3633_OFFSET UNITYSDK_OFFSET(0x1972CAF0)
#define CLASS_2_DDFFAB3A1E45EDEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1972C910)

inline static constexpr unsigned int Class_2_DDFFAB3A1E45EDEC_TypeDefinitionIndex = 35858;

class Class_2_DDFFAB3A1E45EDEC : public ::Class_1_11E600A2FC4AD333
{
public:
	::RPG::MVector2 NCMEPPHLGEG; // 0x38
	::System::Single DCBJLCHENHJ; // 0x40
	::System::Single NLIFGOAGCCG; // 0x44

	::System::Void _ctor(::Class_1_F33AABD3C067711C* a1, ::System::Object* a2, ::System::Single a3, ::System::Single a4, ::RPG::MVector2 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F33AABD3C067711C*, ::System::Object*, ::System::Single, ::System::Single, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_2_DDFFAB3A1E45EDEC__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_639FAF2ACEEA3C97(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DDFFAB3A1E45EDEC_METHOD_2_639FAF2ACEEA3C97_OFFSET))(this, a1, a2);
	}

	::RPG::MVector2 Method_2_FB7B32981F9D3633()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDFFAB3A1E45EDEC_METHOD_2_FB7B32981F9D3633_OFFSET))(this);
	}

	::System::Void Method_2_958F24FA8C1CE452(::RPG::MVector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_2_DDFFAB3A1E45EDEC_METHOD_2_958F24FA8C1CE452_OFFSET))(this, a1);
	}
};
