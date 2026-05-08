#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_1FCBF6F207BFD09E;
class Class_1_22EF90524645AFD7;
class Class_1_9CFA2C562F612E08_Class_1_D3EB61F136290F79;

#define CLASS_1_9CFA2C562F612E08_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x12C19D70)
#define CLASS_1_9CFA2C562F612E08__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C19E10)
#define CLASS_1_9CFA2C562F612E08__CTOR_OFFSET UNITYSDK_OFFSET(0x12C19E00)

inline static constexpr unsigned int Class_1_9CFA2C562F612E08_TypeDefinitionIndex = 66425;

class Class_1_9CFA2C562F612E08 : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_Field_1_0()
	{
		return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CFA2C562F612E08_TypeDefinitionIndex)->GetStaticField(0xF970);
	}
	::Class_1_9CFA2C562F612E08_Class_1_D3EB61F136290F79* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CFA2C562F612E08__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CFA2C562F612E08__CCTOR_OFFSET))();
	}

	::Class_1_22EF90524645AFD7* CreateInstance(::Class_1_1FCBF6F207BFD09E* a1)
	{
		return ((::Class_1_22EF90524645AFD7*(*)(::PVOID, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + CLASS_1_9CFA2C562F612E08_CREATEINSTANCE_OFFSET))(this, a1);
	}
};
