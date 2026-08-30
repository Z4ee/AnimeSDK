#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Object.h"

class Class_1_FD711FBD7923B1D0;
namespace RPG::Client { class AirlineBirdWay; }
namespace RPG::Client { class AirshipBirdEmitter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_0F0E59A49B342472_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153E9BB0)
#define CLASS_1_0F0E59A49B342472_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x153EAD70)
#define CLASS_1_0F0E59A49B342472_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x153EAD80)
#define CLASS_1_0F0E59A49B342472_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x153EAD90)
#define CLASS_1_0F0E59A49B342472_METHOD_1_1588CC8352F055BF_OFFSET UNITYSDK_OFFSET(0x153EA3B0)
#define CLASS_1_0F0E59A49B342472_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x153E9D70)
#define CLASS_1_0F0E59A49B342472_METHOD_1_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x153E9DE0)
#define CLASS_1_0F0E59A49B342472_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x153EACB0)
#define CLASS_1_0F0E59A49B342472_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x153E9AF0)
#define CLASS_1_0F0E59A49B342472_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x153E9750)
#define CLASS_1_0F0E59A49B342472_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x153E9830)
#define CLASS_1_0F0E59A49B342472_METHOD_1_6DAEAFEF809DA236_OFFSET UNITYSDK_OFFSET(0x153EA0B0)
#define CLASS_1_0F0E59A49B342472_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x153E9260)
#define CLASS_1_0F0E59A49B342472_METHOD_1_D126A9270C6BEF9E_OFFSET UNITYSDK_OFFSET(0x153EA8B0)
#define CLASS_1_0F0E59A49B342472_METHOD_1_ECDD4B6593FA2BB9_OFFSET UNITYSDK_OFFSET(0x153EA960)
#define CLASS_1_0F0E59A49B342472_METHOD_1_EE97EFC752A55D2E_OFFSET UNITYSDK_OFFSET(0x153EAC00)
#define CLASS_1_0F0E59A49B342472_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x153EADA0)
#define CLASS_1_0F0E59A49B342472__CCTOR_OFFSET UNITYSDK_OFFSET(0x153EAE20)
#define CLASS_1_0F0E59A49B342472__CTOR_OFFSET UNITYSDK_OFFSET(0x153E9050)

inline static constexpr unsigned int Class_1_0F0E59A49B342472_TypeDefinitionIndex = 59943;

class Class_1_0F0E59A49B342472 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_ILMPEJFKMFJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F0E59A49B342472_TypeDefinitionIndex)->GetStaticField(0x111F0);
	}
	::System::String* JLKFFKGABBC; // 0x10
	::System::Collections::Generic::List_1<::Class_1_FD711FBD7923B1D0*>* IFCAPLOMACM; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* JLCLNDAEMML; // 0x20
	::RPG::Client::AirlineBirdWay* PLOCJFAHLPK; // 0x28
	::RPG::Client::AirshipBirdEmitter* DHOEAAPGHFK; // 0x30
	::Class_1_FD711FBD7923B1D0* LIGEPMNFLCO; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_F93DE209E992FF0D>* BHEGIGJGKOB; // 0x40
	::System::UInt32 MJPPOIHKCCB; // 0x48
	::System::Single CBPJMLPBEIG; // 0x4C

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472__CCTOR_OFFSET))();
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C409C2CC83887DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_1C409C2CC83887DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_1588CC8352F055BF(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_1588CC8352F055BF_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_ECDD4B6593FA2BB9(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_ECDD4B6593FA2BB9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6DAEAFEF809DA236(::Class_1_FD711FBD7923B1D0* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD711FBD7923B1D0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_6DAEAFEF809DA236_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D126A9270C6BEF9E(::Class_1_FD711FBD7923B1D0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD711FBD7923B1D0*))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_D126A9270C6BEF9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_EE97EFC752A55D2E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_EE97EFC752A55D2E_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_GET_GROUPID_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Single get_TimeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_GET_TIMESCALE_OFFSET))(this);
	}

	::System::Void set_TimeScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0F0E59A49B342472_SET_TIMESCALE_OFFSET))(this, a1);
	}
};
