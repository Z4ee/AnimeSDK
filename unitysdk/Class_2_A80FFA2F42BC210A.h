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

#define CLASS_2_A80FFA2F42BC210A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD7D41C0)
#define CLASS_2_A80FFA2F42BC210A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD7D44E0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_1BE562D4DCDDD49D_OFFSET UNITYSDK_OFFSET(0xD7D3520)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_230E8E2F7F1839E2_OFFSET UNITYSDK_OFFSET(0xD7D3AD0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_2A2B4A2E0BDAAF15_OFFSET UNITYSDK_OFFSET(0xD7D3DC0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xD7D3730)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD7D4850)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_5C2158E850B02732_OFFSET UNITYSDK_OFFSET(0xD7D2E40)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0xD7D30B0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_92ED16ECBAFB45C4_OFFSET UNITYSDK_OFFSET(0xD7D2F50)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD7D2DB0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xD7D3F40)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xD7D4070)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xD7D3E40)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0xD7D3FA0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xD7D3230)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_D263FCED0246111F_OFFSET UNITYSDK_OFFSET(0xD7D35B0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0xD7D3A40)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_F162BDE3B419CFCF_OFFSET UNITYSDK_OFFSET(0xD7D39B0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xD7D4100)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xD7D34D0)
#define CLASS_2_A80FFA2F42BC210A__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D47C0)
#define CLASS_2_A80FFA2F42BC210A__ONBIND_OFFSET UNITYSDK_OFFSET(0xD7D2BA0)
#define CLASS_2_A80FFA2F42BC210A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD7D48B0)
#define CLASS_2_A80FFA2F42BC210A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD7D4910)
#define CLASS_2_A80FFA2F42BC210A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD7D47F0)

inline static constexpr unsigned int Class_2_A80FFA2F42BC210A_TypeDefinitionIndex = 66968;

class Class_2_A80FFA2F42BC210A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x4A3A; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::Int32 Field_2_4 = 0x0; // 0x0
	// static const ::System::Int32 Field_2_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_2_6 = 0x2; // 0x0
	::RPG::Client::SystemOpenModule* Field_2_7; // 0x60
	::UnityEngine::Transform* Field_2_8; // 0x68
	::UnityEngine::Animator* Field_2_9; // 0x70
	::UnityEngine::Transform* Field_2_10; // 0x78
	::UnityEngine::Transform* Field_2_11; // 0x80
	::UnityEngine::UI::Button* Field_2_12; // 0x88
	::UnityEngine::Transform* Field_2_13; // 0x90
	::System::Boolean Field_2_14; // 0x98
	::System::Boolean Field_2_15; // 0x99
	::System::Boolean Field_2_16; // 0x9A
	::System::Boolean Field_2_17; // 0x9B
	::System::Boolean Field_2_18; // 0x9C
	::System::Boolean Field_2_19; // 0x9D
	::RPG::Client::TextID Field_2_20; // 0xA0

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

	::System::Void Method_2_5C2158E850B02732()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_5C2158E850B02732_OFFSET))(this);
	}

	::System::Void Method_2_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_6E520D7D4D494BBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_2_1BE562D4DCDDD49D(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_1BE562D4DCDDD49D_OFFSET))(this, a1);
	}

	::System::Void Method_2_D263FCED0246111F(::Class_1_5951D63B6E6C5C74* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5951D63B6E6C5C74*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_D263FCED0246111F_OFFSET))(this, a1);
	}

	::System::Void Method_2_92ED16ECBAFB45C4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_92ED16ECBAFB45C4_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_230E8E2F7F1839E2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_230E8E2F7F1839E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
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
