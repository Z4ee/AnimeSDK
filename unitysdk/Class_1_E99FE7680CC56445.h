#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChooseDeliveryEntry; }
namespace RPG::Client { class ChooseDeliveryGroup; }
namespace RPG::Client { class ChooseDeliveryToastConfig; }
namespace RPG::GameCore { class ChooseDeliveryRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E99FE7680CC56445_METHOD_1_52BA6E23EFEC7133_OFFSET UNITYSDK_OFFSET(0x161400E0)
#define CLASS_1_E99FE7680CC56445_METHOD_1_9627524C59E307FF_OFFSET UNITYSDK_OFFSET(0x161401C0)
#define CLASS_1_E99FE7680CC56445_METHOD_1_9C3F21E846B922BC_OFFSET UNITYSDK_OFFSET(0x16140270)

inline static constexpr unsigned int Class_1_E99FE7680CC56445_TypeDefinitionIndex = 63581;

class Class_1_E99FE7680CC56445 : public ::System::Object
{
public:
	static ::RPG::Client::ChooseDeliveryEntry* Method_1_52BA6E23EFEC7133(::System::UInt32 a1)
	{
		return ((::RPG::Client::ChooseDeliveryEntry*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E99FE7680CC56445_METHOD_1_52BA6E23EFEC7133_OFFSET))(a1);
	}

	static ::RPG::Client::ChooseDeliveryToastConfig* Method_1_9627524C59E307FF(::System::UInt32 a1)
	{
		return ((::RPG::Client::ChooseDeliveryToastConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E99FE7680CC56445_METHOD_1_9627524C59E307FF_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>* Method_1_9C3F21E846B922BC(::RPG::GameCore::ChooseDeliveryRow* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>*(*)(::RPG::GameCore::ChooseDeliveryRow*))((::PBYTE)hIl2Cpp + CLASS_1_E99FE7680CC56445_METHOD_1_9C3F21E846B922BC_OFFSET))(a1);
	}
};
