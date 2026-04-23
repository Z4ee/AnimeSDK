#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5F949FB82A9B0DFD__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5E9C0)

inline static constexpr unsigned int Class_1_5F949FB82A9B0DFD_TypeDefinitionIndex = 39069;

class Class_1_5F949FB82A9B0DFD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::LittleGameEntityConfig*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameEntityConfig*, ::Class_2_0C58AD91B0F4D809*>* Field_1_3; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::LittleGameEntityConfig*>* Field_1_1; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F949FB82A9B0DFD__CTOR_OFFSET))(this);
	}
};
