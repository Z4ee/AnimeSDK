#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerShape.h"
#include "unitysdk/System/Object.h"

class Class_1_076B09D612E9D640;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace UnityEngine { class Collider; }

#define CLASS_1_E196EACD18D13E7F_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC3877E0)
#define CLASS_1_E196EACD18D13E7F_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC387BD0)
#define CLASS_1_E196EACD18D13E7F_METHOD_1_2FD47D84D8B73393_OFFSET UNITYSDK_OFFSET(0xC388B40)
#define CLASS_1_E196EACD18D13E7F_METHOD_1_68F469B0CAFFA6D4_OFFSET UNITYSDK_OFFSET(0xC3884C0)
#define CLASS_1_E196EACD18D13E7F_METHOD_1_7E9C4D81D04C3024_OFFSET UNITYSDK_OFFSET(0xC387C20)
#define CLASS_1_E196EACD18D13E7F_METHOD_1_8540A8E78D530EAC_OFFSET UNITYSDK_OFFSET(0xC388230)
#define CLASS_1_E196EACD18D13E7F_METHOD_1_ABFDCAB2EBE17174_OFFSET UNITYSDK_OFFSET(0xC387830)
#define CLASS_1_E196EACD18D13E7F_METHOD_1_B462D93B282D9CB8_OFFSET UNITYSDK_OFFSET(0xC387F80)
#define CLASS_1_E196EACD18D13E7F_METHOD_1_B8AAD0A1EB768C54_OFFSET UNITYSDK_OFFSET(0xC389300)
#define CLASS_1_E196EACD18D13E7F_METHOD_1_C3EF098065480BAC_OFFSET UNITYSDK_OFFSET(0xC388270)
#define CLASS_1_E196EACD18D13E7F_METHOD_1_EDC14BF43D2DE2A9_OFFSET UNITYSDK_OFFSET(0xC387A90)
#define CLASS_1_E196EACD18D13E7F_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xC387E30)
#define CLASS_1_E196EACD18D13E7F__CCTOR_OFFSET UNITYSDK_OFFSET(0xC389530)
#define CLASS_1_E196EACD18D13E7F__CTOR_OFFSET UNITYSDK_OFFSET(0xC387670)

inline static constexpr unsigned int Class_1_E196EACD18D13E7F_TypeDefinitionIndex = 77151;

class Class_1_E196EACD18D13E7F : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_MCNHCAPBMDG()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E196EACD18D13E7F_TypeDefinitionIndex)->GetStaticField(0xD1C0);
	}
	static ::System::Int32* StaticGet_OKABKDMPCEA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E196EACD18D13E7F_TypeDefinitionIndex)->GetStaticField(0x2CE0);
	}
	// static const ::System::Int32 BBLNFACHMEF = 0x20; // 0x0
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* MMIBEFDMPCC; // 0x10
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x18
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* ICFGGKMIHDG; // 0x20
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x28

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F__CCTOR_OFFSET))();
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_EXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_ABFDCAB2EBE17174()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_METHOD_1_ABFDCAB2EBE17174_OFFSET))(this);
	}

	::System::Void Method_1_7E9C4D81D04C3024()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_METHOD_1_7E9C4D81D04C3024_OFFSET))(this);
	}

	static ::System::Boolean Method_1_8540A8E78D530EAC(::RPG::GameCore::TriggerShape a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TriggerShape))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_METHOD_1_8540A8E78D530EAC_OFFSET))(a1);
	}

	::System::Void Method_1_B462D93B282D9CB8(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_METHOD_1_B462D93B282D9CB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDC14BF43D2DE2A9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_METHOD_1_EDC14BF43D2DE2A9_OFFSET))(this);
	}

	::System::Void Method_1_C3EF098065480BAC(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_METHOD_1_C3EF098065480BAC_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_2FD47D84D8B73393(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::LevelTriggerInfo* a2, ::Il2CppArray<::UnityEngine::Collider*>* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::LevelTriggerInfo*, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_METHOD_1_2FD47D84D8B73393_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_B9E8C2EEAA5C96EC* Method_1_B8AAD0A1EB768C54(::Class_3_1E4F9B0ED3BF21DE* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::Class_3_1E4F9B0ED3BF21DE*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_METHOD_1_B8AAD0A1EB768C54_OFFSET))(a1, a2);
	}

	::System::Void Method_1_68F469B0CAFFA6D4(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_076B09D612E9D640* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_076B09D612E9D640*))((::PBYTE)hIl2Cpp + CLASS_1_E196EACD18D13E7F_METHOD_1_68F469B0CAFFA6D4_OFFSET))(this, a1, a2);
	}
};
