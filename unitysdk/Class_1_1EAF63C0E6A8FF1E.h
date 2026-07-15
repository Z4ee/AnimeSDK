#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EAF63C0E6A8FF1E_Class_1_A85213F68B5074E9_2;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1EAF63C0E6A8FF1E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188D1780)
#define CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_0D4D447F31661D06_OFFSET UNITYSDK_OFFSET(0x188D1B10)
#define CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_2FD335D577AA965B_OFFSET UNITYSDK_OFFSET(0x188D1900)
#define CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_649ABED7C739D247_OFFSET UNITYSDK_OFFSET(0x188D1A50)
#define CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_687D729E0EE2E034_OFFSET UNITYSDK_OFFSET(0x188D1AB0)
#define CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_ADFDC19BAC07DCBD_OFFSET UNITYSDK_OFFSET(0x188D1DD0)
#define CLASS_1_1EAF63C0E6A8FF1E__CTOR_OFFSET UNITYSDK_OFFSET(0x188D1F50)

inline static constexpr unsigned int Class_1_1EAF63C0E6A8FF1E_TypeDefinitionIndex = 53505;

class Class_1_1EAF63C0E6A8FF1E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1EAF63C0E6A8FF1E_Class_1_A85213F68B5074E9_2*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

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

	::System::Void Method_1_687D729E0EE2E034(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_687D729E0EE2E034_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D4D447F31661D06(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_0D4D447F31661D06_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_ADFDC19BAC07DCBD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E_METHOD_1_ADFDC19BAC07DCBD_OFFSET))(this, a1, a2);
	}
};
