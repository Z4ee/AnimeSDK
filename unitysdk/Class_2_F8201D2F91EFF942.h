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

#define CLASS_2_F8201D2F91EFF942_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA3C5100)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xA3C4AB0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xA3C5BF0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xA3C46A0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_1_OFFSET UNITYSDK_OFFSET(0xA3C4C60)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_2_OFFSET UNITYSDK_OFFSET(0xA3C5BA0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0xA3C4A60)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA3C5930)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0xA3C4E00)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xA3C4D10)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0xA3C4650)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_8682F7172A20D57E_OFFSET UNITYSDK_OFFSET(0xA3C45E0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0xA3C4EE0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xA3C4950)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0xA3C4CB0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0xA3C49A0)
#define CLASS_2_F8201D2F91EFF942_METHOD_2_E67B8EE7D04609D0_OFFSET UNITYSDK_OFFSET(0xA3C51E0)
#define CLASS_2_F8201D2F91EFF942__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3C5C70)
#define CLASS_2_F8201D2F91EFF942__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C5C60)

inline static constexpr unsigned int Class_2_F8201D2F91EFF942_TypeDefinitionIndex = 68376;

class Class_2_F8201D2F91EFF942 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8201D2F91EFF942_TypeDefinitionIndex)->GetStaticField(0x8AE0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F8201D2F91EFF942_TypeDefinitionIndex)->GetStaticField(0x8AE4);
	}
	::CriWare::CriManaMovieController* Field_2_2; // 0x18
	::System::String* Field_2_3; // 0x20
	::UnityEngine::Material* Field_2_4; // 0x28
	::System::Action* Field_2_5; // 0x30
	::UnityEngine::MeshRenderer* Field_2_6; // 0x38
	::System::Int32 Field_2_7; // 0x40
	::CriWare::CriMana::Player_Status Field_2_8; // 0x44
	::System::Boolean Field_2_9; // 0x48
	::System::Boolean Field_2_10; // 0x49
	::System::Boolean Field_2_11; // 0x4A
	::System::UInt32 Field_2_12; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942__CCTOR_OFFSET))();
	}

	::RPG::Client::VideoTexture* Method_2_8682F7172A20D57E()
	{
		return ((::RPG::Client::VideoTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_8682F7172A20D57E_OFFSET))(this);
	}

	::System::Void Method_2_7A150941533E8F96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_7A150941533E8F96_OFFSET))(this);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_41AA181104E03F2C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_41AA181104E03F2C_1_OFFSET))(this);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_E67B8EE7D04609D0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_E67B8EE7D04609D0_OFFSET))(this, a1);
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

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_2_62165C025F5C0B19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8201D2F91EFF942_METHOD_2_62165C025F5C0B19_OFFSET))(this);
	}
};
