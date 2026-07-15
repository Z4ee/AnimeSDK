#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A73DBEF56638408_Class_1_3ABCC41A05D06339_1;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class FiveDimRTPCConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_5A73DBEF56638408_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DCC8F0)
#define CLASS_1_5A73DBEF56638408_METHOD_1_228C398D600147B3_OFFSET UNITYSDK_OFFSET(0x18DCCB80)
#define CLASS_1_5A73DBEF56638408_METHOD_1_26168049244851F5_OFFSET UNITYSDK_OFFSET(0x18DCD650)
#define CLASS_1_5A73DBEF56638408_METHOD_1_271C61DF1F216E72_OFFSET UNITYSDK_OFFSET(0x18DCD7D0)
#define CLASS_1_5A73DBEF56638408_METHOD_1_50176AAFF18AD4AD_OFFSET UNITYSDK_OFFSET(0x18DCD1B0)
#define CLASS_1_5A73DBEF56638408_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x18DCC970)
#define CLASS_1_5A73DBEF56638408_METHOD_1_817951BDC43BBC1D_OFFSET UNITYSDK_OFFSET(0x18DCD6D0)
#define CLASS_1_5A73DBEF56638408_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x18DCCE70)
#define CLASS_1_5A73DBEF56638408_METHOD_1_BD6FDC5C9F80041A_OFFSET UNITYSDK_OFFSET(0x18DCD100)
#define CLASS_1_5A73DBEF56638408_METHOD_1_C97686B428311BB7_OFFSET UNITYSDK_OFFSET(0x18DCD410)
#define CLASS_1_5A73DBEF56638408__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCC7B0)

inline static constexpr unsigned int Class_1_5A73DBEF56638408_TypeDefinitionIndex = 57804;

class Class_1_5A73DBEF56638408 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::String*, ::Class_1_5A73DBEF56638408_Class_1_3ABCC41A05D06339_1*>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::String*, ::RPG::GameCore::FiveDimRTPCConfig*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A73DBEF56638408__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A73DBEF56638408_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A73DBEF56638408_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A73DBEF56638408_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimRTPCConfig* Method_1_BD6FDC5C9F80041A(::System::String* a1)
	{
		return ((::RPG::GameCore::FiveDimRTPCConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5A73DBEF56638408_METHOD_1_BD6FDC5C9F80041A_OFFSET))(this, a1);
	}

	::System::Void Method_1_50176AAFF18AD4AD(::System::String* a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5A73DBEF56638408_METHOD_1_50176AAFF18AD4AD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C97686B428311BB7(::System::String* a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5A73DBEF56638408_METHOD_1_C97686B428311BB7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_228C398D600147B3(::Class_1_5A73DBEF56638408_Class_1_3ABCC41A05D06339_1* a1, ::RPG::GameCore::FiveDimRTPCConfig* a2, ::System::Single a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A73DBEF56638408_Class_1_3ABCC41A05D06339_1*, ::RPG::GameCore::FiveDimRTPCConfig*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5A73DBEF56638408_METHOD_1_228C398D600147B3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_26168049244851F5(::System::String* a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5A73DBEF56638408_METHOD_1_26168049244851F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_817951BDC43BBC1D(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5A73DBEF56638408_METHOD_1_817951BDC43BBC1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_271C61DF1F216E72(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5A73DBEF56638408_METHOD_1_271C61DF1F216E72_OFFSET))(this, a1, a2);
	}
};
