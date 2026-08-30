#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_5951D63B6E6C5C74;
namespace RPG::Client { class SystemOpenModule; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_A80FFA2F42BC210A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17DE2860)
#define CLASS_2_A80FFA2F42BC210A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17DE2B80)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_1BE562D4DCDDD49D_OFFSET UNITYSDK_OFFSET(0x17DE1AA0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_230E8E2F7F1839E2_OFFSET UNITYSDK_OFFSET(0x17DE2070)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_2A2B4A2E0BDAAF15_OFFSET UNITYSDK_OFFSET(0x17DE2360)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x17DE1CD0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_5C2158E850B02732_OFFSET UNITYSDK_OFFSET(0x17DE13C0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0x17DE1630)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_92ED16ECBAFB45C4_OFFSET UNITYSDK_OFFSET(0x17DE14D0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17DE1330)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x17DE25B0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x17DE2770)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x17DE17B0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_D263FCED0246111F_OFFSET UNITYSDK_OFFSET(0x17DE1B40)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x17DE1FE0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_F162BDE3B419CFCF_OFFSET UNITYSDK_OFFSET(0x17DE1F50)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x17DE2520)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x17DE26B0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17DE23E0)
#define CLASS_2_A80FFA2F42BC210A_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x17DE1A50)
#define CLASS_2_A80FFA2F42BC210A__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE2E60)
#define CLASS_2_A80FFA2F42BC210A__ONBIND_OFFSET UNITYSDK_OFFSET(0x17DE1130)

inline static constexpr unsigned int Class_2_A80FFA2F42BC210A_TypeDefinitionIndex = 71593;

class Class_2_A80FFA2F42BC210A : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Int32 MBKPKFJHODD = 0x4A3A; // 0x0
	// static const ::System::String* KKJNILBOKEJ; // 0x0
	// static const ::System::String* JPBJFIIAGOE; // 0x0
	// static const ::System::String* OGHCLADFIAO; // 0x0
	// static const ::System::Int32 INHJCFGEJFE = 0x0; // 0x0
	// static const ::System::Int32 MHAJOPGFLHM = 0x1; // 0x0
	// static const ::System::Int32 GAHOOFONHJJ = 0x2; // 0x0
	::UnityEngine::Animator* CFNGLMDMENE; // 0x60
	::UnityEngine::Transform* COICMBCGBAE; // 0x68
	::UnityEngine::Transform* CPEBAEFNJKH; // 0x70
	::UnityEngine::Transform* NAMLIBFIFNE; // 0x78
	::UnityEngine::Transform* LOOJEDMAKHC; // 0x80
	::RPG::Client::SystemOpenModule* AGACAPGOBCI; // 0x88
	::UnityEngine::UI::Button* KJIOINOOIHP; // 0x90
	::System::Boolean CPDGFJFHMMG; // 0x98
	::System::Boolean CBILHPMCOMD; // 0x99
	::System::Boolean HABBLKDIKGK; // 0x9A
	::System::Boolean BCMBANIDHNP; // 0x9B
	::System::Boolean GBFBLPJFCGB; // 0x9C
	::System::Boolean EFPEHIKMIDA; // 0x9D
	::RPG::Client::TextID PNBMFCDCDNG; // 0xA0

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

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A80FFA2F42BC210A_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
