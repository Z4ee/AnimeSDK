#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"

class Class_1_99453328B5498AC3;
class Class_1_D4262A10F6A4FF6C;
class Class_3_D3276F1532033C48;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BD5036E8E5743F9F_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xB595160)
#define CLASS_2_BD5036E8E5743F9F_METHOD_2_00AA18458D984D9B_OFFSET UNITYSDK_OFFSET(0xB595330)
#define CLASS_2_BD5036E8E5743F9F_METHOD_2_19ED9DE4E1D12CB7_OFFSET UNITYSDK_OFFSET(0xB595170)
#define CLASS_2_BD5036E8E5743F9F_METHOD_2_2A40F9D4DCC37D1B_OFFSET UNITYSDK_OFFSET(0xB595960)
#define CLASS_2_BD5036E8E5743F9F_METHOD_2_3D7C8028EBFBA9A4_OFFSET UNITYSDK_OFFSET(0xB595390)
#define CLASS_2_BD5036E8E5743F9F_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xB595AE0)
#define CLASS_2_BD5036E8E5743F9F_METHOD_2_A91C1A5D8985B032_OFFSET UNITYSDK_OFFSET(0xB5954D0)
#define CLASS_2_BD5036E8E5743F9F_METHOD_2_C25E44C9D7FF4E95_OFFSET UNITYSDK_OFFSET(0xB5965D0)
#define CLASS_2_BD5036E8E5743F9F_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0xB596090)
#define CLASS_2_BD5036E8E5743F9F_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xB596300)
#define CLASS_2_BD5036E8E5743F9F_TICK_OFFSET UNITYSDK_OFFSET(0xB595E80)
#define CLASS_2_BD5036E8E5743F9F__CTOR_OFFSET UNITYSDK_OFFSET(0xB596720)

inline static constexpr unsigned int Class_2_BD5036E8E5743F9F_TypeDefinitionIndex = 53541;

class Class_2_BD5036E8E5743F9F : public ::Class_1_5BBB2050B3F3F683
{
public:
	// static const ::System::String* JDMIDKBOFBJ; // 0x0
	::System::Collections::Generic::List_1<::System::String*>* OKDHBEOMKDE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_99453328B5498AC3*>* HAKIAADFKCA; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::LevelGraph*>* MOFIJIONIPJ; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_D4262A10F6A4FF6C*>* KCJEFLOKKBN; // 0x38
	::System::Collections::Generic::List_1<::Class_1_D4262A10F6A4FF6C*>* DIOPDHFCLAL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F__CTOR_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F_GET_NEEDTICK_OFFSET))(this);
	}

	::Class_1_99453328B5498AC3* Method_2_19ED9DE4E1D12CB7(::System::String* a1)
	{
		return ((::Class_1_99453328B5498AC3*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F_METHOD_2_19ED9DE4E1D12CB7_OFFSET))(this, a1);
	}

	::Class_1_99453328B5498AC3* Method_2_3D7C8028EBFBA9A4(::System::String* a1)
	{
		return ((::Class_1_99453328B5498AC3*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F_METHOD_2_3D7C8028EBFBA9A4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A91C1A5D8985B032(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::Class_3_D3276F1532033C48* a3, ::Class_1_99453328B5498AC3* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::Class_3_D3276F1532033C48*, ::Class_1_99453328B5498AC3*))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F_METHOD_2_A91C1A5D8985B032_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2A40F9D4DCC37D1B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F_METHOD_2_2A40F9D4DCC37D1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_C25E44C9D7FF4E95(::RPG::GameCore::LevelGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraph*))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F_METHOD_2_C25E44C9D7FF4E95_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	static ::System::String* Method_2_00AA18458D984D9B(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BD5036E8E5743F9F_METHOD_2_00AA18458D984D9B_OFFSET))(a1);
	}
};
