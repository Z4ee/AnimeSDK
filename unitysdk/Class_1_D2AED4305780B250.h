#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6838003491506F6E;
class Class_1_D0AE2E76E734D5CA;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D2AED4305780B250_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CA7900)
#define CLASS_1_D2AED4305780B250_METHOD_1_2AAB40918C8277F3_OFFSET UNITYSDK_OFFSET(0x13CA7CC0)
#define CLASS_1_D2AED4305780B250_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13CA7FE0)
#define CLASS_1_D2AED4305780B250_METHOD_1_5D2A544B7C1380CA_OFFSET UNITYSDK_OFFSET(0x13CA7B70)
#define CLASS_1_D2AED4305780B250_METHOD_1_6B7B9551DCC2C984_OFFSET UNITYSDK_OFFSET(0x13CA7750)
#define CLASS_1_D2AED4305780B250_METHOD_1_A58F29C6DE126D3B_OFFSET UNITYSDK_OFFSET(0x13CA7EF0)
#define CLASS_1_D2AED4305780B250_METHOD_1_B3B927A95FA4DBA6_OFFSET UNITYSDK_OFFSET(0x13CA7F80)
#define CLASS_1_D2AED4305780B250_METHOD_1_C295037F92779A7C_OFFSET UNITYSDK_OFFSET(0x13CA7B20)
#define CLASS_1_D2AED4305780B250__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CA80A0)
#define CLASS_1_D2AED4305780B250__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA7200)

inline static constexpr unsigned int Class_1_D2AED4305780B250_TypeDefinitionIndex = 48731;

class Class_1_D2AED4305780B250 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2AED4305780B250_TypeDefinitionIndex)->GetStaticField(0x13E00);
	}
	::RPG::Client::AdventurePhase* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_D0AE2E76E734D5CA*>* Field_1_2; // 0x18
	::Class_1_6838003491506F6E* Field_1_3; // 0x20

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

	::System::Void Method_1_6B7B9551DCC2C984(::RPG::GameCore::LevelSmartObjectInfo* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_METHOD_1_6B7B9551DCC2C984_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5D2A544B7C1380CA(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_METHOD_1_5D2A544B7C1380CA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2AAB40918C8277F3(::UnityEngine::Vector3 a1, ::System::UInt64& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt64&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_METHOD_1_2AAB40918C8277F3_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_D0AE2E76E734D5CA* Method_1_A58F29C6DE126D3B(::System::UInt64 a1)
	{
		return ((::Class_1_D0AE2E76E734D5CA*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_D2AED4305780B250_METHOD_1_A58F29C6DE126D3B_OFFSET))(this, a1);
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
