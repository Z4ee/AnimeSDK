#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6838003491506F6E;
class Class_1_D0AE2E76E734D5CA;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D2AED4305780B250_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A120D0)
#define CLASS_1_D2AED4305780B250_METHOD_1_2AAB40918C8277F3_OFFSET UNITYSDK_OFFSET(0x18A12490)
#define CLASS_1_D2AED4305780B250_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18A127D0)
#define CLASS_1_D2AED4305780B250_METHOD_1_5D2A544B7C1380CA_OFFSET UNITYSDK_OFFSET(0x18A12340)
#define CLASS_1_D2AED4305780B250_METHOD_1_B3B927A95FA4DBA6_OFFSET UNITYSDK_OFFSET(0x18A12770)
#define CLASS_1_D2AED4305780B250_METHOD_1_C295037F92779A7C_OFFSET UNITYSDK_OFFSET(0x18A122F0)
#define CLASS_1_D2AED4305780B250_METHOD_1_DA0FD3E637B62044_OFFSET UNITYSDK_OFFSET(0x18A126C0)
#define CLASS_1_D2AED4305780B250_METHOD_1_F4C10798A929EC2C_OFFSET UNITYSDK_OFFSET(0x18A11F00)
#define CLASS_1_D2AED4305780B250__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A12890)
#define CLASS_1_D2AED4305780B250__CTOR_OFFSET UNITYSDK_OFFSET(0x18A11700)

inline static constexpr unsigned int Class_1_D2AED4305780B250_TypeDefinitionIndex = 52404;

class Class_1_D2AED4305780B250 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_HAKJOFIFDFG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2AED4305780B250_TypeDefinitionIndex)->GetStaticField(0x14410);
	}
	::Class_1_6838003491506F6E* EFDAADELOHM; // 0x10
	::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_D0AE2E76E734D5CA*>* LKNHKKKELKJ; // 0x20

	::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F4C10798A929EC2C(::RPG::GameCore::LevelSmartObjectInfo* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_METHOD_1_F4C10798A929EC2C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5D2A544B7C1380CA(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_METHOD_1_5D2A544B7C1380CA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2AAB40918C8277F3(::UnityEngine::Vector3 a1, ::System::UInt64& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt64&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_METHOD_1_2AAB40918C8277F3_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_D0AE2E76E734D5CA* Method_1_DA0FD3E637B62044(::System::UInt64 a1)
	{
		return ((::Class_1_D0AE2E76E734D5CA*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_METHOD_1_DA0FD3E637B62044_OFFSET))(this, a1);
	}

	static ::System::UInt64 Method_1_C295037F92779A7C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt64(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_METHOD_1_C295037F92779A7C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B3B927A95FA4DBA6(::System::UInt64 a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::System::UInt64, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_METHOD_1_B3B927A95FA4DBA6_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
