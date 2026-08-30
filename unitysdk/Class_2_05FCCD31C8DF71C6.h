#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7175D70942CF05A.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1064;
class Class_1_166E0F5C448FE77D;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
class Class_2_05FCCD31C8DF71C6_Class_1_DF49782B75FABBCB;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace RPG::Client::OpenWorld { template <typename T> class CellStruct_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_05FCCD31C8DF71C6_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xC3ACD50)
#define CLASS_2_05FCCD31C8DF71C6_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0xC3ACA50)
#define CLASS_2_05FCCD31C8DF71C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3A8730)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_176FFA50C1F3821C_OFFSET UNITYSDK_OFFSET(0xC3AA880)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_28D8EC4589B1C4B8_OFFSET UNITYSDK_OFFSET(0xC3ABC30)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_3407EE44BF43A6A4_OFFSET UNITYSDK_OFFSET(0xC3A8A40)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_356A8AB268440A1F_OFFSET UNITYSDK_OFFSET(0xC3ACE60)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_3F3693110F25FD62_OFFSET UNITYSDK_OFFSET(0xC3A8930)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_5DE00ED3D9EFB4BA_OFFSET UNITYSDK_OFFSET(0xC3ABE50)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_75DEE7A74EA0F7C2_OFFSET UNITYSDK_OFFSET(0xC3ABD10)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_8D68E1C80950460F_OFFSET UNITYSDK_OFFSET(0xC3A99D0)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_93E37F35EE782FFC_OFFSET UNITYSDK_OFFSET(0xC3AB520)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_A877DE024E06B561_OFFSET UNITYSDK_OFFSET(0xC3ACB10)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_BA9FCEE8D9831F4F_OFFSET UNITYSDK_OFFSET(0xC3A9160)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_BEAE9B9FA494D648_OFFSET UNITYSDK_OFFSET(0xC3A9FB0)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_BFA195F09950C507_OFFSET UNITYSDK_OFFSET(0xC3AB410)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_C7D0E24443F285BF_OFFSET UNITYSDK_OFFSET(0xC3AC7B0)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_E44FD2AE32DFF0AA_OFFSET UNITYSDK_OFFSET(0xC3A98A0)
#define CLASS_2_05FCCD31C8DF71C6_METHOD_2_FEF999131EAD8C08_OFFSET UNITYSDK_OFFSET(0xC3AA280)
#define CLASS_2_05FCCD31C8DF71C6_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0xC3AC9B0)
#define CLASS_2_05FCCD31C8DF71C6__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3ACF00)
#define CLASS_2_05FCCD31C8DF71C6__CTOR_OFFSET UNITYSDK_OFFSET(0xC3A8370)
#define CLASS_2_05FCCD31C8DF71C6__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0xC3AC310)

inline static constexpr unsigned int Class_2_05FCCD31C8DF71C6_TypeDefinitionIndex = 73745;

class Class_2_05FCCD31C8DF71C6 : public ::Class_1_E7175D70942CF05A
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_JGKEEJCCBCO()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_05FCCD31C8DF71C6_TypeDefinitionIndex)->GetStaticField(0x544E0);
	}
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*>* ECICLILIDJJ; // 0x170
	::Class_2_05FCCD31C8DF71C6_Class_1_DF49782B75FABBCB* GKPGMBLHBCF; // 0x178
	::Class_2_05FCCD31C8DF71C6_Class_1_DF49782B75FABBCB* ADBOANJGCCK; // 0x180
	::Class_1_166E0F5C448FE77D* CMPEGHAGBDC; // 0x188
	::Class_2_05FCCD31C8DF71C6_Class_1_DF49782B75FABBCB* JBFHLLICIFK; // 0x190
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* KIHCPNIAIPO; // 0x198
	::RPG::Client::OpenWorld::CellStruct_1<::RPG::Client::OpenWorld::StreamingItemData*>* HGDDMHIPHIB; // 0x1A0
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* KBLOKGOGPPK; // 0x1A8
	::System::Boolean FGBEDKCJMNB; // 0x1B0

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3F3693110F25FD62(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_3F3693110F25FD62_OFFSET))(this, a1);
	}

	::System::Void Method_2_3407EE44BF43A6A4(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_3407EE44BF43A6A4_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BA9FCEE8D9831F4F(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_BA9FCEE8D9831F4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E44FD2AE32DFF0AA(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_E44FD2AE32DFF0AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D68E1C80950460F(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_8D68E1C80950460F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BEAE9B9FA494D648(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_BEAE9B9FA494D648_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FEF999131EAD8C08(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_FEF999131EAD8C08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_176FFA50C1F3821C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_176FFA50C1F3821C_OFFSET))(this);
	}

	::System::Int32 Method_2_BFA195F09950C507(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_BFA195F09950C507_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_2_93E37F35EE782FFC(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::Class_1_DE4C6B309308A230* a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_93E37F35EE782FFC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_28D8EC4589B1C4B8(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_28D8EC4589B1C4B8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5DE00ED3D9EFB4BA(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_5DE00ED3D9EFB4BA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_C7D0E24443F285BF(::Class_0_16E4307DCC419505_1064* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1064*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_C7D0E24443F285BF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Method_2_A877DE024E06B561(::UnityEngine::Rect a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_A877DE024E06B561_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_75DEE7A74EA0F7C2(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_75DEE7A74EA0F7C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_356A8AB268440A1F(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_05FCCD31C8DF71C6_METHOD_2_356A8AB268440A1F_OFFSET))(this, a1, a2, a3);
	}
};
