#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7976A8B64BD43B9;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9CD14B77C5C96D3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2281A0)
#define CLASS_1_B9CD14B77C5C96D3_METHOD_1_3C1993BA8E720E0B_OFFSET UNITYSDK_OFFSET(0xA227F70)
#define CLASS_1_B9CD14B77C5C96D3_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA2280B0)
#define CLASS_1_B9CD14B77C5C96D3_METHOD_1_53FC3799497FA031_OFFSET UNITYSDK_OFFSET(0xA228540)
#define CLASS_1_B9CD14B77C5C96D3_METHOD_1_BB5C48EF84B6AD3D_OFFSET UNITYSDK_OFFSET(0xA2283E0)
#define CLASS_1_B9CD14B77C5C96D3_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xA228300)
#define CLASS_1_B9CD14B77C5C96D3_METHOD_1_D15F52B395531E3F_OFFSET UNITYSDK_OFFSET(0xA228250)
#define CLASS_1_B9CD14B77C5C96D3_METHOD_1_DA8F6132CBA686DE_OFFSET UNITYSDK_OFFSET(0xA2285C0)
#define CLASS_1_B9CD14B77C5C96D3_METHOD_1_E81CEED1B22DE2BF_OFFSET UNITYSDK_OFFSET(0xA228640)
#define CLASS_1_B9CD14B77C5C96D3_METHOD_1_F2802EC2E22FF44C_OFFSET UNITYSDK_OFFSET(0xA228770)
#define CLASS_1_B9CD14B77C5C96D3__CTOR_OFFSET UNITYSDK_OFFSET(0xA228030)

inline static constexpr unsigned int Class_1_B9CD14B77C5C96D3_TypeDefinitionIndex = 59246;

class Class_1_B9CD14B77C5C96D3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D7976A8B64BD43B9*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_D7976A8B64BD43B9*>* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9CD14B77C5C96D3__CTOR_OFFSET))(this);
	}

	static ::Class_1_B9CD14B77C5C96D3* Method_1_3C1993BA8E720E0B(::System::Collections::Generic::List_1<::Class_1_D7976A8B64BD43B9*>* a1)
	{
		return ((::Class_1_B9CD14B77C5C96D3*(*)(::System::Collections::Generic::List_1<::Class_1_D7976A8B64BD43B9*>*))((::PBYTE)hIl2Cpp + CLASS_1_B9CD14B77C5C96D3_METHOD_1_3C1993BA8E720E0B_OFFSET))(a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9CD14B77C5C96D3_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9CD14B77C5C96D3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D15F52B395531E3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9CD14B77C5C96D3_METHOD_1_D15F52B395531E3F_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B9CD14B77C5C96D3_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_53FC3799497FA031(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B9CD14B77C5C96D3_METHOD_1_53FC3799497FA031_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA8F6132CBA686DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B9CD14B77C5C96D3_METHOD_1_DA8F6132CBA686DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB5C48EF84B6AD3D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B9CD14B77C5C96D3_METHOD_1_BB5C48EF84B6AD3D_OFFSET))(this, a1);
	}

	::System::Void Method_1_F2802EC2E22FF44C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B9CD14B77C5C96D3_METHOD_1_F2802EC2E22FF44C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E81CEED1B22DE2BF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B9CD14B77C5C96D3_METHOD_1_E81CEED1B22DE2BF_OFFSET))(this, a1);
	}
};
