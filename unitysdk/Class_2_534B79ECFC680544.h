#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_105FC3176DAB4CDC;
class Class_2_08B1DF5A17A0044C;
class Class_2_0C7C3BA3B0AAF9F7;
class Class_2_12249856002B17E7;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_534B79ECFC680544_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x11C025B0)
#define CLASS_2_534B79ECFC680544_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x11C025D0)
#define CLASS_2_534B79ECFC680544_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x11C02840)
#define CLASS_2_534B79ECFC680544_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x11C02690)
#define CLASS_2_534B79ECFC680544_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11C027B0)
#define CLASS_2_534B79ECFC680544_METHOD_2_3C4BE7D0653AE1B0_OFFSET UNITYSDK_OFFSET(0x11C03010)
#define CLASS_2_534B79ECFC680544_METHOD_2_4F548348F29E93D9_OFFSET UNITYSDK_OFFSET(0x11C02DA0)
#define CLASS_2_534B79ECFC680544_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x11C03280)
#define CLASS_2_534B79ECFC680544_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11C03220)
#define CLASS_2_534B79ECFC680544_METHOD_2_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x11C02E50)
#define CLASS_2_534B79ECFC680544_METHOD_2_82B6342ECB6008E8_OFFSET UNITYSDK_OFFSET(0x11C02FF0)
#define CLASS_2_534B79ECFC680544_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x11C025E0)
#define CLASS_2_534B79ECFC680544_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x11C025C0)
#define CLASS_2_534B79ECFC680544__CTOR_OFFSET UNITYSDK_OFFSET(0x11C03180)
#define CLASS_2_534B79ECFC680544__ONBIND_OFFSET UNITYSDK_OFFSET(0x11C024C0)
#define CLASS_2_534B79ECFC680544__ONTICK_OFFSET UNITYSDK_OFFSET(0x11C02910)
#define CLASS_2_534B79ECFC680544___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11C031C0)
#define CLASS_2_534B79ECFC680544___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x11C032E0)

inline static constexpr unsigned int Class_2_534B79ECFC680544_TypeDefinitionIndex = 66075;

class Class_2_534B79ECFC680544 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	::Class_2_0C7C3BA3B0AAF9F7* Field_2_0; // 0x60
	::RPG::Client::UIValueChangeAnimation* Field_2_2; // 0x68
	::Class_1_105FC3176DAB4CDC* Field_2_6; // 0x70
	::Class_2_08B1DF5A17A0044C* Field_2_1; // 0x78
	::RPG::Client::MonoInControlTip* Field_2_3; // 0x80
	::Class_2_12249856002B17E7* Field_2_7; // 0x88
	::System::Nullable_1<::RPG::GameCore::IronTombProgressMode> Field_2_8; // 0x90
	::System::Int32 _Index_k__BackingField; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F548348F29E93D9(::Class_1_105FC3176DAB4CDC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105FC3176DAB4CDC*))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_METHOD_2_4F548348F29E93D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_2_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_METHOD_2_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_2_3C4BE7D0653AE1B0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_METHOD_2_3C4BE7D0653AE1B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::RPG::GameCore::IronTombProgressMode Method_2_82B6342ECB6008E8()
	{
		return ((::RPG::GameCore::IronTombProgressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_METHOD_2_82B6342ECB6008E8_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_534B79ECFC680544___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};
