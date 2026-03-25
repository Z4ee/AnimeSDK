#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_390;
class Class_1_2CAAA2FDF9170110;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class IncludeTaskListTemplate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E8B03ED1355CE6C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D285A0)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_2D59151C189E7DE0_OFFSET UNITYSDK_OFFSET(0x8D29750)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_58EE1C9E9EEF6239_OFFSET UNITYSDK_OFFSET(0x8D29790)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_94D20ED54313DFA2_OFFSET UNITYSDK_OFFSET(0x8D29850)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_D3633CE2CB97D446_OFFSET UNITYSDK_OFFSET(0x8D29710)
#define CLASS_2_E8B03ED1355CE6C8_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x8D296D0)
#define CLASS_2_E8B03ED1355CE6C8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D286B0)
#define CLASS_2_E8B03ED1355CE6C8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8D29460)
#define CLASS_2_E8B03ED1355CE6C8_TICK_OFFSET UNITYSDK_OFFSET(0x8D295E0)
#define CLASS_2_E8B03ED1355CE6C8__CTOR_OFFSET UNITYSDK_OFFSET(0x8D28420)

inline static constexpr unsigned int Class_2_E8B03ED1355CE6C8_TypeDefinitionIndex = 44099;

class Class_2_E8B03ED1355CE6C8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_5; // 0x20
	::Class_1_2CAAA2FDF9170110* Field_2_2; // 0x28
	::RPG::GameCore::IncludeTaskListTemplate* Field_2_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_5775A4FEC79026BC*>* Field_2_6; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_2_3; // 0x40
	::RPG::GameCore::GameEntityList* Field_2_4; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::IncludeTaskListTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::IncludeTaskListTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_TICK_OFFSET))(this, a1);
	}

	::Class_1_2CAAA2FDF9170110* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_2CAAA2FDF9170110*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Method_2_D3633CE2CB97D446()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_METHOD_2_D3633CE2CB97D446_OFFSET))(this);
	}

	::RPG::GameCore::GameEntityList* Method_2_2D59151C189E7DE0()
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_METHOD_2_2D59151C189E7DE0_OFFSET))(this);
	}

	::Class_3_5775A4FEC79026BC* Method_2_58EE1C9E9EEF6239(::System::String* a1)
	{
		return ((::Class_3_5775A4FEC79026BC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_METHOD_2_58EE1C9E9EEF6239_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_390* Method_2_94D20ED54313DFA2()
	{
		return ((::Class_0_16E4307DCC419505_390*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8B03ED1355CE6C8_METHOD_2_94D20ED54313DFA2_OFFSET))(this);
	}
};
