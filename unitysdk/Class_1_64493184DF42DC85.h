#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_64493184DF42DC85_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A01A540)
#define CLASS_1_64493184DF42DC85_METHOD_1_6F63656E711A5360_OFFSET UNITYSDK_OFFSET(0x1A01A250)
#define CLASS_1_64493184DF42DC85_METHOD_1_721CDDB345E57783_OFFSET UNITYSDK_OFFSET(0x1A01A7F0)
#define CLASS_1_64493184DF42DC85_METHOD_1_82E992240300FB30_1_OFFSET UNITYSDK_OFFSET(0x1A01A200)
#define CLASS_1_64493184DF42DC85_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x1A01A050)
#define CLASS_1_64493184DF42DC85_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1A01A5E0)
#define CLASS_1_64493184DF42DC85_METHOD_1_A6182AC09D578982_OFFSET UNITYSDK_OFFSET(0x1A01A460)
#define CLASS_1_64493184DF42DC85_METHOD_1_C38ED153B3A797F0_OFFSET UNITYSDK_OFFSET(0x1A01A3F0)
#define CLASS_1_64493184DF42DC85_METHOD_1_C82898BA382602FF_OFFSET UNITYSDK_OFFSET(0x1A01A0A0)
#define CLASS_1_64493184DF42DC85_METHOD_1_EAEEDBC56C4FA30C_OFFSET UNITYSDK_OFFSET(0x1A01A670)
#define CLASS_1_64493184DF42DC85__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A01A9D0)
#define CLASS_1_64493184DF42DC85__CTOR_OFFSET UNITYSDK_OFFSET(0x1A01A940)

inline static constexpr unsigned int Class_1_64493184DF42DC85_TypeDefinitionIndex = 41118;

class Class_1_64493184DF42DC85 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_64493184DF42DC85_TypeDefinitionIndex)->GetStaticField(0x8080);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_64493184DF42DC85_TypeDefinitionIndex)->GetStaticField(0x8084);
	}
	::Il2CppArray<::System::Single>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesProperty, ::System::Action_2<::System::Single, ::System::Single>*>* Field_1_3; // 0x18
	::System::Single Field_1_4; // 0x20
	::System::Single Field_1_5; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85__CCTOR_OFFSET))();
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85_METHOD_1_82E992240300FB30_1_OFFSET))(this);
	}

	::System::Void Method_1_6F63656E711A5360(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85_METHOD_1_6F63656E711A5360_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_C38ED153B3A797F0(::RPG::GameCore::ChenLingFesProperty a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingFesProperty))((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85_METHOD_1_C38ED153B3A797F0_OFFSET))(this, a1);
	}

	::System::Single Method_1_A6182AC09D578982(::RPG::GameCore::ChenLingFesProperty a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingFesProperty))((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85_METHOD_1_A6182AC09D578982_OFFSET))(this, a1);
	}

	::System::Void Method_1_C82898BA382602FF(::RPG::GameCore::ChenLingFesProperty a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesProperty, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85_METHOD_1_C82898BA382602FF_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_EAEEDBC56C4FA30C(::RPG::GameCore::ChenLingFesProperty a1, ::System::Action_2<::System::Single, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesProperty, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85_METHOD_1_EAEEDBC56C4FA30C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_721CDDB345E57783(::RPG::GameCore::ChenLingFesProperty a1, ::System::Action_2<::System::Single, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesProperty, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_64493184DF42DC85_METHOD_1_721CDDB345E57783_OFFSET))(this, a1, a2);
	}
};
