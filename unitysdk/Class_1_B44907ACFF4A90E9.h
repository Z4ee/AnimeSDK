#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingResultType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_726;
class Class_1_6E48A12B40FA04FD_1;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B44907ACFF4A90E9_METHOD_1_1C6E2FF8CA171D21_OFFSET UNITYSDK_OFFSET(0xB444850)
#define CLASS_1_B44907ACFF4A90E9_METHOD_1_BB7451EFA4B4F9D9_OFFSET UNITYSDK_OFFSET(0xB444A40)
#define CLASS_1_B44907ACFF4A90E9__CCTOR_OFFSET UNITYSDK_OFFSET(0xB444BF0)

inline static constexpr unsigned int Class_1_B44907ACFF4A90E9_TypeDefinitionIndex = 62040;

class Class_1_B44907ACFF4A90E9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SwordTrainingResultType, ::System::Func_1<::Class_0_16E4307DCC419505_726*>*>** StaticGet_EEMPAAFDLAP()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SwordTrainingResultType, ::System::Func_1<::Class_0_16E4307DCC419505_726*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B44907ACFF4A90E9_TypeDefinitionIndex)->GetStaticField(0x5F910);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B44907ACFF4A90E9__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_726* Method_1_1C6E2FF8CA171D21(::RPG::GameCore::SwordTrainingResultType a1)
	{
		return ((::Class_0_16E4307DCC419505_726*(*)(::RPG::GameCore::SwordTrainingResultType))((::PBYTE)hIl2Cpp + CLASS_1_B44907ACFF4A90E9_METHOD_1_1C6E2FF8CA171D21_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BB7451EFA4B4F9D9(::RPG::GameCore::SwordTrainingResultType a1, ::Class_1_6E48A12B40FA04FD_1* a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::SwordTrainingResultType, ::Class_1_6E48A12B40FA04FD_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B44907ACFF4A90E9_METHOD_1_BB7451EFA4B4F9D9_OFFSET))(a1, a2, a3);
	}
};
