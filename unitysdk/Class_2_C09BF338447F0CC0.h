#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_965;
class Class_1_F41834AAE9ED4443;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_C09BF338447F0CC0_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x97A2F00)
#define CLASS_2_C09BF338447F0CC0_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x97A2FA0)
#define CLASS_2_C09BF338447F0CC0_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x97A2B70)
#define CLASS_2_C09BF338447F0CC0_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x97A2E40)
#define CLASS_2_C09BF338447F0CC0_METHOD_2_C63FFAE7418AC5EE_OFFSET UNITYSDK_OFFSET(0x97A2CC0)
#define CLASS_2_C09BF338447F0CC0_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x97A31B0)
#define CLASS_2_C09BF338447F0CC0_METHOD_2_D7B57D4A6E55D8F9_OFFSET UNITYSDK_OFFSET(0x97A2BD0)
#define CLASS_2_C09BF338447F0CC0__CTOR_OFFSET UNITYSDK_OFFSET(0x97A3020)
#define CLASS_2_C09BF338447F0CC0___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x97A3220)
#define CLASS_2_C09BF338447F0CC0___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x97A3280)

inline static constexpr unsigned int Class_2_C09BF338447F0CC0_TypeDefinitionIndex = 66225;

class Class_2_C09BF338447F0CC0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillButtonAdditionalStatusType, ::Class_0_16E4307DCC419505_965*>* Field_2_1; // 0x60
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::SkillButtonAdditionalStatusType>* Field_2_2; // 0x68
	::RPG::Client::UISkillIndex Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C09BF338447F0CC0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_C09BF338447F0CC0_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7B57D4A6E55D8F9(::Class_1_F41834AAE9ED4443* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F41834AAE9ED4443*))((::PBYTE)hIl2Cpp + CLASS_2_C09BF338447F0CC0_METHOD_2_D7B57D4A6E55D8F9_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_965* Method_2_C63FFAE7418AC5EE(::RPG::GameCore::SkillButtonAdditionalStatusType a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC419505_965*(*)(::PVOID, ::RPG::GameCore::SkillButtonAdditionalStatusType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C09BF338447F0CC0_METHOD_2_C63FFAE7418AC5EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C09BF338447F0CC0_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C09BF338447F0CC0_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C09BF338447F0CC0_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_C09BF338447F0CC0_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C09BF338447F0CC0___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C09BF338447F0CC0___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
