#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_44C728FE0F443B70;
class Class_1_61D036A13B263279;
class Class_3_6AF1E5B02897ED63;
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D0AE2E76E734D5CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165B5280)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_05CD40642A37C892_OFFSET UNITYSDK_OFFSET(0x16E29C00)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_100843C949699661_OFFSET UNITYSDK_OFFSET(0x165B56E0)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_3ECA6DAD89AC2431_OFFSET UNITYSDK_OFFSET(0x165B53D0)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x16E2A1B0)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_6FC3678F81998ECE_OFFSET UNITYSDK_OFFSET(0x16E29B00)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_79B3EC1D5E21DC1E_OFFSET UNITYSDK_OFFSET(0x16E29E70)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_7A7CC617EF24CE03_OFFSET UNITYSDK_OFFSET(0x16E2A000)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_8ED07A777D5FD44D_OFFSET UNITYSDK_OFFSET(0x165B5550)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x165B5880)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_CBC45396BE563DFF_OFFSET UNITYSDK_OFFSET(0x16E29D20)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x16E2A180)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x16E2A190)
#define CLASS_1_D0AE2E76E734D5CA_METHOD_1_ED51C46008DA43B8_OFFSET UNITYSDK_OFFSET(0x165B57B0)
#define CLASS_1_D0AE2E76E734D5CA__CTOR_OFFSET UNITYSDK_OFFSET(0x165B4FA0)

inline static constexpr unsigned int Class_1_D0AE2E76E734D5CA_TypeDefinitionIndex = 52397;

class Class_1_D0AE2E76E734D5CA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_44C728FE0F443B70*>* MFGEADHPLHO; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::UInt32>>* HJDEHAMNNLE; // 0x18
	::Class_3_6AF1E5B02897ED63* MEFLLFBJHBD; // 0x20
	::System::Collections::Generic::List_1<::Class_1_61D036A13B263279*>* HJEDLJHJGIO; // 0x28
	::System::UInt64 NJFKHPIHDEF; // 0x30
	::UnityEngine::Vector3 MIFKHBDOGLN; // 0x38
	::System::Single FNCGPGBEMMF; // 0x44

	::System::Void _ctor(::RPG::GameCore::LevelSmartObjectInfo* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectInfo*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_3ECA6DAD89AC2431(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_3ECA6DAD89AC2431_OFFSET))(this, a1);
	}

	::System::Void Method_1_8ED07A777D5FD44D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_8ED07A777D5FD44D_OFFSET))(this, a1);
	}

	::System::Void Method_1_100843C949699661(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_100843C949699661_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED51C46008DA43B8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_ED51C46008DA43B8_OFFSET))(this, a1);
	}

	::Class_1_44C728FE0F443B70* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_44C728FE0F443B70*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6FC3678F81998ECE(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_6FC3678F81998ECE_OFFSET))(this, a1);
	}

	::Class_1_61D036A13B263279* Method_1_05CD40642A37C892(::System::UInt32 a1)
	{
		return ((::Class_1_61D036A13B263279*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_05CD40642A37C892_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBC45396BE563DFF(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_CBC45396BE563DFF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79B3EC1D5E21DC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_79B3EC1D5E21DC1E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7A7CC617EF24CE03(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_7A7CC617EF24CE03_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0AE2E76E734D5CA_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
