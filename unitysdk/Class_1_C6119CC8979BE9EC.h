#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C6119CC8979BE9EC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C33D370)
#define CLASS_1_C6119CC8979BE9EC_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1C33D2D0)
#define CLASS_1_C6119CC8979BE9EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C33D420)

inline static constexpr unsigned int Class_1_C6119CC8979BE9EC_TypeDefinitionIndex = 40508;

class Class_1_C6119CC8979BE9EC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* NKCIMDHIBMO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* DMNFNMPHFGE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6119CC8979BE9EC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6119CC8979BE9EC_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6119CC8979BE9EC_CLEAR_OFFSET))(this);
	}
};
