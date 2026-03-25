#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_69FF5DE516C87A66;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::GameCore { class ShowShop; }
namespace RPG::GameCore { class TalkBehaviorRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_49D69C37F7767B77_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA7AC20)
#define CLASS_2_49D69C37F7767B77_METHOD_2_31B86CF031D1C6B2_OFFSET UNITYSDK_OFFSET(0xEA7B5E0)
#define CLASS_2_49D69C37F7767B77_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xEA7B3D0)
#define CLASS_2_49D69C37F7767B77_METHOD_2_B82A6C005D3ADCE3_OFFSET UNITYSDK_OFFSET(0xEA7B4A0)
#define CLASS_2_49D69C37F7767B77_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xEA7B1D0)
#define CLASS_2_49D69C37F7767B77_METHOD_2_E8F333E43144B985_OFFSET UNITYSDK_OFFSET(0xEA7B8B0)
#define CLASS_2_49D69C37F7767B77_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xEA7B0A0)
#define CLASS_2_49D69C37F7767B77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEA7AC60)
#define CLASS_2_49D69C37F7767B77_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEA7B300)
#define CLASS_2_49D69C37F7767B77_TICK_OFFSET UNITYSDK_OFFSET(0xEA7B370)
#define CLASS_2_49D69C37F7767B77__CTOR_OFFSET UNITYSDK_OFFSET(0xEA7AB30)

inline static constexpr unsigned int Class_2_49D69C37F7767B77_TypeDefinitionIndex = 47372;

class Class_2_49D69C37F7767B77 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::NotifyHandler* Field_2_8; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::TalkBehaviorRow*>* Field_2_5; // 0x20
	::Il2CppArray<::System::Int32>* Field_2_4; // 0x28
	::RPG::Client::LuaUIController* Field_2_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_6; // 0x38
	::Class_1_69FF5DE516C87A66* Field_2_7; // 0x40
	::RPG::GameCore::ShowShop* Field_2_0; // 0x48
	::RPG::GameCore::TaskContext* Field_2_1; // 0x50
	::System::Double Field_2_3; // 0x58

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

	::System::Void Method_2_31B86CF031D1C6B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_METHOD_2_31B86CF031D1C6B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Boolean Method_2_B82A6C005D3ADCE3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_METHOD_2_B82A6C005D3ADCE3_OFFSET))(this);
	}

	::System::String* Method_2_E8F333E43144B985(::RPG::GameCore::TalkBehaviorRow* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TalkBehaviorRow*))((::PBYTE)hIl2Cpp + CLASS_2_49D69C37F7767B77_METHOD_2_E8F333E43144B985_OFFSET))(this, a1);
	}
};
