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

#define CLASS_2_24601C514E9FC47A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E71AD0)
#define CLASS_2_24601C514E9FC47A_METHOD_2_638DE61E5889BBE5_OFFSET UNITYSDK_OFFSET(0x15E72500)
#define CLASS_2_24601C514E9FC47A_METHOD_2_8BA81D51FB5D5B30_OFFSET UNITYSDK_OFFSET(0x15E723C0)
#define CLASS_2_24601C514E9FC47A_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x15E71F10)
#define CLASS_2_24601C514E9FC47A_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15E722F0)
#define CLASS_2_24601C514E9FC47A_METHOD_2_B88E6D62135C4817_OFFSET UNITYSDK_OFFSET(0x15E72840)
#define CLASS_2_24601C514E9FC47A_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x15E720F0)
#define CLASS_2_24601C514E9FC47A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E71B10)
#define CLASS_2_24601C514E9FC47A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E72220)
#define CLASS_2_24601C514E9FC47A_TICK_OFFSET UNITYSDK_OFFSET(0x15E72290)
#define CLASS_2_24601C514E9FC47A__CTOR_OFFSET UNITYSDK_OFFSET(0x15E719A0)

inline static constexpr unsigned int Class_2_24601C514E9FC47A_TypeDefinitionIndex = 58691;

class Class_2_24601C514E9FC47A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::NotifyHandler* ANMLHFBCPCF; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Il2CppArray<::System::Int32>* CFKLLAOPMOG; // 0x28
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::TalkBehaviorRow*>* KKOHGABGELH; // 0x38
	::Class_1_F3391C70DC37088D* PJHNKKIDLBE; // 0x40
	::RPG::GameCore::ShowShop* OFKGLJOAMLD; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MHMCJJDFBGK; // 0x50
	::System::Double OLFCPNBKHLO; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowShop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowShop*))((::PBYTE)hIl2Cpp + CLASS_2_24601C514E9FC47A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24601C514E9FC47A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24601C514E9FC47A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24601C514E9FC47A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_24601C514E9FC47A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24601C514E9FC47A_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_638DE61E5889BBE5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24601C514E9FC47A_METHOD_2_638DE61E5889BBE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24601C514E9FC47A_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24601C514E9FC47A_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::System::Boolean Method_2_8BA81D51FB5D5B30()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24601C514E9FC47A_METHOD_2_8BA81D51FB5D5B30_OFFSET))(this);
	}

	::System::String* Method_2_B88E6D62135C4817(::RPG::GameCore::TalkBehaviorRow* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TalkBehaviorRow*))((::PBYTE)hIl2Cpp + CLASS_2_24601C514E9FC47A_METHOD_2_B88E6D62135C4817_OFFSET))(this, a1);
	}
};
