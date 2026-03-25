#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_C03CD36EC3EB34E0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelEntityTeamFormationStateChange; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_26141CF5CD504950_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8CA5F70)
#define CLASS_2_26141CF5CD504950_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8CA61E0)
#define CLASS_2_26141CF5CD504950_METHOD_2_08718B4A1EBB7CDF_OFFSET UNITYSDK_OFFSET(0x8CA5960)
#define CLASS_2_26141CF5CD504950_METHOD_2_361B3104908CEF1E_OFFSET UNITYSDK_OFFSET(0x8CA56A0)
#define CLASS_2_26141CF5CD504950_METHOD_2_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0x8CA5580)
#define CLASS_2_26141CF5CD504950_METHOD_2_83E681D36752DE7B_OFFSET UNITYSDK_OFFSET(0x8CA5BC0)
#define CLASS_2_26141CF5CD504950_METHOD_2_9DA22981075DD999_OFFSET UNITYSDK_OFFSET(0x8CA5850)
#define CLASS_2_26141CF5CD504950_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x8CA5DB0)
#define CLASS_2_26141CF5CD504950_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8CA5CE0)
#define CLASS_2_26141CF5CD504950_METHOD_2_ABA028F1D169876C_OFFSET UNITYSDK_OFFSET(0x8CA58F0)
#define CLASS_2_26141CF5CD504950_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x8CA5E50)
#define CLASS_2_26141CF5CD504950_METHOD_2_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0x8CA5B50)
#define CLASS_2_26141CF5CD504950__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA6420)
#define CLASS_2_26141CF5CD504950___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8CA6500)
#define CLASS_2_26141CF5CD504950___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8CA6560)

inline static constexpr unsigned int Class_2_26141CF5CD504950_TypeDefinitionIndex = 58644;

class Class_2_26141CF5CD504950 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_1 = 0xA; // 0x0
	::RPG::GameCore::TurnBasedGameMode* Field_2_0; // 0x60
	::System::Collections::Generic::Stack_1<::Class_2_C03CD36EC3EB34E0*>* Field_2_3; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_C03CD36EC3EB34E0*>* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3C111959D3BB5616(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_METHOD_2_3C111959D3BB5616_OFFSET))(this, a1);
	}

	::System::Void Method_2_9DA22981075DD999(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_METHOD_2_9DA22981075DD999_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABA028F1D169876C(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_METHOD_2_ABA028F1D169876C_OFFSET))(this, a1);
	}

	::System::Void Method_2_08718B4A1EBB7CDF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_METHOD_2_08718B4A1EBB7CDF_OFFSET))(this, a1);
	}

	::System::Void Method_2_361B3104908CEF1E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_METHOD_2_361B3104908CEF1E_OFFSET))(this, a1);
	}

	::Class_2_C03CD36EC3EB34E0* Method_2_DCEC38F05597CB7D()
	{
		return ((::Class_2_C03CD36EC3EB34E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_METHOD_2_DCEC38F05597CB7D_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedGameMode* Method_2_83E681D36752DE7B()
	{
		return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_METHOD_2_83E681D36752DE7B_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26141CF5CD504950___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
