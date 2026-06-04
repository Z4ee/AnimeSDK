#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
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

#define CLASS_2_BD469FCFEC093061_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xA418A10)
#define CLASS_2_BD469FCFEC093061_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA417970)
#define CLASS_2_BD469FCFEC093061_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0xA417DC0)
#define CLASS_2_BD469FCFEC093061_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0xA418590)
#define CLASS_2_BD469FCFEC093061_METHOD_2_0DB760998E726ACF_OFFSET UNITYSDK_OFFSET(0xA418050)
#define CLASS_2_BD469FCFEC093061_METHOD_2_159A1EA59A505CAC_OFFSET UNITYSDK_OFFSET(0xA418440)
#define CLASS_2_BD469FCFEC093061_METHOD_2_2658A1BA84098413_OFFSET UNITYSDK_OFFSET(0xA4188C0)
#define CLASS_2_BD469FCFEC093061_METHOD_2_3463334F3C916ED0_OFFSET UNITYSDK_OFFSET(0xA418F80)
#define CLASS_2_BD469FCFEC093061_METHOD_2_529176E12CEF1A3E_OFFSET UNITYSDK_OFFSET(0xA418810)
#define CLASS_2_BD469FCFEC093061_METHOD_2_76FB0C4ED730F58B_OFFSET UNITYSDK_OFFSET(0xA418F40)
#define CLASS_2_BD469FCFEC093061_METHOD_2_7D13C8E628CA4EDC_OFFSET UNITYSDK_OFFSET(0xA418AC0)
#define CLASS_2_BD469FCFEC093061_METHOD_2_7D8635EB900C4D09_OFFSET UNITYSDK_OFFSET(0xA419040)
#define CLASS_2_BD469FCFEC093061_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xA418E50)
#define CLASS_2_BD469FCFEC093061_METHOD_2_93348C4111A75C2E_OFFSET UNITYSDK_OFFSET(0xA4184F0)
#define CLASS_2_BD469FCFEC093061_METHOD_2_9A959829C73A55F8_OFFSET UNITYSDK_OFFSET(0xA418BC0)
#define CLASS_2_BD469FCFEC093061_METHOD_2_A14A1EB3F7EFF137_OFFSET UNITYSDK_OFFSET(0xA418F00)
#define CLASS_2_BD469FCFEC093061_METHOD_2_A9B986BBBEA1AFBA_OFFSET UNITYSDK_OFFSET(0xA417D10)
#define CLASS_2_BD469FCFEC093061_METHOD_2_B1C9104A36114189_OFFSET UNITYSDK_OFFSET(0xA418F30)
#define CLASS_2_BD469FCFEC093061_METHOD_2_D450CF94CDEE1A59_OFFSET UNITYSDK_OFFSET(0xA417B50)
#define CLASS_2_BD469FCFEC093061_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0xA4186F0)
#define CLASS_2_BD469FCFEC093061__CCTOR_OFFSET UNITYSDK_OFFSET(0xA418EA0)
#define CLASS_2_BD469FCFEC093061__CTOR_OFFSET UNITYSDK_OFFSET(0xA417700)
#define CLASS_2_BD469FCFEC093061___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xA418F50)
#define CLASS_2_BD469FCFEC093061___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA418EE0)
#define CLASS_2_BD469FCFEC093061___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0xA418EF0)
#define CLASS_2_BD469FCFEC093061___IFIXBASEPROXY_INSERTTOAOI_OFFSET UNITYSDK_OFFSET(0xA418F10)
#define CLASS_2_BD469FCFEC093061___IFIXBASEPROXY_REMOVEFROMAOI_OFFSET UNITYSDK_OFFSET(0xA418F20)

inline static constexpr unsigned int Class_2_BD469FCFEC093061_TypeDefinitionIndex = 68907;

class Class_2_BD469FCFEC093061 : public ::Class_1_5B228A4605C15E47
{
public:
	static ::RPG::GameCore::LodTemplate** StaticGet_Field_2_0()
	{
		return (::RPG::GameCore::LodTemplate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BD469FCFEC093061_TypeDefinitionIndex)->GetStaticField(0x45D30);
	}
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x170
	::System::Collections::Generic::HashSet_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_2; // 0x178
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_3; // 0x180

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D450CF94CDEE1A59(::RPG::GameCore::HoyoTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_D450CF94CDEE1A59_OFFSET))(this, a1);
	}

	::System::Void Method_2_A9B986BBBEA1AFBA(::RPG::GameCore::HoyoTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_A9B986BBBEA1AFBA_OFFSET))(this, a1);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_0DB760998E726ACF(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_0DB760998E726ACF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_159A1EA59A505CAC(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_159A1EA59A505CAC_OFFSET))(this, a1);
	}

	::System::Void InsertToAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_INSERTTOAOI_OFFSET))(this, a1);
	}

	::System::Void RemoveFromAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_REMOVEFROMAOI_OFFSET))(this, a1);
	}

	::System::Void Method_2_529176E12CEF1A3E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_529176E12CEF1A3E_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_2658A1BA84098413(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_2658A1BA84098413_OFFSET))(this, a1);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_7D13C8E628CA4EDC(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_7D13C8E628CA4EDC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9A959829C73A55F8(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_9A959829C73A55F8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_93348C4111A75C2E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_93348C4111A75C2E_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Int32 __iFixBaseProxy_GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_A14A1EB3F7EFF137(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_A14A1EB3F7EFF137_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_InsertToAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061___IFIXBASEPROXY_INSERTTOAOI_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_RemoveFromAOI(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061___IFIXBASEPROXY_REMOVEFROMAOI_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1C9104A36114189(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_B1C9104A36114189_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_76FB0C4ED730F58B(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_76FB0C4ED730F58B_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_3463334F3C916ED0(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_3463334F3C916ED0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7D8635EB900C4D09(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BD469FCFEC093061_METHOD_2_7D8635EB900C4D09_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
