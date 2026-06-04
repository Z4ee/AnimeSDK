#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LocalizationManager; }
namespace RPG::Client { class SimpleText; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }

#define CLASS_1_B2C62D16DB8AC428_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13ABE450)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x13ABE040)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_1A70104C39DB877A_OFFSET UNITYSDK_OFFSET(0x13ABDFC0)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_1E85A0F29898503F_OFFSET UNITYSDK_OFFSET(0x13ABE300)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0x13ABE3F0)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_260A30BB04EA59A0_OFFSET UNITYSDK_OFFSET(0x13ABE1F0)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13ABE510)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_7B9D052C06E961F6_OFFSET UNITYSDK_OFFSET(0x13ABE6A0)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_8180BEEEC2B31277_OFFSET UNITYSDK_OFFSET(0x13ABE530)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_9EB0BC18871AB79D_OFFSET UNITYSDK_OFFSET(0x13ABE790)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_A136AB76EB5E8B3E_OFFSET UNITYSDK_OFFSET(0x13ABE470)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_ACADB71605FDCBAB_OFFSET UNITYSDK_OFFSET(0x13ABDE30)
#define CLASS_1_B2C62D16DB8AC428_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x13ABE4F0)
#define CLASS_1_B2C62D16DB8AC428__CTOR_OFFSET UNITYSDK_OFFSET(0x13ABDF30)

inline static constexpr unsigned int Class_1_B2C62D16DB8AC428_TypeDefinitionIndex = 67616;

class Class_1_B2C62D16DB8AC428 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_1_0; // 0x10
	::UnityEngine::Font* Field_1_1; // 0x18
	::UnityEngine::Font* Field_1_2; // 0x20
	::UnityEngine::Font* Field_1_3; // 0x28
	::RPG::Client::SimpleText* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428__CTOR_OFFSET))(this);
	}

	static ::Class_1_B2C62D16DB8AC428* Method_1_ACADB71605FDCBAB(::RPG::Client::SimpleText* a1)
	{
		return ((::Class_1_B2C62D16DB8AC428*(*)(::RPG::Client::SimpleText*))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_ACADB71605FDCBAB_OFFSET))(a1);
	}

	::System::Void Method_1_1A70104C39DB877A(::UnityEngine::Font* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_1A70104C39DB877A_OFFSET))(this, a1);
	}

	::System::Void Method_1_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_1_260A30BB04EA59A0(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_260A30BB04EA59A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_A136AB76EB5E8B3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_A136AB76EB5E8B3E_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1E85A0F29898503F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_1E85A0F29898503F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8180BEEEC2B31277(::UnityEngine::Font* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_8180BEEEC2B31277_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7B9D052C06E961F6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_7B9D052C06E961F6_OFFSET))(this, a1);
	}

	::RPG::Client::LocalizationManager* Method_1_9EB0BC18871AB79D()
	{
		return ((::RPG::Client::LocalizationManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C62D16DB8AC428_METHOD_1_9EB0BC18871AB79D_OFFSET))(this);
	}
};
