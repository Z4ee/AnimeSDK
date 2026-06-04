#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::GameCore { class ShowShop; }
namespace RPG::GameCore { class TalkBehaviorRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_49D69C37F7767B77_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C251A0)
#define CLASS_2_49D69C37F7767B77_METHOD_2_638DE61E5889BBE5_OFFSET UNITYSDK_OFFSET(0x13C25B90)
#define CLASS_2_49D69C37F7767B77_METHOD_2_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x13C255E0)
#define CLASS_2_49D69C37F7767B77_METHOD_2_8BA81D51FB5D5B30_OFFSET UNITYSDK_OFFSET(0x13C25A50)
#define CLASS_2_49D69C37F7767B77_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13C25980)
#define CLASS_2_49D69C37F7767B77_METHOD_2_B88E6D62135C4817_OFFSET UNITYSDK_OFFSET(0x13C25ED0)
#define CLASS_2_49D69C37F7767B77_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x13C25780)
#define CLASS_2_49D69C37F7767B77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C251E0)
#define CLASS_2_49D69C37F7767B77_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13C258B0)
#define CLASS_2_49D69C37F7767B77_TICK_OFFSET UNITYSDK_OFFSET(0x13C25920)
#define CLASS_2_49D69C37F7767B77__CTOR_OFFSET UNITYSDK_OFFSET(0x13C250A0)

inline static constexpr unsigned int Class_2_49D69C37F7767B77_TypeDefinitionIndex = 54833;

class Class_2_49D69C37F7767B77 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::NotifyHandler* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_F3391C70DC37088D* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::TalkBehaviorRow*>* Field_2_4; // 0x38
	::RPG::GameCore::ShowShop* Field_2_5; // 0x40
	::RPG::Client::LuaUIController* Field_2_6; // 0x48
	::Il2CppArray<::System::Int32>* Field_2_7; // 0x50
	::System::Double Field_2_8; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowShop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowShop*))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_638DE61E5889BBE5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_METHOD_2_638DE61E5889BBE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Void Method_2_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_METHOD_2_68805403250CC013_OFFSET))(this);
	}

	::System::Boolean Method_2_8BA81D51FB5D5B30()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_METHOD_2_8BA81D51FB5D5B30_OFFSET))(this);
	}

	::System::String* Method_2_B88E6D62135C4817(::RPG::GameCore::TalkBehaviorRow* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TalkBehaviorRow*))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_METHOD_2_B88E6D62135C4817_OFFSET))(this, a1);
	}
};
