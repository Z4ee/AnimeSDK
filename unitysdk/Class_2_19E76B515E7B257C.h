#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F77BB6F5FCE2E0B;
class Class_1_A1B5BC940FB8DDEF;
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class AIPathwayInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_19E76B515E7B257C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x906BBE0)
#define CLASS_2_19E76B515E7B257C_METHOD_2_04C6EFA8F5AD4F9A_OFFSET UNITYSDK_OFFSET(0x906C950)
#define CLASS_2_19E76B515E7B257C_METHOD_2_0C7C385E57DDA023_OFFSET UNITYSDK_OFFSET(0x906BC60)
#define CLASS_2_19E76B515E7B257C_METHOD_2_302CA4E328D1DD69_OFFSET UNITYSDK_OFFSET(0x906BD30)
#define CLASS_2_19E76B515E7B257C_METHOD_2_336120EF642DC4EA_OFFSET UNITYSDK_OFFSET(0x906C150)
#define CLASS_2_19E76B515E7B257C_METHOD_2_4E1EEF4BC68D03C0_OFFSET UNITYSDK_OFFSET(0x906C030)
#define CLASS_2_19E76B515E7B257C_METHOD_2_4F0621B5DE26BF9C_OFFSET UNITYSDK_OFFSET(0x906C760)
#define CLASS_2_19E76B515E7B257C_METHOD_2_53FBD05DF054F77A_OFFSET UNITYSDK_OFFSET(0x906C620)
#define CLASS_2_19E76B515E7B257C_METHOD_2_557C45505559DFED_1_OFFSET UNITYSDK_OFFSET(0x906C350)
#define CLASS_2_19E76B515E7B257C_METHOD_2_557C45505559DFED_OFFSET UNITYSDK_OFFSET(0x906D150)
#define CLASS_2_19E76B515E7B257C_METHOD_2_7545401958F81DD3_OFFSET UNITYSDK_OFFSET(0x906D250)
#define CLASS_2_19E76B515E7B257C_METHOD_2_A005D1E9615FB4AB_OFFSET UNITYSDK_OFFSET(0x906C4E0)
#define CLASS_2_19E76B515E7B257C_METHOD_2_BBCFE9CEEE727C9B_OFFSET UNITYSDK_OFFSET(0x906C410)
#define CLASS_2_19E76B515E7B257C_METHOD_2_BDD17ADDEF3F1F3E_OFFSET UNITYSDK_OFFSET(0x906C0D0)
#define CLASS_2_19E76B515E7B257C_METHOD_2_C22B805882144C0C_OFFSET UNITYSDK_OFFSET(0x906D210)
#define CLASS_2_19E76B515E7B257C_METHOD_2_D106DB646F1C31A1_OFFSET UNITYSDK_OFFSET(0x906CB10)
#define CLASS_2_19E76B515E7B257C_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x906D530)
#define CLASS_2_19E76B515E7B257C_METHOD_2_E5212F5B9CBB6229_OFFSET UNITYSDK_OFFSET(0x906BF30)
#define CLASS_2_19E76B515E7B257C_METHOD_2_F04A5FDAB04749EB_OFFSET UNITYSDK_OFFSET(0x906CFB0)
#define CLASS_2_19E76B515E7B257C__CTOR_OFFSET UNITYSDK_OFFSET(0x906BB00)

inline static constexpr unsigned int Class_2_19E76B515E7B257C_TypeDefinitionIndex = 53060;

class Class_2_19E76B515E7B257C : public ::RPG::GameCore::GameComponentBase
{
public:
	::Il2CppArray<::RPG::GameCore::AIPathwayInfo*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_A1B5BC940FB8DDEF*>* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::System::Boolean>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0C7C385E57DDA023(::Il2CppArray<::RPG::GameCore::AIPathwayInfo*>* a1, ::System::UInt32 a2, ::RPG::Client::Map* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AIPathwayInfo*>*, ::System::UInt32, ::RPG::Client::Map*))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_0C7C385E57DDA023_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_302CA4E328D1DD69(::RPG::GameCore::WaypathUsageType a1, ::RPG::GameCore::AIPathwayInfo* a2, ::RPG::Client::Map* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::RPG::GameCore::AIPathwayInfo*, ::RPG::Client::Map*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_302CA4E328D1DD69_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E5212F5B9CBB6229(::RPG::GameCore::WaypathUsageType a1, ::Class_1_A1B5BC940FB8DDEF* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::Class_1_A1B5BC940FB8DDEF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_E5212F5B9CBB6229_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4E1EEF4BC68D03C0(::RPG::GameCore::WaypathUsageType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_4E1EEF4BC68D03C0_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIPathwayInfo* Method_2_BDD17ADDEF3F1F3E(::System::Int32 a1)
	{
		return ((::RPG::GameCore::AIPathwayInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_BDD17ADDEF3F1F3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_336120EF642DC4EA(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_336120EF642DC4EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BBCFE9CEEE727C9B(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_BBCFE9CEEE727C9B_OFFSET))(this, a1);
	}

	::Class_1_5F77BB6F5FCE2E0B* Method_2_A005D1E9615FB4AB(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::Class_1_5F77BB6F5FCE2E0B*(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_A005D1E9615FB4AB_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_53FBD05DF054F77A(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_53FBD05DF054F77A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F0621B5DE26BF9C(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_4F0621B5DE26BF9C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D106DB646F1C31A1(::RPG::GameCore::WaypathUsageType a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_D106DB646F1C31A1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_04C6EFA8F5AD4F9A(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_04C6EFA8F5AD4F9A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F04A5FDAB04749EB(::RPG::GameCore::WaypathUsageType a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaypathUsageType, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_F04A5FDAB04749EB_OFFSET))(this, a1, a2);
	}

	::Class_1_A1B5BC940FB8DDEF* Method_2_557C45505559DFED(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::Class_1_A1B5BC940FB8DDEF*(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_557C45505559DFED_OFFSET))(this, a1);
	}

	::Class_1_A1B5BC940FB8DDEF* Method_2_557C45505559DFED_1(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::Class_1_A1B5BC940FB8DDEF*(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_557C45505559DFED_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_A1B5BC940FB8DDEF*>* Method_2_C22B805882144C0C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::WaypathUsageType, ::Class_1_A1B5BC940FB8DDEF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_C22B805882144C0C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7545401958F81DD3(::RPG::GameCore::WaypathUsageType a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::WaypathUsageType))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_7545401958F81DD3_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_19E76B515E7B257C_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}
};
