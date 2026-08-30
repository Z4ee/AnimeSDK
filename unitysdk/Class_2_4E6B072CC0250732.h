#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_218.h"
#include "unitysdk/Struct_2_BA7046B740FEFA98.h"

class Class_1_39DC98424E208118;
namespace RPG::Client::Prop { class BoxmanPuzzleBoard; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4E6B072CC0250732__CCTOR_OFFSET UNITYSDK_OFFSET(0x157D9E20)
#define CLASS_2_4E6B072CC0250732__CTOR_OFFSET UNITYSDK_OFFSET(0x157D9DB0)

inline static constexpr unsigned int Class_2_4E6B072CC0250732_TypeDefinitionIndex = 78467;

class Class_2_4E6B072CC0250732 : public ::Class_1_43BD383C98B4C0C5_218
{
public:
	static ::System::Collections::Generic::List_1<::Struct_2_BA7046B740FEFA98>** StaticGet_PHBNPGOELBP()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_BA7046B740FEFA98>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E6B072CC0250732_TypeDefinitionIndex)->GetStaticField(0x5CC70);
	}
	::System::Collections::Generic::List_1<::Class_1_39DC98424E208118*>* JBDJGOJIKLJ; // 0x10
	::System::Collections::Generic::List_1<::Class_1_39DC98424E208118*>* DMGBFHODIBD; // 0x18
	::System::Int32 IFEPJHGNCOI; // 0x20

	::System::Void _ctor(::RPG::Client::Prop::BoxmanPuzzleBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_2_4E6B072CC0250732__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4E6B072CC0250732__CCTOR_OFFSET))();
	}
};
