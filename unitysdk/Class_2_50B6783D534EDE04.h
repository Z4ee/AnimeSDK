#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7175D70942CF05A.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_50B6783D534EDE04_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xB4A84E0)
#define CLASS_2_50B6783D534EDE04_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4A7550)
#define CLASS_2_50B6783D534EDE04_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0xB4A7970)
#define CLASS_2_50B6783D534EDE04_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0xB4A8090)
#define CLASS_2_50B6783D534EDE04_METHOD_2_0DB760998E726ACF_OFFSET UNITYSDK_OFFSET(0xB4A7B50)
#define CLASS_2_50B6783D534EDE04_METHOD_2_58E3B136FFD3F3C2_OFFSET UNITYSDK_OFFSET(0xB4A7730)
#define CLASS_2_50B6783D534EDE04_METHOD_2_7D13C8E628CA4EDC_OFFSET UNITYSDK_OFFSET(0xB4A8590)
#define CLASS_2_50B6783D534EDE04_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xB4A8870)
#define CLASS_2_50B6783D534EDE04_METHOD_2_93348C4111A75C2E_OFFSET UNITYSDK_OFFSET(0xB4A7FF0)
#define CLASS_2_50B6783D534EDE04_METHOD_2_ADB7BE6DF3958D2E_OFFSET UNITYSDK_OFFSET(0xB4A83D0)
#define CLASS_2_50B6783D534EDE04_METHOD_2_DCF93F6D70149715_OFFSET UNITYSDK_OFFSET(0xB4A78A0)
#define CLASS_2_50B6783D534EDE04_METHOD_2_DDCA8161F84E5029_OFFSET UNITYSDK_OFFSET(0xB4A8480)
#define CLASS_2_50B6783D534EDE04_METHOD_2_E71D5041CAF874B1_OFFSET UNITYSDK_OFFSET(0xB4A8690)
#define CLASS_2_50B6783D534EDE04_METHOD_2_F804535C56812333_OFFSET UNITYSDK_OFFSET(0xB4A7F40)
#define CLASS_2_50B6783D534EDE04_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0xB4A8250)
#define CLASS_2_50B6783D534EDE04__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4A88C0)
#define CLASS_2_50B6783D534EDE04__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A72E0)

inline static constexpr unsigned int Class_2_50B6783D534EDE04_TypeDefinitionIndex = 73818;

class Class_2_50B6783D534EDE04 : public ::Class_1_E7175D70942CF05A
{
public:
	static ::RPG::GameCore::LodTemplate** StaticGet_GBOGNEMLFEP()
	{
		return (::RPG::GameCore::LodTemplate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_50B6783D534EDE04_TypeDefinitionIndex)->GetStaticField(0x65720);
	}
	::System::Collections::Generic::List_1<::System::String*>* KPNKEALKEGP; // 0x170
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* IKELPIKIICD; // 0x178
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OpenWorld::StreamingItemData*>* DKGFDENGLGG; // 0x180

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_58E3B136FFD3F3C2(::RPG::GameCore::HoyoTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_METHOD_2_58E3B136FFD3F3C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_DCF93F6D70149715(::RPG::GameCore::HoyoTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_METHOD_2_DCF93F6D70149715_OFFSET))(this, a1);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_0DB760998E726ACF(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_METHOD_2_0DB760998E726ACF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F804535C56812333(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_METHOD_2_F804535C56812333_OFFSET))(this, a1);
	}

	::System::Void InsertToAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_INSERTTOAOI_OFFSET))(this, a1);
	}

	::System::Void RemoveFromAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_REMOVEFROMAOI_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADB7BE6DF3958D2E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_METHOD_2_ADB7BE6DF3958D2E_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_DDCA8161F84E5029(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_METHOD_2_DDCA8161F84E5029_OFFSET))(this, a1);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_7D13C8E628CA4EDC(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_METHOD_2_7D13C8E628CA4EDC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E71D5041CAF874B1(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_METHOD_2_E71D5041CAF874B1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_93348C4111A75C2E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_50B6783D534EDE04_METHOD_2_93348C4111A75C2E_OFFSET))(this, a1);
	}
};
