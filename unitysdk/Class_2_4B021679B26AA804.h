#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_390;
class Class_1_2CAAA2FDF9170110;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class IncludeGlobalTaskListTemplate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_4B021679B26AA804_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C9C720)
#define CLASS_2_4B021679B26AA804_METHOD_2_2D59151C189E7DE0_OFFSET UNITYSDK_OFFSET(0x10C9D3E0)
#define CLASS_2_4B021679B26AA804_METHOD_2_66F6D05493E82CD1_OFFSET UNITYSDK_OFFSET(0x10C9D470)
#define CLASS_2_4B021679B26AA804_METHOD_2_B3F8B31EE402C353_OFFSET UNITYSDK_OFFSET(0x10C9D420)
#define CLASS_2_4B021679B26AA804_METHOD_2_D3633CE2CB97D446_OFFSET UNITYSDK_OFFSET(0x10C9D3A0)
#define CLASS_2_4B021679B26AA804_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x10C9D360)
#define CLASS_2_4B021679B26AA804_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C9C800)
#define CLASS_2_4B021679B26AA804_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C9D150)
#define CLASS_2_4B021679B26AA804_TICK_OFFSET UNITYSDK_OFFSET(0x10C9D270)
#define CLASS_2_4B021679B26AA804__CTOR_OFFSET UNITYSDK_OFFSET(0x10C9C4E0)

inline static constexpr unsigned int Class_2_4B021679B26AA804_TypeDefinitionIndex = 44097;

class Class_2_4B021679B26AA804 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x18
	::RPG::GameCore::IncludeGlobalTaskListTemplate* Field_2_0; // 0x20
	::Class_1_2CAAA2FDF9170110* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::IncludeGlobalTaskListTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::IncludeGlobalTaskListTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_4B021679B26AA804__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B021679B26AA804_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B021679B26AA804_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B021679B26AA804_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4B021679B26AA804_TICK_OFFSET))(this, a1);
	}

	::Class_1_2CAAA2FDF9170110* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_2CAAA2FDF9170110*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B021679B26AA804_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Method_2_D3633CE2CB97D446()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B021679B26AA804_METHOD_2_D3633CE2CB97D446_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_2_2D59151C189E7DE0()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B021679B26AA804_METHOD_2_2D59151C189E7DE0_OFFSET))(this);
	}

	::Class_3_5775A4FEC79026BC* Method_2_B3F8B31EE402C353(::System::String* a1)
	{
		return ((::Class_3_5775A4FEC79026BC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4B021679B26AA804_METHOD_2_B3F8B31EE402C353_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_390* Method_2_66F6D05493E82CD1()
	{
		return ((::Class_0_16E4307DCC419505_390*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B021679B26AA804_METHOD_2_66F6D05493E82CD1_OFFSET))(this);
	}
};
