#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SingleTimeRewindEntityAnimEventBaseConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_22DFC3839E157DF2__CTOR_OFFSET UNITYSDK_OFFSET(0x170CBD60)

inline static constexpr unsigned int Class_1_22DFC3839E157DF2_TypeDefinitionIndex = 63823;

class Class_1_22DFC3839E157DF2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>*>* IMNFJDLCFFN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig*>*>* MNOFMKIJGKM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22DFC3839E157DF2__CTOR_OFFSET))(this);
	}
};
