#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EAF63C0E6A8FF1E_Class_1_A85213F68B5074E9_2;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1EAF63C0E6A8FF1E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A3ABB0)
#define CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_2FD335D577AA965B_OFFSET UNITYSDK_OFFSET(0x9A3AD40)
#define CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_5C28A8AFAFD92C5B_OFFSET UNITYSDK_OFFSET(0x9A3AEF0)
#define CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_649ABED7C739D247_OFFSET UNITYSDK_OFFSET(0x9A3AE90)
#define CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_76D2ADC7116CE6F4_OFFSET UNITYSDK_OFFSET(0x9A3B200)
#define CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_94E3ABF1F25BE8BD_OFFSET UNITYSDK_OFFSET(0x9A3AF50)
#define CLASS_1_1EAF63C0E6A8FF1E__CTOR_OFFSET UNITYSDK_OFFSET(0x9A3B390)

inline static constexpr unsigned int Class_1_1EAF63C0E6A8FF1E_TypeDefinitionIndex = 51629;

class Class_1_1EAF63C0E6A8FF1E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1EAF63C0E6A8FF1E_Class_1_A85213F68B5074E9_2*>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 Method_1_2FD335D577AA965B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_2FD335D577AA965B_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_649ABED7C739D247(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_649ABED7C739D247_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C28A8AFAFD92C5B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_5C28A8AFAFD92C5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_94E3ABF1F25BE8BD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_94E3ABF1F25BE8BD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_76D2ADC7116CE6F4(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_76D2ADC7116CE6F4_OFFSET))(this, a1, a2);
	}
};
