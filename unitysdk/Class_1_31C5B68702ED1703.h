#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/SIMFoodState.h"
#include "unitysdk/System/Object.h"

class Class_1_938C223DA5C0C9C7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_31C5B68702ED1703_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C6253E0)
#define CLASS_1_31C5B68702ED1703_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1C625380)
#define CLASS_1_31C5B68702ED1703__CTOR_OFFSET UNITYSDK_OFFSET(0x1C625430)

inline static constexpr unsigned int Class_1_31C5B68702ED1703_TypeDefinitionIndex = 40509;

class Class_1_31C5B68702ED1703 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* LEABPMKPDKP; // 0x10
	::Class_1_938C223DA5C0C9C7* EDIMGKLHMBG; // 0x18
	::System::UInt32 AAGKEBFHLMC; // 0x20
	::System::UInt32 PHFMCACHFIJ; // 0x24
	::System::Boolean BOPGCHFNIPK; // 0x28
	::System::Int32 BEFKNFBNBGJ; // 0x2C
	::RPG::Client::LittleGame::ElfRestaurant::SIMFoodState MEPFOEEGBEA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31C5B68702ED1703__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31C5B68702ED1703_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31C5B68702ED1703_CLEAR_OFFSET))(this);
	}
};
