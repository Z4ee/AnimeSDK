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

#define CLASS_2_4410E9DE97C8733A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAAFC820)
#define CLASS_2_4410E9DE97C8733A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAAFCAC0)
#define CLASS_2_4410E9DE97C8733A_METHOD_2_04D8BFEA68823B33_OFFSET UNITYSDK_OFFSET(0xAAFC2A0)
#define CLASS_2_4410E9DE97C8733A_METHOD_2_1BAC25F61C22AED9_OFFSET UNITYSDK_OFFSET(0xAAFBF10)
#define CLASS_2_4410E9DE97C8733A_METHOD_2_61C98F474601672A_OFFSET UNITYSDK_OFFSET(0xAAFC230)
#define CLASS_2_4410E9DE97C8733A_METHOD_2_83E681D36752DE7B_OFFSET UNITYSDK_OFFSET(0xAAFC4D0)
#define CLASS_2_4410E9DE97C8733A_METHOD_2_9DA22981075DD999_OFFSET UNITYSDK_OFFSET(0xAAFC190)
#define CLASS_2_4410E9DE97C8733A_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xAAFC6E0)
#define CLASS_2_4410E9DE97C8733A_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xAAFC780)
#define CLASS_2_4410E9DE97C8733A_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xAAFC600)
#define CLASS_2_4410E9DE97C8733A_METHOD_2_ABC6B8234127ADFB_OFFSET UNITYSDK_OFFSET(0xAAFC020)
#define CLASS_2_4410E9DE97C8733A_METHOD_2_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0xAAFC460)
#define CLASS_2_4410E9DE97C8733A__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFCD20)
#define CLASS_2_4410E9DE97C8733A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAAFCE00)
#define CLASS_2_4410E9DE97C8733A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAAFCE60)

inline static constexpr unsigned int Class_2_4410E9DE97C8733A_TypeDefinitionIndex = 66897;

class Class_2_4410E9DE97C8733A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0xA; // 0x0
	::System::Collections::Generic::Stack_1<::Class_2_C03CD36EC3EB34E0*>* Field_2_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_C03CD36EC3EB34E0*>* Field_2_2; // 0x68
	::RPG::GameCore::TurnBasedGameMode* Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1BAC25F61C22AED9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_METHOD_2_1BAC25F61C22AED9_OFFSET))(this, a1);
	}

	::System::Void Method_2_9DA22981075DD999(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_METHOD_2_9DA22981075DD999_OFFSET))(this, a1);
	}

	::System::Void Method_2_61C98F474601672A(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_METHOD_2_61C98F474601672A_OFFSET))(this, a1);
	}

	::System::Void Method_2_04D8BFEA68823B33(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_METHOD_2_04D8BFEA68823B33_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABC6B8234127ADFB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_METHOD_2_ABC6B8234127ADFB_OFFSET))(this, a1);
	}

	::Class_2_C03CD36EC3EB34E0* Method_2_DCEC38F05597CB7D()
	{
		return ((::Class_2_C03CD36EC3EB34E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_METHOD_2_DCEC38F05597CB7D_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedGameMode* Method_2_83E681D36752DE7B()
	{
		return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_METHOD_2_83E681D36752DE7B_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4410E9DE97C8733A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
