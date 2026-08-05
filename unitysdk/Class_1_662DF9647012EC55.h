#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_945F852A8B481F54_Struct_2_7EDAB25A0BFDE97D.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_662DF9647012EC55_METHOD_1_C84416DC54863B6D_OFFSET UNITYSDK_OFFSET(0x1537F880)

inline static constexpr unsigned int Class_1_662DF9647012EC55_TypeDefinitionIndex = 70136;

class Class_1_662DF9647012EC55 : public ::System::Object
{
public:
	static ::MoleMole::EntityHandle Method_1_C84416DC54863B6D(::System::Int32 a1, ::Class_2_945F852A8B481F54_Struct_2_7EDAB25A0BFDE97D a2, ::System::UInt64 a3, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a4)
	{
		return ((::MoleMole::EntityHandle(*)(::System::Int32, ::Class_2_945F852A8B481F54_Struct_2_7EDAB25A0BFDE97D, ::System::UInt64, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + CLASS_1_662DF9647012EC55_METHOD_1_C84416DC54863B6D_OFFSET))(a1, a2, a3, a4);
	}
};
