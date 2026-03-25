#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace CriWare { class CriManaMovieController; }
namespace RPG::Client { class VideoTexture; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_2_F8201D2F91EFF942_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x8BD6ED0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x8BD6C70)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x8BD78D0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x8BD7B10)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x8BD68F0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x8BD7240)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_1_OFFSET UNITYSDK_OFFSET(0x8BD6E20)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_2_OFFSET UNITYSDK_OFFSET(0x8BD7AC0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x8BD6C20)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x8BD6E70)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_5284DC35E5C00336_OFFSET UNITYSDK_OFFSET(0x8BD72E0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0x8BD6FE0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_776108912857F639_OFFSET UNITYSDK_OFFSET(0x8BD6850)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0x8BD68A0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x8BD70C0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x8BD6B40)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x8BD6B90)
#define CLASS_2_F8201D2F91EFF942__CCTOR_OFFSET UNITYSDK_OFFSET(0x8BD7B90)
#define CLASS_2_F8201D2F91EFF942__CTOR_OFFSET UNITYSDK_OFFSET(0x8BD7B80)

inline static constexpr unsigned int Class_2_F8201D2F91EFF942_TypeDefinitionIndex = 60026;

class Class_2_F8201D2F91EFF942 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_2_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8201D2F91EFF942_TypeDefinitionIndex)->GetStaticField(0x12CE0);
	}
	static ::System::Int32* StaticGet_Field_2_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8201D2F91EFF942_TypeDefinitionIndex)->GetStaticField(0x12CE4);
	}
	::System::String* Field_2_0; // 0x18
	::System::Action* Field_2_9; // 0x20
	::CriWare::CriManaMovieController* Field_2_1; // 0x28
	::UnityEngine::MeshRenderer* Field_2_3; // 0x30
	::UnityEngine::Material* Field_2_4; // 0x38
	::System::Int32 Field_2_2; // 0x40
	::System::UInt32 Field_2_8; // 0x44
	::System::Boolean Field_2_10; // 0x48
	::System::Boolean Field_2_5; // 0x49
	::System::Boolean Field_2_7; // 0x4A
	::CriWare::CriMana::Player_Status Field_2_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942__CCTOR_OFFSET))();
	}

	::RPG::Client::VideoTexture* Method_2_776108912857F639()
	{
		return ((::RPG::Client::VideoTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_776108912857F639_OFFSET))(this);
	}

	::System::Void Method_2_7A150941533E8F96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_7A150941533E8F96_OFFSET))(this);
	}

	::System::Void Method_2_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_41AA181104E03F2C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_1_OFFSET))(this);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_5284DC35E5C00336(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_5284DC35E5C00336_OFFSET))(this, a1);
	}

	::System::Void Method_2_41AA181104E03F2C_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_2_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Void Method_2_62165C025F5C0B19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_62165C025F5C0B19_OFFSET))(this);
	}
};
