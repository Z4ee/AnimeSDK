#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class PlanetFesPlaySpinAnim; }
namespace RPG::GameCore { class PlanetFesAnimComposite; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1843F34CD870B329_METHOD_3_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x8EA79A0)
#define CLASS_3_1843F34CD870B329_METHOD_3_31E86D323941837E_OFFSET UNITYSDK_OFFSET(0x8EA7CF0)
#define CLASS_3_1843F34CD870B329_METHOD_3_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x8EA7400)
#define CLASS_3_1843F34CD870B329_METHOD_3_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x8EA7810)
#define CLASS_3_1843F34CD870B329_METHOD_3_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0x8EA7BE0)
#define CLASS_3_1843F34CD870B329_METHOD_3_A3BCE5C58B6352D4_OFFSET UNITYSDK_OFFSET(0x8EA7DD0)
#define CLASS_3_1843F34CD870B329_METHOD_3_D8A221B7736187A2_OFFSET UNITYSDK_OFFSET(0x8EA8110)
#define CLASS_3_1843F34CD870B329_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8EA72B0)
#define CLASS_3_1843F34CD870B329_TICK_OFFSET UNITYSDK_OFFSET(0x8EA80A0)
#define CLASS_3_1843F34CD870B329__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA7260)
#define CLASS_3_1843F34CD870B329___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8EA8240)

inline static constexpr unsigned int Class_3_1843F34CD870B329_TypeDefinitionIndex = 46999;

class Class_3_1843F34CD870B329 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::PlanetFesPlaySpinAnim*>
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x28
	::System::UInt32 Field_3_1; // 0x30
	::System::Single Field_3_3; // 0x34
	::RPG::Client::TextID Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlanetFesPlaySpinAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlanetFesPlaySpinAnim*))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_66F42CE2EDA79734_OFFSET))(this);
	}

	::RPG::GameCore::PlanetFesAnimComposite* Method_3_A3BCE5C58B6352D4(::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>* a1)
	{
		return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_A3BCE5C58B6352D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_3_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_3_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_78C62398E94F0FB1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D8A221B7736187A2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_D8A221B7736187A2_OFFSET))(this);
	}

	::System::Boolean Method_3_31E86D323941837E(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_31E86D323941837E_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
