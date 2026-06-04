#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9AD7EC315F99B05E;
class Class_1_BB505CFCA176BF03;
namespace RPG::GameCore { class StageMonsterWave; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3F916053B9BB8D97_METHOD_1_2E492585A7F6328A_OFFSET UNITYSDK_OFFSET(0x13B56FC0)
#define CLASS_1_3F916053B9BB8D97_METHOD_1_B5A33CE4233AC9F5_OFFSET UNITYSDK_OFFSET(0x13B56D90)
#define CLASS_1_3F916053B9BB8D97_METHOD_1_D34F198689013241_OFFSET UNITYSDK_OFFSET(0x13B56C30)
#define CLASS_1_3F916053B9BB8D97__CTOR_OFFSET UNITYSDK_OFFSET(0x13B56F80)

inline static constexpr unsigned int Class_1_3F916053B9BB8D97_TypeDefinitionIndex = 52569;

class Class_1_3F916053B9BB8D97 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>* Field_1_0; // 0x10
	::Class_1_9AD7EC315F99B05E* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F916053B9BB8D97__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_D34F198689013241()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F916053B9BB8D97_METHOD_1_D34F198689013241_OFFSET))(this);
	}

	static ::Class_1_3F916053B9BB8D97* Method_1_B5A33CE4233AC9F5(::RPG::GameCore::StageMonsterWave* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_3F916053B9BB8D97*(*)(::RPG::GameCore::StageMonsterWave*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F916053B9BB8D97_METHOD_1_B5A33CE4233AC9F5_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::Class_1_3F916053B9BB8D97*>* Method_1_2E492585A7F6328A(::Il2CppArray<::RPG::GameCore::StageMonsterWave*>* a1)
	{
		return ((::Il2CppArray<::Class_1_3F916053B9BB8D97*>*(*)(::Il2CppArray<::RPG::GameCore::StageMonsterWave*>*))((::PBYTE)hIl2Cpp + CLASS_1_3F916053B9BB8D97_METHOD_1_2E492585A7F6328A_OFFSET))(a1);
	}
};
