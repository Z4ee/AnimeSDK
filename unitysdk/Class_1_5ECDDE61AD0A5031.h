#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1118;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5ECDDE61AD0A5031_METHOD_1_063139BE4F4E8871_OFFSET UNITYSDK_OFFSET(0xC1D2B10)
#define CLASS_1_5ECDDE61AD0A5031_METHOD_1_13119A4EA31B735D_OFFSET UNITYSDK_OFFSET(0xC1D32D0)
#define CLASS_1_5ECDDE61AD0A5031_METHOD_1_19C3133E543AD556_OFFSET UNITYSDK_OFFSET(0xC1D2A20)
#define CLASS_1_5ECDDE61AD0A5031_METHOD_1_2D9E314F7B5D88F0_OFFSET UNITYSDK_OFFSET(0xC1D30B0)
#define CLASS_1_5ECDDE61AD0A5031_METHOD_1_B7512089642D5F1C_OFFSET UNITYSDK_OFFSET(0xC1D2EB0)
#define CLASS_1_5ECDDE61AD0A5031_METHOD_1_F05BB774F3080AE5_OFFSET UNITYSDK_OFFSET(0xC1D2F60)
#define CLASS_1_5ECDDE61AD0A5031__CTOR_OFFSET UNITYSDK_OFFSET(0xC1D2AD0)

inline static constexpr unsigned int Class_1_5ECDDE61AD0A5031_TypeDefinitionIndex = 69647;

class Class_1_5ECDDE61AD0A5031 : public ::System::Object
{
public:
	::RPG::Client::NavMap::IMapDataSource* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1118*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ECDDE61AD0A5031__CTOR_OFFSET))(this);
	}

	static ::Class_1_5ECDDE61AD0A5031* Method_1_19C3133E543AD556(::RPG::Client::NavMap::IMapDataSource* a1, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1118*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
	{
		return ((::Class_1_5ECDDE61AD0A5031*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1118*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_5ECDDE61AD0A5031_METHOD_1_19C3133E543AD556_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_5ECDDE61AD0A5031* Method_1_B7512089642D5F1C(::RPG::Client::NavMap::IMapDataSource* a1, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
	{
		return ((::Class_1_5ECDDE61AD0A5031*(*)(::RPG::Client::NavMap::IMapDataSource*, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_5ECDDE61AD0A5031_METHOD_1_B7512089642D5F1C_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_2D9E314F7B5D88F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ECDDE61AD0A5031_METHOD_1_2D9E314F7B5D88F0_OFFSET))(this);
	}

	::System::Boolean Method_1_13119A4EA31B735D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ECDDE61AD0A5031_METHOD_1_13119A4EA31B735D_OFFSET))(this);
	}

	::System::Void Method_1_F05BB774F3080AE5(::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_5ECDDE61AD0A5031_METHOD_1_F05BB774F3080AE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_063139BE4F4E8871(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1118*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1118*>*))((::PBYTE)hIl2Cpp + CLASS_1_5ECDDE61AD0A5031_METHOD_1_063139BE4F4E8871_OFFSET))(this, a1);
	}
};
