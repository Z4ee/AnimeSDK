#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_5951D63B6E6C5C74;
namespace RPG::Client { class SystemOpenModule; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_A80FFA2F42BC210A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11347170)
#define CLASS_2_A80FFA2F42BC210A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11347450)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_04EAA728819FA889_OFFSET UNITYSDK_OFFSET(0x11345F60)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11346700)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0x11346210)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_2A2B4A2E0BDAAF15_OFFSET UNITYSDK_OFFSET(0x11346D50)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11347780)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0x113460A0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_72A8068D2AF9B485_OFFSET UNITYSDK_OFFSET(0x11345E60)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_75E467EFA086DB0F_OFFSET UNITYSDK_OFFSET(0x113464F0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x11346580)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11345DD0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11346EC0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x11346FF0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11346DD0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x11346F20)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x113464A0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x11346A50)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x113469C0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_F162BDE3B419CFCF_OFFSET UNITYSDK_OFFSET(0x11346930)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x11347080)
#define CLASS_2_A80FFA2F42BC210A__CTOR_OFFSET UNITYSDK_OFFSET(0x113476F0)
#define CLASS_2_A80FFA2F42BC210A__ONBIND_OFFSET UNITYSDK_OFFSET(0x11345B20)
#define CLASS_2_A80FFA2F42BC210A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x113477E0)
#define CLASS_2_A80FFA2F42BC210A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11347840)
#define CLASS_2_A80FFA2F42BC210A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11347720)

inline static constexpr unsigned int Class_2_A80FFA2F42BC210A_TypeDefinitionIndex = 58711;

class Class_2_A80FFA2F42BC210A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_6 = 0x4A3A; // 0x0
	// static const ::System::String* Field_2_15; // 0x0
	// static const ::System::String* Field_2_16; // 0x0
	// static const ::System::String* Field_2_17; // 0x0
	// static const ::System::Int32 Field_2_18 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_19 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_20 = 0x2; // 0x0
	::UnityEngine::UI::Button* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_5; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::UnityEngine::Transform* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80
	::RPG::Client::SystemOpenModule* Field_2_7; // 0x88
	::UnityEngine::Animator* Field_2_0; // 0x90
	::System::Boolean Field_2_8; // 0x98
	::System::Boolean Field_2_12; // 0x99
	::System::Boolean Field_2_9; // 0x9A
	::System::Boolean Field_2_10; // 0x9B
	::System::Boolean Field_2_13; // 0x9C
	::System::Boolean Field_2_11; // 0x9D
	::RPG::Client::TextID Field_2_14; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_72A8068D2AF9B485()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_72A8068D2AF9B485_OFFSET))(this);
	}

	::System::Void Method_2_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_609FA3D38FA252B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_C782C60E11964C7F_OFFSET))(this);
	}

	::System::Void Method_2_75E467EFA086DB0F(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_75E467EFA086DB0F_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F68D6D1D153FE6C(::Class_1_5951D63B6E6C5C74* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5951D63B6E6C5C74*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}

	::System::Void Method_2_04EAA728819FA889()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_04EAA728819FA889_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_1CDA0051FD244886()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_1CDA0051FD244886_OFFSET))(this);
	}

	::System::Void Method_2_2A2B4A2E0BDAAF15(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_2A2B4A2E0BDAAF15_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F162BDE3B419CFCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_F162BDE3B419CFCF_OFFSET))(this);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
