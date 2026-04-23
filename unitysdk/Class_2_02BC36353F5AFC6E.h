#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_1_A509A996D269C6F2_1;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PeiPeiChallengeCheckPoint; }
namespace RPG::GameCore { class PeiPeiChallengeControllerInit; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_02BC36353F5AFC6E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB488C80)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xB48A450)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_13F7EC3A79DD52C7_OFFSET UNITYSDK_OFFSET(0xB489A20)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xB488CD0)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xB489040)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_5DC9989DD20A6DEF_OFFSET UNITYSDK_OFFSET(0xB4898B0)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xB489130)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0xB489CA0)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0xB489E10)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_A1F408C34A3CA2A2_OFFSET UNITYSDK_OFFSET(0xB4896A0)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_ABAF2DCAD651CD1D_OFFSET UNITYSDK_OFFSET(0xB489F00)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_C0D69F22318C86FE_OFFSET UNITYSDK_OFFSET(0xB489B10)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4899D0)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xB48A600)
#define CLASS_2_02BC36353F5AFC6E_METHOD_2_DDBB302CF7A9787C_OFFSET UNITYSDK_OFFSET(0xB489300)
#define CLASS_2_02BC36353F5AFC6E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB488F10)
#define CLASS_2_02BC36353F5AFC6E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB489C60)
#define CLASS_2_02BC36353F5AFC6E_TICK_OFFSET UNITYSDK_OFFSET(0xB488EB0)
#define CLASS_2_02BC36353F5AFC6E__CTOR_OFFSET UNITYSDK_OFFSET(0xB488AD0)

inline static constexpr unsigned int Class_2_02BC36353F5AFC6E_TypeDefinitionIndex = 48935;

class Class_2_02BC36353F5AFC6E : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	// static const ::System::String* Field_2_14; // 0x0
	::RPG::GameCore::PeiPeiChallengeControllerInit* Field_2_5; // 0x18
	::System::Collections::Generic::List_1<::Class_1_A509A996D269C6F2_1*>* Field_2_9; // 0x20
	::RPG::GameCore::RuntimeGroupInfo* Field_2_3; // 0x28
	::RPG::Client::AdventurePhase* Field_2_1; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::System::UInt32 Field_2_2; // 0x40
	::System::Boolean Field_2_6; // 0x44
	::System::Boolean Field_2_7; // 0x45
	::System::Int32 Field_2_0; // 0x48
	::System::Int32 Field_2_8; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PeiPeiChallengeControllerInit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PeiPeiChallengeControllerInit*))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_DDBB302CF7A9787C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_DDBB302CF7A9787C_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1F408C34A3CA2A2(::RPG::GameCore::PeiPeiChallengeCheckPoint* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PeiPeiChallengeCheckPoint*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_A1F408C34A3CA2A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_2_5DC9989DD20A6DEF(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_5DC9989DD20A6DEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_13F7EC3A79DD52C7(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_13F7EC3A79DD52C7_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_80B76CA3BC860A58(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_80B76CA3BC860A58_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABAF2DCAD651CD1D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_ABAF2DCAD651CD1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_C0D69F22318C86FE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_C0D69F22318C86FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02BC36353F5AFC6E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
