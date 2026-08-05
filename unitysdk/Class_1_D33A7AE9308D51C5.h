#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BAB420867AF96826;
class Class_2_F8EB4D9464ADCCA1;
class Class_3_707412604A129938;
class Class_3_AA6DF3A878195D3F;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D33A7AE9308D51C5_METHOD_1_12A816B133BA90BF_OFFSET UNITYSDK_OFFSET(0x148C47D0)
#define CLASS_1_D33A7AE9308D51C5_METHOD_1_2DB3296E56BB9BE7_1_OFFSET UNITYSDK_OFFSET(0x148C4750)
#define CLASS_1_D33A7AE9308D51C5_METHOD_1_2DB3296E56BB9BE7_OFFSET UNITYSDK_OFFSET(0x148C4380)
#define CLASS_1_D33A7AE9308D51C5_METHOD_1_B550A42E2994D8E7_OFFSET UNITYSDK_OFFSET(0x148C43E0)
#define CLASS_1_D33A7AE9308D51C5_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x148C47C0)
#define CLASS_1_D33A7AE9308D51C5_METHOD_1_C2DCCE3B5B296349_OFFSET UNITYSDK_OFFSET(0x148C40C0)
#define CLASS_1_D33A7AE9308D51C5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x148C47B0)
#define CLASS_1_D33A7AE9308D51C5__CTOR_OFFSET UNITYSDK_OFFSET(0x148C3F90)

inline static constexpr unsigned int Class_1_D33A7AE9308D51C5_TypeDefinitionIndex = 85161;

class Class_1_D33A7AE9308D51C5 : public ::System::Object
{
public:
	::Class_3_C93CC3D2C2AC4067* Field_1_6; // 0x10
	::MoleMole::Battle::Entity* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_4; // 0x20
	::UnityEngine::Vector3 Field_1_2; // 0x28
	::System::Single Field_1_7; // 0x34
	::MoleMole::Config::CharacterSize Field_1_0; // 0x38
	::System::Int32 Field_1_1; // 0x3C

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D33A7AE9308D51C5__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_C2DCCE3B5B296349(::Class_3_C93CC3D2C2AC4067* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_1_D33A7AE9308D51C5_METHOD_1_C2DCCE3B5B296349_OFFSET))(this, a1);
	}

	::System::Single Method_1_2DB3296E56BB9BE7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D33A7AE9308D51C5_METHOD_1_2DB3296E56BB9BE7_OFFSET))(this, a1);
	}

	::System::Single Method_1_2DB3296E56BB9BE7_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D33A7AE9308D51C5_METHOD_1_2DB3296E56BB9BE7_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D33A7AE9308D51C5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::MoleMole::Config::CharacterSize Method_1_B550A42E2994D8E7(::MoleMole::Battle::Entity* a1)
	{
		return ((::MoleMole::Config::CharacterSize(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D33A7AE9308D51C5_METHOD_1_B550A42E2994D8E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D33A7AE9308D51C5_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_1_12A816B133BA90BF(::System::Single a1, ::Class_3_707412604A129938* a2, ::Class_3_AA6DF3A878195D3F* a3, ::Class_2_F8EB4D9464ADCCA1* a4)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Single, ::Class_3_707412604A129938*, ::Class_3_AA6DF3A878195D3F*, ::Class_2_F8EB4D9464ADCCA1*))((::PBYTE)hIl2Cpp + CLASS_1_D33A7AE9308D51C5_METHOD_1_12A816B133BA90BF_OFFSET))(this, a1, a2, a3, a4);
	}
};
