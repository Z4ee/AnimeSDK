#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3141DB40779BDC27_CLEAR_OFFSET UNITYSDK_OFFSET(0x167E5D30)
#define CLASS_1_3141DB40779BDC27_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x167E5C60)
#define CLASS_1_3141DB40779BDC27__CTOR_OFFSET UNITYSDK_OFFSET(0x167E5E10)

inline static constexpr unsigned int Class_1_3141DB40779BDC27_TypeDefinitionIndex = 32365;

class Class_1_3141DB40779BDC27 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3141DB40779BDC27__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3141DB40779BDC27_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3141DB40779BDC27_CLEAR_OFFSET))(this);
	}
};
