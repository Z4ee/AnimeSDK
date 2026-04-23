#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LocalizationManager; }
namespace RPG::Client { class SimpleText; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }

#define CLASS_1_0E93F5233A379C3C_METHOD_1_0301C39D5C846C62_OFFSET UNITYSDK_OFFSET(0x11E79830)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x11E79E60)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x11E79A50)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_1A70104C39DB877A_OFFSET UNITYSDK_OFFSET(0x11E799D0)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_1E85A0F29898503F_OFFSET UNITYSDK_OFFSET(0x11E79D10)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0x11E79E00)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_260A30BB04EA59A0_OFFSET UNITYSDK_OFFSET(0x11E79C00)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x11E79F20)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_62F23DC9D50B7C30_OFFSET UNITYSDK_OFFSET(0x11E79F40)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_7B9D052C06E961F6_OFFSET UNITYSDK_OFFSET(0x11E7A100)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_9EB0BC18871AB79D_OFFSET UNITYSDK_OFFSET(0x11E7A200)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_A136AB76EB5E8B3E_OFFSET UNITYSDK_OFFSET(0x11E79E80)
#define CLASS_1_0E93F5233A379C3C_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x11E79F00)
#define CLASS_1_0E93F5233A379C3C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E79950)

inline static constexpr unsigned int Class_1_0E93F5233A379C3C_TypeDefinitionIndex = 66676;

class Class_1_0E93F5233A379C3C : public ::System::Object
{
public:
	::UnityEngine::Font* Field_1_1; // 0x10
	::UnityEngine::Font* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_1_4; // 0x20
	::UnityEngine::Font* Field_1_3; // 0x28
	::RPG::Client::SimpleText* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C__CTOR_OFFSET))(this);
	}

	static ::Class_1_0E93F5233A379C3C* Method_1_0301C39D5C846C62(::RPG::Client::SimpleText* a1)
	{
		return ((::Class_1_0E93F5233A379C3C*(*)(::RPG::Client::SimpleText*))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_0301C39D5C846C62_OFFSET))(a1);
	}

	::System::Void Method_1_1A70104C39DB877A(::UnityEngine::Font* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_1A70104C39DB877A_OFFSET))(this, a1);
	}

	::System::Void Method_1_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_1_260A30BB04EA59A0(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_260A30BB04EA59A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_A136AB76EB5E8B3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_A136AB76EB5E8B3E_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1E85A0F29898503F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_1E85A0F29898503F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_62F23DC9D50B7C30(::UnityEngine::Font* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_62F23DC9D50B7C30_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7B9D052C06E961F6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_7B9D052C06E961F6_OFFSET))(this, a1);
	}

	::RPG::Client::LocalizationManager* Method_1_9EB0BC18871AB79D()
	{
		return ((::RPG::Client::LocalizationManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E93F5233A379C3C_METHOD_1_9EB0BC18871AB79D_OFFSET))(this);
	}
};
