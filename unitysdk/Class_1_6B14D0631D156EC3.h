#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_951;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6B14D0631D156EC3_METHOD_1_07B4A9AD56F3A59A_OFFSET UNITYSDK_OFFSET(0x8DE8B40)
#define CLASS_1_6B14D0631D156EC3_METHOD_1_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x8DE8950)
#define CLASS_1_6B14D0631D156EC3_METHOD_1_B7512089642D5F1C_OFFSET UNITYSDK_OFFSET(0x8DE8770)
#define CLASS_1_6B14D0631D156EC3_METHOD_1_D103C5A3AAA08969_OFFSET UNITYSDK_OFFSET(0x8DE8860)
#define CLASS_1_6B14D0631D156EC3__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE8820)

inline static constexpr unsigned int Class_1_6B14D0631D156EC3_TypeDefinitionIndex = 61331;

class Class_1_6B14D0631D156EC3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_951*>* Field_1_2; // 0x10
	::RPG::Client::NavMap::IMapDataSource* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B14D0631D156EC3__CTOR_OFFSET))(this);
	}

	static ::Class_1_6B14D0631D156EC3* Method_1_B7512089642D5F1C(::RPG::Client::NavMap::IMapDataSource* a1, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
	{
		return ((::Class_1_6B14D0631D156EC3*(*)(::RPG::Client::NavMap::IMapDataSource*, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_6B14D0631D156EC3_METHOD_1_B7512089642D5F1C_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B14D0631D156EC3_METHOD_1_0C44FB644D25C1C2_OFFSET))(this);
	}

	::System::Boolean Method_1_07B4A9AD56F3A59A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B14D0631D156EC3_METHOD_1_07B4A9AD56F3A59A_OFFSET))(this);
	}

	::System::Void Method_1_D103C5A3AAA08969(::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_6B14D0631D156EC3_METHOD_1_D103C5A3AAA08969_OFFSET))(this, a1);
	}
};
