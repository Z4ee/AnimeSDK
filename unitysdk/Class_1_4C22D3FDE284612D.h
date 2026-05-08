#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0CCE48347EBD6D5F_Struct_2_7EDAB25A0BFDE97D.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4C22D3FDE284612D_METHOD_1_3C18A35E0FF0A1D2_OFFSET UNITYSDK_OFFSET(0x139FC660)

inline static constexpr unsigned int Class_1_4C22D3FDE284612D_TypeDefinitionIndex = 50678;

class Class_1_4C22D3FDE284612D : public ::System::Object
{
public:
	static ::MoleMole::EntityHandle Method_1_3C18A35E0FF0A1D2(::System::Int32 a1, ::Class_2_0CCE48347EBD6D5F_Struct_2_7EDAB25A0BFDE97D a2, ::System::UInt64 a3, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a4)
	{
		return ((::MoleMole::EntityHandle(*)(::System::Int32, ::Class_2_0CCE48347EBD6D5F_Struct_2_7EDAB25A0BFDE97D, ::System::UInt64, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + CLASS_1_4C22D3FDE284612D_METHOD_1_3C18A35E0FF0A1D2_OFFSET))(a1, a2, a3, a4);
	}
};
