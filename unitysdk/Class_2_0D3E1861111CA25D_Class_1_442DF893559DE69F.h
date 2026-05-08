#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0D3E1861111CA25D_Class_1_B63F27A9FEEF1BA1;
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0D3E1861111CA25D_CLASS_1_442DF893559DE69F_METHOD_1_081CC050799D5B09_OFFSET UNITYSDK_OFFSET(0x12A79F70)
#define CLASS_2_0D3E1861111CA25D_CLASS_1_442DF893559DE69F_METHOD_1_3B62EEA1BEE0D3B1_OFFSET UNITYSDK_OFFSET(0x12A79D70)
#define CLASS_2_0D3E1861111CA25D_CLASS_1_442DF893559DE69F_METHOD_1_ACEF97A62C96772E_OFFSET UNITYSDK_OFFSET(0x12A79EF0)
#define CLASS_2_0D3E1861111CA25D_CLASS_1_442DF893559DE69F__CTOR_OFFSET UNITYSDK_OFFSET(0x12A79BF0)

inline static constexpr unsigned int Class_2_0D3E1861111CA25D_Class_1_442DF893559DE69F_TypeDefinitionIndex = 59487;

class Class_2_0D3E1861111CA25D_Class_1_442DF893559DE69F : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_0D3E1861111CA25D_Class_1_B63F27A9FEEF1BA1*>* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_CLASS_1_442DF893559DE69F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3B62EEA1BEE0D3B1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::Class_2_0D3E1861111CA25D_Class_1_B63F27A9FEEF1BA1*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::Class_2_0D3E1861111CA25D_Class_1_B63F27A9FEEF1BA1*>*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_CLASS_1_442DF893559DE69F_METHOD_1_3B62EEA1BEE0D3B1_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0D3E1861111CA25D_Class_1_B63F27A9FEEF1BA1* Method_1_ACEF97A62C96772E(::UnityEngine::Vector3 a1)
	{
		return ((::Class_2_0D3E1861111CA25D_Class_1_B63F27A9FEEF1BA1*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_CLASS_1_442DF893559DE69F_METHOD_1_ACEF97A62C96772E_OFFSET))(this, a1);
	}

	::System::Void Method_1_081CC050799D5B09(::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_CLASS_1_442DF893559DE69F_METHOD_1_081CC050799D5B09_OFFSET))(this, a1);
	}
};
