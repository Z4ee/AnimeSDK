#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5F949FB82A9B0DFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F8750)

inline static constexpr unsigned int Class_1_5F949FB82A9B0DFD_TypeDefinitionIndex = 41600;

class Class_1_5F949FB82A9B0DFD : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::LittleGameEntityConfig*>* EJDIFONGCLK; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::LittleGameEntityConfig*>* JDKPOOMJIJC; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameEntityConfig*, ::Class_2_B8E38BF47138A2E5*>* JIDCOGGHCBK; // 0x20
	::System::Boolean GMBJIOHBFDD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F949FB82A9B0DFD__CTOR_OFFSET))(this);
	}
};
