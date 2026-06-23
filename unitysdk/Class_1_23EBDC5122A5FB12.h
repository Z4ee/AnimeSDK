#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_22FE7B3FF5958EFB.h"
#include "unitysdk/Struct_2_4495C6EC85BB961A.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_0_16E4307DCC419505_518;

#define CLASS_1_23EBDC5122A5FB12_METHOD_1_1C0DAD056A6A8C17_OFFSET UNITYSDK_OFFSET(0x13532F50)
#define CLASS_1_23EBDC5122A5FB12_METHOD_1_51DE99FD16C92C72_OFFSET UNITYSDK_OFFSET(0x13532B80)
#define CLASS_1_23EBDC5122A5FB12_METHOD_1_C64F6A1DE1FAF1C8_OFFSET UNITYSDK_OFFSET(0x135334C0)
#define CLASS_1_23EBDC5122A5FB12_METHOD_1_EB8867F134DF46F7_OFFSET UNITYSDK_OFFSET(0x13533300)
#define CLASS_1_23EBDC5122A5FB12_METHOD_1_FFA3498E5B134FF4_OFFSET UNITYSDK_OFFSET(0x13532C40)

inline static constexpr unsigned int Class_1_23EBDC5122A5FB12_TypeDefinitionIndex = 58529;

class Class_1_23EBDC5122A5FB12 : public ::System::Object
{
public:
	static ::Struct_2_22FE7B3FF5958EFB Method_1_51DE99FD16C92C72(::MoleMole::EntityHandle& a1, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*& a2)
	{
		return ((::Struct_2_22FE7B3FF5958EFB(*)(::MoleMole::EntityHandle&, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + CLASS_1_23EBDC5122A5FB12_METHOD_1_51DE99FD16C92C72_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_1_1C0DAD056A6A8C17(::MoleMole::EntityHandle a1)
	{
		return ((::UnityEngine::Transform*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_23EBDC5122A5FB12_METHOD_1_1C0DAD056A6A8C17_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_518<::Struct_2_22FE7B3FF5958EFB, ::Struct_2_4495C6EC85BB961A>* Method_1_EB8867F134DF46F7(::MoleMole::EntityHandle& a1)
	{
		return ((::Class_0_16E4307DCC419505_518<::Struct_2_22FE7B3FF5958EFB, ::Struct_2_4495C6EC85BB961A>*(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + CLASS_1_23EBDC5122A5FB12_METHOD_1_EB8867F134DF46F7_OFFSET))(a1);
	}

	static ::Struct_2_22FE7B3FF5958EFB Method_1_C64F6A1DE1FAF1C8(::MoleMole::EntityHandle& a1, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*& a2)
	{
		return ((::Struct_2_22FE7B3FF5958EFB(*)(::MoleMole::EntityHandle&, ::System::Func_2<::MoleMole::EntityHandle, ::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + CLASS_1_23EBDC5122A5FB12_METHOD_1_C64F6A1DE1FAF1C8_OFFSET))(a1, a2);
	}

	static ::Struct_2_22FE7B3FF5958EFB Method_1_FFA3498E5B134FF4(::MoleMole::EntityHandle& a1, ::UnityEngine::Transform* a2)
	{
		return ((::Struct_2_22FE7B3FF5958EFB(*)(::MoleMole::EntityHandle&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_23EBDC5122A5FB12_METHOD_1_FFA3498E5B134FF4_OFFSET))(a1, a2);
	}
};
